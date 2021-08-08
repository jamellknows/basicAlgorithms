// A C++ Linear Search Algorithm 

#include <iostream> 
#include <algorithm>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if(arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int arr[100] = { 0   };
    cin >> arr;
    int x; 
    cin >>  x; 
    int n = sizeof(arr) / sizeof(arr[0]);

    //Function call

    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result << endl;
    return 0;
}