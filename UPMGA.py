from rosalind import Tree,read_matrix,DPrint 

def UPGMA(D, n):
    def find_two_closest_clusters():
        ii=-1
        jj=-1
        best_distance=float('inf')
        for i in range(len(D)):
            for j in range(i):
                if i in Clusters and j in Clusters and D[i][j]<best_distance:
                    ii=i
                    jj=j
                    best_distance=D[i][j]
        return (ii,jj,best_distance)    
    Clusters={}
    for i in range(n):
        Clusters[i]=[i]

    T=Tree(n)
    Age={}
    for node in T.get_nodes():
        Age[node]=0
    while len(Clusters)>1:
        def d(i,j):
            return sum([D[cl_i][cl_j] for cl_i in Clusters[i] for cl_j in Clusters[j]])/(len( Clusters[i])* len(Clusters[j])) \
                   if i in Clusters and j in Clusters \
                   else float('nan')
  
        i,j,distance=find_two_closest_clusters()
        node=T.next_node()

        T.link(node,i)
        T.link(node,j)        
        Clusters[node]=Clusters[i]+Clusters[j]
        Age[node]=D[i][j]/2
        del Clusters[i]
        del Clusters[j]

        row=[d(i,node) for i in range(len(D))] + [0.0]
        for k in range(len(D)):
            D[k].append(row[k])
        D.append(row)

    for node in T.nodes:
        T.edges[node]=[(e,abs(Age[node]-Age[e])) for e,W in T.edges[node]]
        
    return T

if __name__=='__main__':
    params,D=read_matrix('dataset_10332_8.txt',conv=float) 
    UPGMA(D, params[0]).print()
