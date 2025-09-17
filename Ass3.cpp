#include<bits/stdc++.h>
using namespace std;

#define MAX 100
class Stack{
    int arr[MAX];
    int top;

  public:
  Stack(){
    top=-1;
  }

  bool isFull(){
    return top==MAX -1;
  }

  bool isEmpty(){
    return top==-1;
  }

  void push(int value){
    if(isFull()){
        cout<<"Stack is full! Cannot push "<<value<<endl;
        
    }else{
        top++;
        arr[top]=value;
        cout<<value<<"Pushed to stack."<<endl;
    }
  }

  void pop(){
    if(isEmpty()){
        cout<<"Stack is empty ! cannot pop "<<endl;
    }else{
        cout<<arr[top]<<"Popped from stack ."<<endl;
        top--;
    }
  }

  void peek(){
    if(isEmpty()){
        cout<<"Stack is empty ."<<endl;
    }else{
        cout<<"Top element is ."<<arr[top]<<endl;
    }
  }

  void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Stack s;
    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. isEmpty\n5. isFull\n6. Display\n7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                if (s.isEmpty()) cout << "Stack is empty.\n";
                else cout << "Stack is not empty.\n";
                break;
            case 5:
                if (s.isFull()) cout << "Stack is full.\n";
                else cout << "Stack is not full.\n";
                break;
            case 6:
                s.display();
                break;
            case 7:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
                  }

    } while (choice != 7);



    return 0;
}