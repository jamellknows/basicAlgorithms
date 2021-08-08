//C++ program to implemetn hashing along with chaining

#include <bits/stdc++.h>
using namespace std;

class Hash
{
    int BUCKET; // No of buckets 

    // Pointer to an array containing buckets 
    list <int> *table; 

    public:
        Hash(int v);

        void insertItem(int x);

        void deleteItem(int key);

        int hashFunction(int x){
            return  (x % BUCKET);
        }

        void displayHash();

};

Hash::Hash(int b)
{
    this -> BUCKET = b;
    table = new list <int>[BUCKET];
}

void Hash::insertItem(int key)
{
    int index = hashFunction(key);
    table[index].push_back(key);
}

void Hash::deleteItem(int key)
{
    // get the hash index of the key and
    int index = hashFunction(key);

    //find the key in the indexth list <int>
    list <int> :: iterator i;

    for(i = table[index].begin(); i != table[index].end(); i++) {
        if(*i == key) 
            break;
        
    }

    // if key is found in hash table, remove it 
    if(i != table[index].end())
        table[index].erase(i);   
}

    void Hash::displayHash() {
        for(int i = 0; i < BUCKET; i++) {
            cout << i;
            for (auto x : table[i])
                cout << " --> " << x;
                cout << endl;       
        }
    }


int main()
{
    //array that contains keys to be mapped
    int a[] = {15, 11, 27, 8, 12};
    int n = sizeof(a)/sizeof(a[0]);

    //insert keys into the hash taple 
    Hash h(7); // 7 is the count of buckets in the hash table

    for(int i = 0; i < n; i++)
        h.insertItem(a[i]);

        //delete 12 from the hash table

        h.deleteItem(12);

        h.displayHash();
    

        return 0;
    
}