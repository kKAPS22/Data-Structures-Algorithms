/*Build Tree from preorder*/
#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class  Node{

public:
 int data;
  Node* left;
  Node* right;


   Node(int data){
    this->data=data;
    left=right=NULL;
   }

};
 static int idx=-1;
Node* BuildTree(vector<int>nodes){//tc=O(n)

   
    idx++;

    if(nodes[idx]==-1){
        return NULL;
    }

    Node* currNode  =new Node{nodes[idx]};
    currNode->left=BuildTree(nodes);//left subtree
    currNode->right=BuildTree(nodes);//right subtree


    return currNode;

}

/* Preorder Traversal
1.Root
2.Left Subtree
3.Right Subtree
*/
void preorder(Node* root ){//O(n)
   if(root==NULL){
    return;
   }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

/*Inorder Traversal
1.Left Subtree
2.Root 
3.Right Subtree
*/
void Inorder(Node* root){//O(n)

    if(root==NULL){
        return;
    }

    Inorder(root->left);      //left

    cout<<root->data<<" ";    //root

    Inorder(root->right);    //right
}

/*PostOrder Traversal
1.Left Subtree
2.Right Subtree
3.Root
*/
void PostOrder(Node* root){//O(n)

    if(root==NULL){
        return;
    }


    PostOrder(root->left);    //left
    PostOrder(root->right);    //right
    cout<<root->data<<" ";    //root
}

/*Level Order Traversal---[Iterative Traversal]{Breath first search}
1.Level 1
2.Level 2
3.Level 3
*/
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

int height(Node* root){


        if(root==NULL)
            return 0;
   

    int leftHt=height(root->left);
    int rightHt=height(root->right);

    int currHt=max(leftHt,rightHt)+1;
    return currHt;


}

int count(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftCount=count(root->left);
    int rightCount=count(root->right);

    return leftCount+rightCount+1;
}

int Sum(Node* root){

    if(root==NULL){
        return 0;
    }

    int leftSum=Sum(root->left);
    int rightSum=Sum(root->right);

    int currSum=leftSum+rightSum+root->data;
    cout<<"Sum :"<<currSum<<endl;
    return currSum;


}

//Approach1-->To Calculate Diameter
int diam1(Node* root){//O(n^2)
    if(root==NULL){
        return 0;
    }

    int currDiam=height(root->left)+height(root->right)+1;//O(n)

    int leftDiam=diam1(root->left);
    int rightDiam=diam1(root->right);

    return max(currDiam,max(leftDiam,rightDiam));

}

//Approach-2
pair<int,int>diam2(Node* root){
    if(root==NULL){
        return make_pair(0,0);
    }

    //(Diameter,height)
    pair<int,int> leftInfo=diam2(root->left);
    pair<int,int>rightInfo=diam2(root->right);

    int currDiam=leftInfo.second+rightInfo.second+1;//LH+RH+1
    int finalDiam=max(currDiam,max(leftInfo.first,rightInfo.first));//max(lh+rh+1,ld,rd)
    int finalHt=max(leftInfo.second,rightInfo.second)+1;

    return make_pair(finalDiam,finalHt);
}


bool isIdentical(Node* root1,Node* root2){
    //Base Case
    if(root1==NULL && root2==NULL){
        return true;
    }else if(root1==NULL||root2==NULL){
        return false;
    }


    if(root1->data !=root2->data){
        return false;
    }

   return(isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right));


}
bool isSubtree(Node* root,Node* subRoot){

    //Base Case
    if(root==NULL && subRoot==NULL){
        return true;
    }else if(root==NULL || subRoot==NULL){
        return false;
    }


    if(root->data==subRoot->data){

        //Identical for Subtree
       if(isIdentical(root,subRoot)){
        return true;
       }


    }

    int isLeftSubtree=isSubtree(root->left,subRoot);
    if(!isLeftSubtree){

      return isSubtree(root->right,subRoot);
    }
    
    return true;

}

void topView(Node* root){
    queue<pair<Node*,int>> Q;//(Node->data,horizontal distance)
    map<int,int> m;
    Q.push(make_pair(root,0));

    while(!Q.empty()){
        pair<Node* ,int> curr=Q.front();
        Q.pop();

        Node* currNode=curr.first;
        int currHD=curr.second;

        if(m.count(currHD)==0){
            m[currHD]=currNode->data;
        }
        if(currNode->left !=NULL){
            pair<Node*,int>left=make_pair(currNode->left,currHD-1);
            Q.push(left);
        }

        if(currNode->right!=NULL){
             pair<Node*,int>right=make_pair(currNode->right,currHD+1);
            Q.push(right);
        }
    }

    for(auto it :m){
        cout<<it.second<<" ";

    }
    cout<<endl;


}
 int main(){

    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=BuildTree(nodes);
    // cout<<"root= "<<root->data<<endl;
   
    // preorder(root);
    // cout<<endl;

    // Inorder(root);
    // cout<<endl;

    // PostOrder(root);
    // cout<<endl;

    // cout<<endl;
    // levelOrder(root);
    
    // cout<<"Height :"<<height(root)<<endl;

    // cout<<"Count of The Nodes :"<<count(root)<<endl;

    // cout<<"Sum of Nodes :"<<Sum(root)<<endl;

    // cout<<"Diameter ="<< diam2(root).first<<endl;

    // Node* subRoot= new Node(2);
    // subRoot->left=new Node(4);
    // subRoot->right=new Node(5);

    // cout<<isSubtree(root,subRoot)<<endl;

    topView(root);
    

    return 0;
}




// <====Maps===>
// #include<iostream>
// #include<map>
// #include<string>
// using namespace std;

// int main(){
    
//     map<int,string> m;

//     m[101]="Rahul";
//     m[110]="Neha";
//     m[131]="rahul";

//     m[101]="rajat";//overrides the previous value 

//     cout<<m[101]<<endl;
//     cout<<m.count(90)<<endl;

//     for(auto it :m){
//         cout<<it.first<<"\t\t"<<it.second<<endl;
//     }
//     return 0;
// }

