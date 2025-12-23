//Implementing stack using array 
// #include<bits/stdc++.h>
// using namespace std;

// class StImplementation{
//     int topIndex=-1;
//     int st[10];//the array 
// public:

//     //creating push f(n)
//     void push(int x){
//         if(topIndex>=10){
//             cout<<"Maximum size reached .Stack is full ";
//         }
//         topIndex=topIndex+1;
//         st[topIndex]=x;
//     }

//     //creating top fn()
//     int top(){
//         if(topIndex==-1){
//             cout<<"Stack is empty ";

//         }
//         return st[topIndex];
//     }

//     //creating pop()
//     void pop(){
//         if(topIndex==-1){
//             cout<<"Stack is Empty.";
//         }
//         topIndex=topIndex-1;
//     }

//     //creating the size fn()
//     int size(){
//         return topIndex+1;
//     }

// };

// int main(){

//     StImplementation stack;

//     stack.push(10);
//     stack.push(11);
//     stack.push(45);

//     cout<<"Top element :" <<stack.top()<<endl;

//     stack.pop();
//     cout<<"Top element :" <<stack.top()<<endl;




//     return 0;
// }


//Implementation using linked list 
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
   
//  public:
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

// class st{

// public:
//     Node* top=nullptr;
//     int size=0;

//     void push(int x){
//         Node* temp=new Node(x);
//         temp->next=top;
//         top=temp;
//         size++;
//     }
//     void pop(){
//         Node* temp=top;
//         top=top->next;
//         delete temp;
//         size--;
//     }

//     int topel(){
//         return top->data;
//     }

//     int checkSize(){
//         return size;
//     }
// };

// int main(){

//     st s;
//     s.push(90);
//     s.push(20);
//     s.push(30);
//     s.push(12);
//     s.pop();

//     cout<<"The top element is :"<<s.topel()<<endl;
//     cout<<"The size of the stack is :"<<s.checkSize()<<endl;





//     return 0;
// }

//Implement stack using Queue
// #include<bits/stdc++.h>
// using namespace std;

// class St{
//     public:
//     queue<int> q;
//     int Size;
 

//     void push(int x){
//        Size=q.size();
//        q.push(x);

//        for(int i=0;i<=Size-1;i++){
//         q.push(q.front());//front and top both are the same things
//         q.pop();
//        }

//     }


//     //As the queue is already rearranged we can pop the elements 
//     void pop(){
//         q.pop();
//     }

    
//     int top(){
//         return q.front();
//     }

//     int checkSize(){
//         return q.size();
//     }
     
// };
// int main(){

//     St stack;
//     stack.push(11);
//     stack.push(99);
//     stack.push(-11);
//     stack.push(14);
//     stack.pop();
//     cout<<"The top element of stack is :"<<stack.top()<<endl;
//     cout<<"The size of the stack  is :"<<stack.checkSize()<<endl;


//     return 0;
// }

//Balanced paranthesis
// #include<bits/stdc++.h>
// using namespace std;

// bool isBalanced(string& s){
 

//     stack<char>st;
//     int n=s.size();//this is the size of the string 
//     for(int i=0;i<n;i++){
//         if(s[i]=='('||
//            s[i]=='['||
//            s[i]=='{'){
//             st.push(s[i]);
//            }else{
//             if(st.empty()){
//                 return false;

//             }
//             char ch=st.top();
//             st.pop();
//             if(!((s[i]==')'&& ch=='(')||
//                 (s[i]==']'&& ch=='[')||
//                 (s[i]=='}'&& ch=='{') )){
//                     return false;
//                 }
//            }
//     }
//     return st.empty();
// };

// int main(){

//    string s="{{({[]})}}";
//    cout<<isBalanced(s);


//     return 0;
// }

//Convert from Infix to postfix
// #include <bits/stdc++.h>
// using namespace std;

// int priority(char op){
//     if(op=='+'|| op=='-') return 1;
//     if(op=='*'|| op=='/') return 2;
//     if(op=='^') return 3;
//     return 0;
// }

// string InfixtoPostfix(string& s ){
//     int i=0;
//     string ans="";
//     stack<char> st;

//     while(i < (int)s.size()){
//         char c = s[i];
        
//         if( (c >= 'A' && c <= 'Z') ||
//             (c >= 'a' && c <= 'z') ||
//             (c >= '0' && c <= '9')) {
//             ans += c;
//         }
//         // agar opening bracket hai toh push kardo stack st mai 
//         else if(c == '(' || c == '{' || c == '[') {
//             st.push(c);
//         }
//         // If closing bracket, pop till matching opening bracket
//         else if(c == ')' || c == '}' || c == ']') {
//             while(!st.empty() && 
//                  !((c == ')' && st.top() == '(') ||
//                    (c == '}' && st.top() == '{') ||
//                    (c == ']' && st.top() == '['))) {
//                 ans += st.top();
//                 st.pop();
//             }
//             if(!st.empty()) st.pop(); // pop the matching opening bracket
//         }
//         else {
            
//             while(!st.empty() && 
//                   ((priority(c) < priority(st.top())) ||
//                    (priority(c) == priority(st.top()) && c != '^'))) {
//                 ans += st.top();
//                 st.pop();
//             }
//             st.push(c);
//         }
//         i++;
//     }

