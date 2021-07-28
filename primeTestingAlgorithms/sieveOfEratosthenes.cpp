#include <bits/stdc++.h>
using namespace std; 

void sieveOfErastothenes(int n)
{
    //Create a boolean array 
    //prime[0..n] and initialsise 
    //all entries in it as true and
    //A value in prime[i] will be false 
    //if i is false else it is true 

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        //If prime[p] is not changed than it is prime

        if(prime[p] == true)
        {
        
            //update all multples of p greater than 
            // or eqaual to the square or if  
            // numbers which are multiples of p and less than
            // p^2 are already marked as prime

            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }         
    }
    
        //print all prime numbers
    for (int p = 2; p <=n ; p++)
    {
        if(prime[p])
        {
                cout << p << " ";
        }
    }
}
//Driver code 

int main()
{
    int n = 30;
    cout << "Following are the prime numbers smaller " <<
    "than or equal to " << n << endl;
    sieveOfErastothenes(n);
    return 0;
}
