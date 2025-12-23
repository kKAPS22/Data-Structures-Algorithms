// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
// public:
//   int data;
//   Node* left;
//   Node* right;

//    Node(int data){
//     this->data=data;
//     left=right=NULL;

//    }
// };

// Node* insert(Node* root,int val){
    
//     if(root==NULL){//Base case 
//         root=new Node(val);
//         return root;

//     }

//     if(val<root->data){//LeftSubtree
//         root->left=insert(root->left,val);
//     }else if(val>root->data){//RightSubtree
//         root->right=insert(root->right,val);
//     }

//     return root;
    
// }
// Node* buildBST(int arr[],int n){
//     Node* root=NULL;

//     for(int i=0;i<n;i++){
//         root=insert(root,arr[i]);
//     }
//     return root;
// }
// bool search(Node* root,int key){//O(Height):Avg==>O(log n)
//     if(root==NULL){
//         return false;
//     }

//     if(root->data==key){
//         return true;
//     }
//     if(root->data>key){//leftSubtree
//        return search(root->left,key);
//     }else if(root->data<key){//RightSutree
//         return search(root->right,key);
//     }

// }

// void inorder(Node* root){

//     if(root==NULL){
//         return;
//     }

//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// Node* getInorderSuccessor(Node* root){
//     while(root->left!=NULL){
//         root=root->left;
//     }
//     return root;
// }
// Node* delNode(Node* root,int val){
       
//     if(root==NULL){
//         return NULL;
//     }

//     if(val<root->data){//left Subtree
//         root->left=delNode(root->left,val);
//     }else if(val>root->data){//right subtree
//        root->right=delNode(root->right,val);
//     }else{
//         //root==val
//         //Case :0 Children
//         if(root->left==NULL && root->right==NULL){
//             delete root;
//             return NULL;
//         }

//         //case :1 children
//         if(root->left==NULL || root->right==NULL){
//             return root->left==NULL ? root->right :root->left;
//         }


//         //case :2 children
//         Node* IS=getInorderSuccessor(root->right);//-->leftmost in right subtree
//         root->data=IS->data;
//         root->right=delNode(root->right,IS->data);
//         return root;
//     }
//     return root;

// }

// //Print in Range
// void printInRange(Node* root,int start,int end){

//     if(root==NULL){
//         return;
//     }

//     if(start<=root->data && root->data<=end){
//         //case-I
//         printInRange(root->left,start,end);
//         cout<<root->data<<"  ";
//         printInRange(root->right,start,end);

//     }
//     else if(root->data>end){//Case-II
//       printInRange(root->left,start,end);
//     }
//     else{//Case-III
//       printInRange(root->right,start,end);
//     }
// }
// void PrintPath(vector<int>path){
//     cout<<"Path :";
//     for(int i=0;i<path.size();i++){
//         cout<<path[i]<<" ";

//     }
//     cout<<endl;
// }
// void PathHelper(Node* root,vector<int>path){

//     if(root==NULL){
//         return;
//     }
//     path.push_back(root->data);

//     if(root->left==NULL && root->right==NULL){
//         PrintPath(path);
//         path.pop_back();
//         return;
         
//     }

//     PathHelper(root->left,path);
//     PathHelper(root->right,path);

//     path.pop_back();


// }

// void rootToLeafPath(Node* root){
//     vector<int>path;
//     PathHelper(root,path);

// }

// bool validateHelper(Node* root,Node* min,Node* max){

//     if(root==NULL){
//         return true;

//     }
//     if(min!=NULL && root->data<min->data){
//         return false;
//     }
//     if(max!=NULL && root->data>max->data){
//         return false;
//     }

//    return validateHelper(root->left,min,root) && 
//           validateHelper(root->right,root,max);

// }


// bool validateBST(Node* root){

//     return validateHelper(root,NULL,NULL);
// }

// int main(){

//     // int arr[6]={5,1,3,4,2,7};
//     int arr2[9]={8,5,3,1,4,6,10,11,14};
//     Node* root=buildBST(arr2,9);
//     cout<<root->data<< "  "<<endl;


//     inorder(root);
//     cout<<endl;

//     // delNode(root,4);
//     printInRange(root,5,12);
//     cout<<endl;

//     rootToLeafPath(root);

//     cout<<validateBST(root)<<endl;


//     return 0; 
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data=data;
//         left=right=NULL;

//     }
// };

// Node* BuildBSTFromSorted(int arr[],int st,int end){
//     if(st>end){//base case
//         return NULL;
//     }


//     int mid=st+(end-st)/2;
//     Node* curr=new Node(arr[mid]);

//     curr->left=BuildBSTFromSorted(arr,st,mid-1);
//     curr->right=BuildBSTFromSorted(arr,mid+1,end);

//     return curr;
// }

// void preorder(Node* root){
//     if(root==NULL){
//         return ;
//     }

//     cout<<root->data<< " ";
//     preorder(root->left);
//     preorder(root->right);
// }
// Node* BuildBSTFromSortedVector(vector<int>arr,int st,int end){
//     if(st>end){//base case
//         return NULL;
//     }


