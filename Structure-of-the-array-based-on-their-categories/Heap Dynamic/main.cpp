#include <iostream>
using namespace std;

int main() {
    int capacity = 2;  // Initial capacity
    int size = 0;      // Current number of elements
    int* arr = new int[capacity];  // Initial allocation

    // Insert 5 elements with dynamic resizing
    for (int i = 0; i < 5; ++i) {
        if (size == capacity) {
            // Double the capacity when full
            capacity *= 2;
            int* newArr = new int[capacity];
            
            // Copy existing elements
            for (int j = 0; j < size; ++j)
                newArr[j] = arr[j];
                
            // Free old memory and update pointer
            delete[] arr;
            arr = newArr;
            
            cout << "Resized to capacity: " << capacity << endl;
        }
        arr[size++] = i + 1;  // Add new element
    }

    // Print all elements
    cout << "Final array: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;

    // Clean up
    delete[] arr;
    return 0;
}