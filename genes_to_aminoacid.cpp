#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std ;



int main ( )
{
int n;
cout<<"N should be devided by 3"<<"\n"<<"N= ";
cin>>n;
if (n%3==0)
{
cout<<"no error"<<"\n";
}
else
{
  cout<<"Error"<< "\n";
  return 0;
}
char Ge[n];
cout<<"Type genome"<<"\n";
cout<<"Only A,T,C,G are possible"<<"\n";
cin>>Ge;
char A=*"A";
char T=*"T";
char G=*"G";
char C=*"C";
int count =0;
for(int i = 0; i <n; i++)  {
if(Ge[i] == A)
count++;
}
for(int i = 0; i <n; i++)  {
if(Ge[i] == T)
count++;
}
for(int i = 0; i <n; i++)  {
if(Ge[i] == G)
count++;
}
for(int i = 0; i <n; i++)  {
if(Ge[i] == C)
count++;
}
if (count==n)
{
    cout<<"No error"<<"\n";
}
else
{
    cout<<"Error"<<"\n";
    return 0;
}
char s1[n];
int cpos = 0;
int i;
//-----------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'P';
        s1[cpos+1] = 'h';
        s1[cpos+2] = 'e';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'S';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'T';
        s1[cpos+1] = 'y';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'C';
        s1[cpos+1] = 'y';
        s1[cpos+2] = 's';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'P';
        s1[cpos+1] = 'h';
        s1[cpos+2] = 'e';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'S';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'T';
        s1[cpos+1] = 'y';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'C';
        s1[cpos+1] = 'y';
        s1[cpos+2] = 's';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'L';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'u';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'S';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'T';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'T';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'L';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'u';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'S';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'T';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'T')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'T';
        s1[cpos+1] = 'r';
        s1[cpos+2] = 'p';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'L';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'u';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'P';
        s1[cpos+1] = 'r';
        s1[cpos+2] = 'o';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'H';
        s1[cpos+1] = 'i';
        s1[cpos+2] = 's';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 'r';
        s1[cpos+2] = 'g';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'L';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'u';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'P';
        s1[cpos+1] = 'r';
        s1[cpos+2] = 'o';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'H';
        s1[cpos+1] = 'i';
        s1[cpos+2] = 's';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 'r';
        s1[cpos+2] = 'g';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'L';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'u';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'P';
        s1[cpos+1] = 'r';
        s1[cpos+2] = 'o';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'G';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'n';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 'r';
        s1[cpos+2] = 'g';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'L';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'u';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'P';
        s1[cpos+1] = 'r';
        s1[cpos+2] = 'o';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'G';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'n';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'C')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 'r';
        s1[cpos+2] = 'g';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'I';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'e';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'T';
        s1[cpos+1] = 'h';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 's';
        s1[cpos+2] = 'n';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'S';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'I';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'e';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'T';
        s1[cpos+1] = 'h';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 's';
        s1[cpos+2] = 'n';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'S';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'I';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'e';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'T';
        s1[cpos+1] = 'h';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'L';
        s1[cpos+1] = 'y';
        s1[cpos+2] = 's';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 'r';
        s1[cpos+2] = 'g';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'M';
        s1[cpos+1] = 'e';
        s1[cpos+2] = 't';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'T';
        s1[cpos+1] = 'h';
        s1[cpos+2] = 'r';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'L';
        s1[cpos+1] = 'y';
        s1[cpos+2] = 's';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'A')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 'r';
        s1[cpos+2] = 'g';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'V';
        s1[cpos+1] = 'a';
        s1[cpos+2] = 'l';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'V';
        s1[cpos+1] = 'a';
        s1[cpos+2] = 'l';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'V';
        s1[cpos+1] = 'a';
        s1[cpos+2] = 'l';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'T') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'V';
        s1[cpos+1] = 'a';
        s1[cpos+2] = 'l';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'a';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'a';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'a';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'C') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'a';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 's';
        s1[cpos+2] = 'p';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'A';
        s1[cpos+1] = 's';
        s1[cpos+2] = 'p';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'G';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'u';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'A') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'G';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'u';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'T')) //
        {
        cpos = i;
        s1[cpos] = 'G';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'y';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'C')) //
        {
        cpos = i;
        s1[cpos] = 'G';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'y';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'A')) //
        {
        cpos = i;
        s1[cpos] = 'G';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'y';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        for (i = 0; i < n; i+=3)
        {
        if (Ge[i] == 'G')
        {
        if ((Ge[i+1] == 'G') && (Ge[i+2] == 'G')) //
        {
        cpos = i;
        s1[cpos] = 'G';
        s1[cpos+1] = 'l';
        s1[cpos+2] = 'y';
        }
        }
        }
//---------------------------------------------------------------------------------------------
        
        cout<<s1<<endl;

return 0;
}