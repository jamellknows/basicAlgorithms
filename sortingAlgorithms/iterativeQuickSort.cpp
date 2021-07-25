/* In a simple quick sort algorithm we select an element 
as a pivot, partition around the pivot and sort left and 
right of the pivot */ 

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
 /*simple swapping function using pointers to swap 
 the positions of the addresses of the integers */

 /* A pointer is a variable that states the memory address
  as its value */



void swap( int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* This function takes the last 
element of a pivot and places the 
pivot element in its correct position 
in the sorted array and places all smaller
(smaller than the picot ) elements to the left of the pivot 
andf all greater elements to the right */

/* arr[] --> array  to be sorted 
l --> starting index 
h --> ending index */

int partition(int arr[], int l, int h){
    int x = arr[h]; // pivot point
    int i = (l-1); // index

    for(int j = l; j <= h-1; j++){
        if(arr[j] < x){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[h]);
    return (i+1);
}

/* A[] --> Array to be sorted 
l --> starting index 
h --> ending index */

void quickSort(int A[], int l, int h){
    if(l < h){
        // Partitioning index

        int p = partition(A,l,h);
        //recursion
        quickSort(A, l, p - 1);
        quickSort(A, p + 1, h);
    }
}

int main(){

    int arr[] = {4,2,6,9,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr, 0, n-1);
    
    for(int i = 0; i < n; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}

