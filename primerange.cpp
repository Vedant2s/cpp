#include<iostream>
using namespace std;
int main()
{
    int n,n2,i;
    cin>>n>>n2;
    for(int g=n;g<=n2;g++)
    {
        for(i=2;i<g;i++)
    {
        if(g%i==0)
        break;
    }
    if(i==g)
       {
            cout<<g<<endl;
       }
    }
    return 0;
}
