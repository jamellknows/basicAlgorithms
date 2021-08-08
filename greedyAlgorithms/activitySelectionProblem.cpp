//C++ program for activity selection problem. 
// The following implementation assumes the activites
// are already sorted according to their finish time
//Add an implementation of a sorting algorithm 

#include <bits/stdc++.h>
using namespace std;

// prints a maximum set of activities that can be done by one person
// one at a time
// n --> total number of activities
// s[] --> an array that contains start times of activites
// f[] --> an array that contains the finish time of activities

void printMaxActivities(int s[], int f[], int n)
{
    int i, j;

    cout << "FOllowing activities are selected " << endl;

    // The first activity always gets selected

    i = 0;
    cout << " " << i;

    //Consider rest of the activites

    for( j = 1; j < n; j++)
    {
        // If thes activity has a start time greater than or equal 
        // to the finish time of previously selected activity, then select it

        if(s[j] > f[i])
        {
            cout << " " << j;
            i = j;
        }
        
    }
    cout << endl;
}

int main()
{
    int s[] = {1, 3, 0, 5, 8, 5};
    int f[] = { 2, 4, 6, 7, 9, 9};
    int n = sizeof(s) / sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}
