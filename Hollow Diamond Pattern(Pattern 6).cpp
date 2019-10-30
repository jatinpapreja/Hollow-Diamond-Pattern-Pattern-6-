#include<iostream>
using namespace std;
int main()
{
    int n,i,j,hn,eq_i,eq_j;
    cin>>n;
    hn=(n+1)/2;
    for(i=1;i<=n;i++)
    {
        if(i<=hn)eq_i=i;
        else eq_i=n-i+1;
        for(j=1;j<=n;j++)
        {
            if(j<=hn)eq_j=j;
            else eq_j=n-j+1;

            if((n+3)/2<eq_i+eq_j && eq_i+eq_j<=n+1)cout<<'\t';
            else cout<<"*"<<'\t';
        }
        cout<<endl;
    }
}
