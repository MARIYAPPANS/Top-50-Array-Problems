/*First Repeating Element*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j;
    int b;
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(count==0)
            {
            if(a[i]==a[j])
            {
                b=i;
                count++;
            }
            }
        }
    }
    if(count==0)
    {
        cout<<-1;
    }
    else{
        cout<<b;
    }
}