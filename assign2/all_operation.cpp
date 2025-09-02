#include<bits/stdc++.h>

using namespace std;
class Stack {
  int size;
  int * arr;
  int top;
  public:
    Stack() {
      top = -1;
      size = 1000;
      arr = new int[size];
    }
  void push(int x) {
    if (isFull()) {
        cout << "Stack Overflow! Cannot push " << x << endl;
        return;
    }
    top++;
    arr[top] = x;
}

  int pop() {
    if (isEmpty()) {
        cout << "Stack Underflow! Cannot pop." << endl;
        return -1; 
    }
    int x = arr[top];
    top--;
    return x;
  }
  int Top() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1; 
    }
    return arr[top];
  }
  int Size() {
    return top + 1;
  }
  bool isFull(){
    if(top==size-1){
        return true;
    }
    else{
        return false;
    }
}
bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements (bottom to top): ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {

  Stack s;
  s.push(6);
  s.push(3);
  s.push(7);
  s.display();
  cout << "Top of stack is before deleting any element " << s.Top() << endl;
  cout << "Size of stack before deleting any element " << s.Size() << endl;
  cout << "The element deleted is " << s.pop() << endl;
  cout << "Size of stack after deleting an element " << s.Size() << endl;
  cout << "Top of stack after deleting an element " << s.Top() << endl;
  return 0;
}