//     // Pop all remaining operators
//     while(!st.empty()) {
//         ans += st.top();
//         st.pop();
//     }

//     return ans;
// }

// int main(){
//     string infix = "a+b*(c^d-e)^(f+g*h)-i";
//     cout << "Postfix: " << InfixtoPostfix(infix) << "\n";
//     return 0;
// }

//Infix to prefix
/*Logic 
1.reverse the infix 
2.infix to postfix
3.reverse the answer 
*/
/*
#include<bits/stdc++.h>
using namespace std;
int priority(char op){
    if(op=='+'|| op=='-') return 1;
    if(op=='*'|| op=='/') return 2;
    if(op=='^') return 3;
    return 0;
}


string reverseString(string& s){
   
    
        int start=0;
        int end=s.size()-1;
        while(start<=end){
           swap(s[start],s[end]);

           if(s[start]=='('){
            s[start]=')';
           }else if(s[start]==')'){
            s[start]='(';
           }
          
           if(s[end]=='('){
            s[end]=')';
           }else if(s[end]==')'){
            s[end]='(';
           }

           start++;end--;
        
       
 
        }
        return s;

    }





string InfixtoPrefix(string& s){
    s=reverseString(s);
    int n=s.size();
    stack<char>st;string ans="";int i=0;

    while( i<n){
        char ch;
        if(ch>='A'&&ch<='Z'||
           ch>='a'&&ch<='z'||
           ch>='0'&&ch<='9' ){
            ans=ans+ch;
           }

           else if(ch=='('||ch=='{'||ch=='['){
            st.push(ch);

           }
           else if(ch==')'||ch=='}'||ch==']'){
            while(!st.empty() && (st.top()!='('||
                                  st.top()!='['||
                                  st.top()!='{') ){
                ans=ans+st.top();
                st.pop();

           }
           st.pop();
           }
           else{
            if(s[i]=='^'){
                while(!st.empty() && priority(s[i])<=priority(st.top()) ){
                    ans=ans+st.top(); 
                    st.pop();
                }
            }
            else{
                while(!st.empty()&& priority(s[i])<priority(st.top())){
                    ans+=st.top();
                    st.pop();

                }
            }
            st.push(s[i]);
           }
       i++;   
    }
    // Pop all remaining operators
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }
    //  ans=reverseString(ans);     
    return ans;
     
}

int main(){

    // string s="(a+b)*c-d+f";
    // cout<<reverseString(s)<<endl;
    string infix = "(a+b)*c-d+f";
    cout << "Prefix: " << InfixtoPrefix(infix) << "\n";
    return 0;

    return 0;
}*/

//previous smaller element
/*
#include<bits/stdc++.h>
using namespace std;

void previousSmallerElement(int A[],int n,int result[]){
    stack<int>st;

    for(int i=0;i<n;i++){

        while(!st.empty()){
            if(st.top()<A[i]){
                break;
            }else{
                st.pop();
            }
        }

        if(st.empty()){
            result[i]=-1;
        }else{
            result[i]=st.top();
        }
    
        st.push(A[i]);

    }
}
int main() {
    int A[] = {3,2,1};
    int n = sizeof(A) / sizeof(A[0]);
    int result[n];

    previousSmallerElement(A, n, result);

    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;  // Output: -1 4 -1 2 2

    return 0;
}*/

//Daily Temperatures
/*
#include<bits/stdc++.h>
using namespace std;

//Brute force
/*
 void  DailyTemperatures(int A[],int n,int answer[]){
    for(int i=0;i<n;i++){
   answer[i]=0;//supposing all the days are warmer 
   for(int j=i+1;j<n;j++){
    if(A[j]>A[i]){
        answer[i]=j-i;
        break;
    }
   }
    }
 }

 //stack Approach 
 void DailyTemperatures(int A[],int n,int answer[]){
    stack<int> st;

    for(int i=0;i<n;i++){
    while(!st.empty() && A[i]>A[st.top()]){
        int j=st.top();
        st.pop();
        answer[j]=i-j;
    }
        st.push(i);
    }

    while(!st.empty()){
        answer[st.top()]=0;
        st.pop();
    }



 }
int main(){
    int A[]={73,74,75,71,69,72};
    int n=sizeof(A)/sizeof(A[0]);
    
    int answer[n];
    DailyTemperatures(A,n,answer);
    for(int i=0;i<n;i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}
*/

//Next Greater element 
// #include<bits/stdc++.h>
// using namespace std;

// void NextGreaterElement(int A[],int n,int result[]){
//     stack<int> st;
//     for(int i=0;i<n;i++){
//         while(!st.empty()){
//             if(A[i]>A[st.top()]){
//                 int j=st.top();
//                 st.pop();
//                 result[j]=A[i];
//             }else{
//                 break;
//             }
//         }
//         st.push(i);
//     }

//     while(!st.empty()){
//         result[st.top()]=-1;
//         st.pop();
//     }
// }

// int main(){
 
//     int A[]={1,3,2,4};
//     int n=sizeof(A)/sizeof(A[0]);
//     int result[n];

//     NextGreaterElement(A,n,result);
     
//     for(int i=0;i<n;i++){
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }