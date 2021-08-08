/*Iterative Function to calculate (x^y) in O(log y) */
#include <iostream>
using namespace std;
int power(int x , int y)
{
    // Initialise the answer 
    int res = 1;

    while (y)
    {

        // If y is odd, multiply x with the result
        if (y % 2 == 1)
            res = (res * x);

        // y = y/2
        y = y >> 1;

        //Change x to x^2

        x = (x * x);
    }
    return res;
}

int main()
{   
    cout << "Number? " << endl;
    int x;
    cout << "Index/Power? " << endl;
    int y;
    
    cin >> x;
    cin >> y;
    cout << power(x,y) << endl;

}