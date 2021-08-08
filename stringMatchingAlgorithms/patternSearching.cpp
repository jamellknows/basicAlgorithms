#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std; 


void search(char* pat, char* txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
    cout << "The text you are searching is " << txt << endl; 
    cout << "The pattern you are searching for is " << pat << endl;
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++){
        int j;

        /* For current index i, check for a pattern match */
        for( j = 0; j < M; j++) 
            if(txt[i + j] != pat[j])
                break;

        if (j == M) // if pat[0...M-1] = txt[i, i+1,....i + M -1]
            cout << "Pattern found at index %d " << i << endl; 
    }
}

int main()
{ 
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";
    search(pat, txt);
    return 0;

}