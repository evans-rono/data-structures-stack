using namespace std;
#include <iostream>

class Stack {
private:
    int top;
    int arr[5]; 

public:
    Stack() {
        top = -1;
        for (int i = 0; i < 5; i++) {
            arr[i] = 0;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 4;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow" << endl;
        } else {
            top++;
            arr[top] = value;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl;
            return 0;
        } else {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

    int peek(int position) {
        if (position > top || position < 0) {
            cout << "Invalid position" << endl;
            return -1;
        }
        return arr[position];
    }

    int count() {
        return top + 1;
    }

    void display() {
        for (int i = 4; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    cout << "Peek at position 1: " << s.peek(1) << endl;
    return 0;
}
