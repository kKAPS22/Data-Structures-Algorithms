//implementation of queue  using array
// #include<bits/stdc++.h>
// using namespace std;

// class QuueueImplementation{
//    static const int size=10;
//    int Q[size];
//    int currSize=0,start=-1,end=-1;

// public:
//     void Enqueue(int x){
//         if(currSize==size){
//             cout<<"Maximum Size reached";
//         }
//         else if(currSize==0){
//             start=0,end=0;
//         }
//         else{
//             end=(end+1)%size;
//         }
//         Q[end]=x;//first we shall insert then
//         currSize++;//then we must increment the curr size
//     }

//     int Dequeue(){
//         if(currSize==0){
//             cout<<"Queue is empty ";
//             return -1;
//         }
//         int el=Q[start];
//         if(currSize==1){
//             start=end=-1;
//         }else{
//             start=(start+1)%size;
//             currSize--;
//         }
//         return el;
//     }

//     int top(){
//         if(currSize==0){
//             cout<<"Queue is Empty \n";
            
//         }
//         return Q[start];
//     }

//     int checksize(){
//         return currSize;
//     }
// };


// int main(){
//     QuueueImplementation queue;
//     queue.Enqueue(14);
//     queue.Enqueue(589);
//     queue.Enqueue(21);

//     queue.Enqueue(-90);
//     queue.Enqueue(11);
//    queue.Enqueue(8);

//    cout<<"top of queue 1 :"<<queue.top()<<endl;
//    cout<<"the size of queue is (1):"<<queue.checksize()<<endl;
   
//    queue.Dequeue();
//    queue.Dequeue();
//    cout<<"the size of queue is(2) :"<<queue.checksize()<<endl;
//     cout<<"top of queue(2):"<<queue.top()<<endl;




//     return 0;
// }

//Queue using Linked list 
// #include<bits/stdc++.h>
// using namespace std;
// class Node{

// public:
//     int data;
//     Node* next;

//     Node(int data1,Node* next1){
//         data=data1;
//         next=next1;
//     }

//     Node(int data1){
//         data=data1;
//         next=nullptr;

//     }

// };
// class QueueImplementation{
//     public:
//      Node* start=nullptr;
//      Node* end=nullptr;
//      int size=0;


//      void push(int x){
//         Node* temp=new Node(x);

//         if(start==NULL){
//             start=temp;
//             end=temp;
//         }
//         else{
//             end->next=temp;
//             end=temp;
//         }
//         size++;
//      }
     

//      void pop(){
//         if(start==NULL){
//             end=nullptr;
//         }
//         Node* temp=start;
//         start=start->next;
//         delete temp;

//         size--;
     
//      }

//      int top(){
//         if(start==NULL){
//             return -1;
//         }
//         return start->data;
//      }
    
//      int checkSize(){
//         return size;
//      }

// };


// int main(){
//  QueueImplementation q;

//     q.push(1);
//     q.push(2);

//     q.push(3);

//     q.push(4);
//     q.push(5);
//     q.push(6);
//     q.pop();
//     q.pop();

//     cout<<"The top of queue is :"<<q.top()<<endl;
//     cout<<"The size of the queue is :"<<q.checkSize()<<endl;


//     return 0;
// }


//implement queue using stack-->Approach 1
/*As push takes the time complexity of O(2N) it is going to be useless when there are a lot no. of dynamic 
pushes into the queue */ 
// #include<bits/stdc++.h>
// using namespace std;

// class QueueImplementation{
//     public:

//     stack<int>s1,s2;
//     void push(int x){
//         //Ttaking el from s1->s2
//         while(s1.size()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//         //Taking the new input x->s1
//         s1.push(x);


//         //taking the lements from s2->s1
//         while(s2.size()){
//             s1.push(s2.top());
//             s2.pop();
//         }

//     }

//     int  topp(){
//          return  s1.top();
//     }

//     void popp(){
//         s1.pop();
//     }
    
//     int checkSize(){
//         return s1.size();
//     }

// };

// int main(){

//     QueueImplementation q;
//     q.push(12);
//     q.push(18);
//     q.push(17);

//     q.popp();
//     cout<<"The top element of queue (using stacks)"<<q.topp()<<endl;
//     q.push(65);
//     cout<<"The top element of queue (using stacks)"<<q.topp()<<endl;



//     return 0; 
// }

//Implementation of Queue using stack
#include<bits/stdc++.h>
using namespace std;

class QueueImplementation{
public:
 
    stack<int>s1;
    stack<int>s2;
   void push(int x){
    s1.push( x);
   }
  
   void pop(){
    if(s2.empty()!=0){
        s2.pop();
    }else{
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
    }
   }

   int top(){
    if(s2.empty()!=0){
        return s2.top();
    }else{
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        } 
     return s2.top();
    }
   }




};
 

int main(){

    return 0;
}