#include <bits/stdc++.h>
using namespace std; 

/*a recurssive binary search algorithm 
that returns the location of x in a given arr[1...r]
otherwise -1 */
int binarySearch(int arr[], int l, int x, int r)
{
    if (r >= l){
        //finding the mid point 
        int mid = l + (r - l) / 2;

        // if the element is present at the middle (exact)
        if(arr[mid] == x) {
            return mid;
        }

        // if the element is smaller than mid (smaller)
        if(arr[mid] > x){
            return binarySearch(arr, l, mid - 1, x);
        }

        // else the element is to the right of the array (larger)
        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main(void)
{
    int arr[] = {2,3,4,10,40};
    int x =10;
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = binarySearch(arr, 0, n-1, x);

    (result == -1) ? cout<< "Element is not present in x":
    cout<< "Element is present at index " << result << endl;
    return 0;
}