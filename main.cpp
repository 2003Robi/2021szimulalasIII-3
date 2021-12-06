#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int v[10],i,k,x,s=0;
    for(i=1 ; i<=10 ; i++)
        v[i]=0;
    while(in>>x)
        v[x]++;
    k=0;
    for(i=1 ; i<=10 ; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    for(i=1 ; i<=10 ; i++)
        if(v[i]!=0)
        k++;
    s=s+k*10;
    for(i=1 ; i<=10 ; i++)
        if(v[i]!=0)
        s=s+i*i;
    cout<<s;
    return 0;
}