//     int mid=st+(end-st)/2;
//     Node* curr=new Node(arr[mid]);

//     curr->left=BuildBSTFromSortedVector(arr,st,mid-1);
//     curr->right=BuildBSTFromSortedVector(arr,mid+1,end);

//     return curr;
// }
// void getInorder(Node* root,vector<int>&nodes){

//     if(root==NULL){
//         return;
//     }
//     getInorder(root->left,nodes);
//     nodes.push_back(root->data);
//     getInorder(root->right,nodes);

// }
// Node* ConvertToBalancedBst(Node* root){

//     //getInorderSequence
//     vector<int> nodes;
//     getInorder(root,nodes);

//     return BuildBSTFromSortedVector(nodes,0,nodes.size()-1);



// }
// int main(){
//     // int arr[7]={3,4,5,6,7,8,9};

//     // Node* root=BuildBSTFromSorted(arr,0,6);

//     // preorder(root);

//     Node* root=new Node(6);
//     root->left=new Node(5);
//     root->left->left=new Node(4);
//     root->left->left->left=new Node(3);


//     root->right=new Node(7);
//     root->right->right=new Node(8);
//     root->right->right->right=new Node(9);
//     preorder(root);
//     cout<<endl;
//     root=ConvertToBalancedBst(root);
//     preorder(root);
//     return 0;
// }



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* left;
     Node* right;

     Node(int data){
        this->data=data;
        left=right=NULL;

     }
     

};

bool isLeaf(Node* root){
    if(root==NULL){
        return false ;
    }

    if( root->left ==NULL && root->right==NULL){
        return true;
    }
}

int SumOfLeaves(Node* root){
    if(root==NULL){
        return 0;
    }

    int sum=0;

    if(isLeaf(root->left)){
        sum+=root->left->data;
    }

    sum+=SumOfLeaves(root->left);//left subtree
    sum+=SumOfLeaves(root->right);//right subtree

    return sum;

}

void levelOrder(Node* root){//time and space complexity-->O(n)--->if there are n nodes  
    if(root==NULL){
        return;
    }


   queue<Node*>Q;//A nodeptr queue 
   Q.push(root);
   Q.push(NULL);

   while(!Q.empty()){
    Node* curr=Q.front();
    Q.pop();
    if(curr==NULL){
        cout<<endl;
        if(Q.empty()){
            break;
        }
        Q.push(NULL);//to track next line 
        continue;
    }

else{
    cout<<curr->data<<" ";

            if(curr->left!=NULL)
         {
              Q.push(curr->left);
          }
           if(curr->right!=NULL)
         {
              Q.push(curr->right);
         }
     }

   }

cout<<endl;
}
int maxDepth(Node* root){
    if( root==NULL){
        return 0;
    }
    int L=maxDepth(root->left);
    int R=maxDepth(root->right);
    
    return 1+max(L,R);
}
Node* findMin(Node* root){
    while( root && root->left!=NULL){
        root=root->left;
    }
    return root;
}

Node* findMax(Node* root){
    while(root && root->right !=NULL){
        root=root->right;
    }
    return root;
}
Node* inorderPredecessor(Node* root,Node* target){
    if(target->left!=NULL){
        return findMax(target->left);
    }

      // CASE 2: No left subtree → find ancestor
    Node* predecessor = NULL;

    while (root != NULL) {
        if (target->data > root->data) {
            predecessor = root;
            root = root->right;
        }
        else if (target->data < root->data) {
            root = root->left;
        }
        else break;
    }
    return predecessor;
}

Node* InorderSuccessor(Node* root,Node* target){
    if(target==NULL)return NULL;

    //Case 1:Right subtree Exist 
    if(target->right!=NULL){
        return findMin(target->right);
    }

    //Case-2:No right Subtree Exist 
    Node* successor=NULL;
    while(root!=NULL){
        if( target->data<root->data){
            successor=root;
            root=root->left;
        }else if(target->data>root->data){
            root=root->right;
        }else{
            break;
        }
    }

    return successor;
}
Node* CreateTreeUsingPostIn(vector<int>& in,vector<int>& post,int inStart,int inEnd,int &postIndex){

    //Base case
    if(inStart>inEnd){
        return NULL;
    }

    int rootVal=post[postIndex--];
    Node* root=new Node(rootVal);

    int k;
    for(int i=inStart;i<=inEnd;i++){
        if(in[i]==rootVal){
            k=i;
            break;
        }
    }

    root->right=CreateTreeUsingPostIn(in,post,k+1,inEnd,postIndex);
    root->left=CreateTreeUsingPostIn(in,post,inStart,k-1,postIndex);

    return root;

}
int main(){

    // Node* root=new Node(3);
    // root->left=new Node(9);
    // root->right=new Node(20);
    // root->right->left=new Node(15);
    // root->right->right=new Node(7);
    // cout<<SumOfLeaves(root);

    vector<int> inorder  = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};

    int postIndex = postorder.size() - 1;

    Node* root = CreateTreeUsingPostIn(inorder, postorder,0, inorder.size()-1,  postIndex);
    levelOrder(root);


    return 0;
}