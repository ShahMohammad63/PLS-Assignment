#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int* heapArr = new int[size]; // allocated on heap

    for (int i = 0; i < size; ++i)
        heapArr[i] = i + 1;

    for (int i = 0; i < size; ++i)
        cout << heapArr[i] << " ";

    delete[] heapArr; // free heap memory
    return 0;
}