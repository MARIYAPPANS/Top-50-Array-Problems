/*Common in 3 Sorted Arrays*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int m;
    int k;
    cin>>n>>m>>k;
    vector<int>a(n);
    vector<int>b(m);
    vector<int>c(k);
    int i,j,l;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<m;j++)
    {
        cin>>b[j];
    }
    for(l=0;l<k;l++)
    {
        cin>>c[l];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
            for(l=0;l<k;l++)
            {
                if(b[j]==c[l])
                {
                    cout<<b[j];
                }
            }
            }
        }
    }
}