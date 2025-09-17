// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int x=2;
//     int* y=&x;
//     cout<<y;//stores the memory address of x


//     return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int data1,Node* next1){
//         data=data1;
//         next=next1;
//     }
// };


// int main(){

//     vector<int> arr={2,5,8,7,};

//     //How to store the data with value address
//     // Node* y =new Node(arr[0],nullptr);
//     // cout<<y;
   
//      /*
//     //if you remove the new keyword now it behaves as the object 
//     Node y= Node(arr[0],nullptr);
//     cout<<y.data;
//     cout<<endl;
//     cout<<y.next;
//     // cout<<y;//as it is the object it u cannot find y either u may use y.data or y.next
// */

//     //how to extract data from linked list 
//     Node* y =new Node(arr[0],nullptr);
//     cout<<y->data;

//     return 0;
// }

/*To
a]convert an array into linked list 
b]to print the linked list 
c]to find the length of linked list 
d]to check if the number is presnet in the linked list */ 
/*
#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

Node(int data1,Node* next1){
    data=data1;
    next=next1;
}

public:
Node(int data1){
    data=data1;
    next=nullptr;
}

};

Node* convertArr2LL(vector<int>arr){
    Node* head =new Node(arr[0]);
    Node* mover =head;


    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;

    }

    return head;
}
//To find the length of the linked list
int lengthofLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp!=nullptr){
        // cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

int CheckIfPresent(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val) return 1;
        temp=temp->next;
    }
    return 0;
}


int main(){
vector<int>arr={2,5,8,7};
Node* head=convertArr2LL(arr);
cout<<head->data;
cout<<endl;

//To traverse in linked list we use a temp variable and keep updating its next 
Node* temp=head;
while(temp!=nullptr){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<endl;
cout<<lengthofLL(head);
cout<<endl;
cout<<CheckIfPresent(head,15);


    return 0;
}
*/

//Deletion and insertion in the linked list 
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
  
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;


    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* removeTail(Node* head){
    if(head==NULL ||head->next==NULL){
        return NULL;    
    }
    //Intializing temp
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;

    return head;
}

Node* convertArr2LL(vector<int>arr){
    Node* head =new Node(arr[0]);
    Node* mover =head;


    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;

    }

    return head;
}

Node* deleteHead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;

}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* removeK(Node* head,int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
       Node* temp=head;
       head=head->next;
       free(temp);
       return head;
    }
    int cnt =0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

/*
Node* removeK(Node* head,int el){
    if(head==NULL){
        return head;
    }
    if(head->data==el){
       Node* temp=head;
       head=head->next;
       free(temp);
       return head;
    }
   
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
       
        if(temp->data==el){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}*/

Node* insertHead(Node* head,int val){
    Node* temp=new Node(val,head);
    return temp;
}
Node* insertTail(Node* head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}
Node* insertK(Node* head,int el,int k){

}


int main(){
vector<int>arr={2,3,5,87};
Node* head=convertArr2LL(arr);
// head=deleteHead(head);
// head=removeTail(head);
// head=removeK(head,4);
// head=insertHead(head,112);
head=insertTail(head,100);
print(head);//it prints the remaining liunked list



    return 0;
}