#include <iostream>
using namespace std;

#define MAX 100   // maximum size of stack

class Stack {
    int arr[MAX];  // array to store elements
    int top;       // index of top element

public:
    Stack() { top = -1; }  // constructor (empty stack)

    // Push element onto stack
    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }

    // Pop element from stack
    void pop() {
        if (top ==-1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped from stack\n";
    }

    // Get top element
    int peek() {
        if (top ==-1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    // Check if stack is empty
    bool isEmpty() {
        return top ==-1;
    }

    // Get size of stack
    int size() {
        return top + 1;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "Stack size: " << s.size() << endl;

    if (s.isEmpty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    return 0;
}
