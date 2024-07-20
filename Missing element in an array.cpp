/*Missing element in an array*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int i;
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    int sum1=(n*(n+1))/2;
    int sum2=0;
    for(i=0;i<n-1;i++)
    {
        sum2+=a[i];
    }
    if(sum1!=sum2)
    {
        cout<<sum1-sum2;
    }
}