/*Rotate an array*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int lt=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=lt;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}