/*Minimum length of subarr*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int key;
	cin>>key;
	int i,j,k;
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int length=0;
	for(i=0; i<n; i++)
	{
		if(arr[i]==key)
		{
		    cout<<arr[i]<<endl;
			length++;
			break;
		}
	}
	if(length==0) {
		for(i=0; i<n; i++)
		{
			for(j=i+1; j<n; j++)
			{
				if(arr[i]+arr[j]==key)
				{
				     cout<<arr[i]<<arr[j]<<endl;
					length++;
					break;
				}
			}
		}
	}

	if(length==0) {
		for(i=0; i<n; i++)
		{
			for(j=i+1; j<n; j++)
				for(k=j+1; k<n; k++)
				{

					if(arr[i]+arr[j]+arr[k]==key)
					{
					     cout<<arr[i]<<arr[j]<<arr[k]<<endl;
						length++;
						break;
					}
				}
		}
	}
	cout<<length;
}