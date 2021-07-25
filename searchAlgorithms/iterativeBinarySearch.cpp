#include <stdio.h>
using namespace std;
// position of target x in an array A of size n
//

int binarySearch(intA[], int n, int x)
{
// search space is A[low ... high]
int low = 0, high = n - 1;

// loop till search space is exhausted


while (low <= high)
{
    // find the mid value in the search space
    // and compare it to the targret

    int mid = ((low + high) / 2 );

    // if overflow
    // int mid = low + (high - low) / 2;
    // int mid = high - (high - low) / 2;
    
    // target value is found in the search space

    if( x == A[mid]){
        return mid;
    }

    // if the target is less then the middle value
    // discard elements in the right search space 
    // including the middle element

    else if (x < A[mid]){
        high = mid -1;
    }

    // If the target is more than the middle element 
    // discard all elements in the left search space 
    // including the middle element

    else if(x > A[mid]){
        low = mid + 1;
    }
}
// target doesn't exist in the array 

return -1; 

}

int main(void){
    int A[] = {2,5,6,,7,9,10};
    int target = 5;
    int n = sizeof(A)/sizeof(A[0]);
}

