#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> stack;  // Using vector as a stack

    // Push elements onto stack
    stack.push_back(10);
    stack.push_back(20);
    stack.push_back(30);

    cout << "Stack elements (LIFO order): ";
    
    // Pop and print elements (LIFO order)
    while (!stack.empty()) {
        cout << stack.back() << " ";  // Print top element
        stack.pop_back();             // Remove top element
    }
    cout << endl;

    return 0;
}