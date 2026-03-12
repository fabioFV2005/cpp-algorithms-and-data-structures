#include <bits/stdc++.h>
using namespace std;

struct Hash
{
    int BUCKET; // No. of buckets

    // Vector of vectors to store the chains
    vector<vector<int>> table;

    // Inserts a key into hash table
    void insertItem(int key)
    {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    // Deletes a key from hash table
    void deleteItem(int key);

    // Hash function to map values to key
    int hashFunction(int x)
    {
        return (x % BUCKET);
    }

    void displayHash();

    // Constructor to initialize bucket count and table
    Hash(int b)
    {
        this->BUCKET = b;
        table.resize(BUCKET);
    }
};

// Function to delete a key from the hash table
void Hash::deleteItem(int key)
{
    int index = hashFunction(key);

    // Find and remove the key from the table[index] vector
    auto it = find(table[index].begin(), table[index].end(), key);
    if (it != table[index].end())
    {
        table[index].erase(it); // Erase the key if found
    }
}

// Function to display the hash table
void Hash::displayHash()
{
    for (int i = 0; i < BUCKET; i++)
    {
        cout << i;
        for (int x : table[i])
        {
            cout << " --> " << x;
        }
        cout << endl;
    }
}

// Driver program
int main()
{
    // Vector that contains keys to be mapped
    vector<int> a = {15, 11, 27, 8, 12};

    // Insert the keys into the hash table
    Hash h(7); // 7 is the number of buckets
    for (int key : a)
        h.insertItem(key);

    // Delete 12 from the hash table
    h.deleteItem(12);

    // Display the hash table
    h.displayHash();

    return 0;
}