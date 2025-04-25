#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    // creation of stack
    stack<int> stacks;

    // Push Element on Stack
    stacks.push(3);
    stacks.push(1);

    // Remove Element from stack
    stacks.pop();
    stacks.pop();
    
    if (stacks.empty()) {
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Printing TOP Element: " << stacks.top() << endl;
    }

    return 0;
}
