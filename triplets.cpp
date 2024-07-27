/*triplets*/
#include<iostream>
using namespace std;
int main()
{
    int pr;
    cin>>pr;
    int n;
    cin>>n;
    int arr[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {   int pr1=1;
            for(k=j+1;k<n;k++)
            {
                pr1=arr[i]*arr[j]*arr[k];
                if(pr1==pr)
                {
                    cout<<arr[i]<<arr[j]<<arr[k]<<endl;
                }
            }
        }
        
    }
}