/*Count pairs with given sum*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int key;
    cin >> key;
    bool foundPair = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] + arr[j] == key)
            {
                cout << arr[i] << " " << arr[j] << endl;
                foundPair = true;
            }
        }
    }
    
    if (!foundPair)
    {
        cout << "No such pair found." << endl;
    }
    
    return 0;
}
