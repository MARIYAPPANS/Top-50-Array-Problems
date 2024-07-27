/*Equilibrium Sum*/
/*Input: 7
-7 2 4 9 -8 1 6 
Output: 4(index)*/
#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    if(n%2==0)
    {
        int k=n/2;
        int sum1=0;
        for(i=1;i<=k;i++)
        {
            sum1+=arr[i];
        }
        int sum2=0;
        for(i=n-1;i>=k;i--)
        {
            sum2+=arr[i];
        }
        if(sum1==sum2)
        {
            cout<<n/2;
        }
        else
        {
            cout<<"Not Found";
        }
        
    }
    else
    {
        int k=n/2;
        int sum1=0;
        for(i=1;i<=k;i++)
        {
            sum1+=arr[i];
        }
        int sum2=0;
        for(i=((n+1)/2)+1;i<=n;i++)
        {
            sum2+=arr[i];
        }
        if(sum1==sum2)
        {
            cout<<(n+1)/2;
        }
        else
        {
            cout<<"Not Found";
        }
        
    }
   
}