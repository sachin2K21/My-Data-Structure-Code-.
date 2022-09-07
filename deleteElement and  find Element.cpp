// C++ program to implement linear
// search in unsorted array
#include <bits/stdc++.h>
using namespace std;
 
// Function to implement search operation
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
     
      // If the key is not found
    return -1;
}
 
// Driver's Code
int main()
{
    int arr[] = { 12, 34, 10, 6, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Using a last element as search element
    int key = 40;
   
      // Function call
    int position = findElement(arr, n, key);
 
    if (position == -1)
        cout << "Element not found";
    else
        cout << "Element Found at Position: "
             << position + 1;
 
    return 0;
}
 
// This code is contributed
// by Akanksha Rai

// C++ program to implement insert
// operation in an unsorted array.
#include <iostream>
using namespace std;
 
// Inserts a key in arr[] of given capacity.
// n is current size of arr[]. This
// function returns n + 1 if insertion
// is successful, else n.
int insertSorted(int arr[], int n, int key, int capacity)
{
 
    // Cannot insert more elements if n is
    // already more than or equal to capacity
    if (n >= capacity)
        return n;
 
    arr[n] = key;
 
    return (n + 1);
}
 
// Driver Code
int main()
{
    int arr[20] = { 12, 16, 20, 40, 50, 70 };
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int i, key = 26;
 
    cout << "\n Before Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    // Inserting key
    n = insertSorted(arr, n, key, capacity);
 
    cout << "\n After Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}
 
// This code is contributed by SHUBHAMSINGH10
//Output
// Before Insertion: 12 16 20 40 50 70 
// After Insertion: 12 16 20 40 50 70 26 