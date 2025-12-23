// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// class Node{

//     public:
//       string key;
//       int val;
//       Node* next;

//       Node(string key,int val){
//         this->key=key;
//         this->val=val;
//         next=NULL;
//       }

//       ~Node(){
//         if(next!=NULL){
//             delete next;
//         }
//       }

// };

// class HashTable{
//     int totalSize;
//     int currSize;//re-hashing krne ke liye hamre pass current size hona chaiye 
//     Node** table;

//     //Customized Private HashFunction
//     int HashFunction(string key){
//         int idx=0;

//         for(int i=0;i<key.size();i++){
//             idx=idx+(key[i]*key[i])%totalSize;
//         }

//         return idx;
//     }
 
//     //we do rehashing in order to optimize the search operation.
//     void rehash(){//O(n)
//         Node** oldTable=table;

//         int oldSize=totalSize;
//         totalSize=2*totalSize;

//         table=new Node*[totalSize];

//         //Re-Intiate the new table with null values 
//         for(int i=0;i<totalSize;i++){
//             table[i]=NULL;
//         }
 
//         //Copying the Old Values
//         for(int i=0;i<oldSize;i++){
//              Node* temp=oldTable[i];

//              while(temp!=NULL){
//                 insert(temp->key,temp->val);
//                 temp=temp->next;
//              }

//              if(oldTable[i]!=NULL){
//                 delete oldTable[i];

//              }
//         }

//         delete[] oldTable;
//     }

//     public:
//     HashTable(int size){
//         totalSize=size;
//         currSize=0;
        
//         table= new Node*[totalSize];//Now the values have been intialized but they contain some sort of garbage value

//         //So we intiated all the values with null
//         for(int i=0;i<totalSize;i++){
//             table[i]=NULL;
//         }

//     }

//     //These 3 functions must be implimented for the successfull hash table
//     void insert(string key, int val){
//         int idx=HashFunction(key);

//         Node* newNode=new Node(key,val);
//         Node* head=table[idx];

//         newNode->next=head;
//         head=newNode;
//         currSize++;

//         double lambda=currSize/(double)totalSize;
//         if(lambda>1){
//             rehash();
//         }


//     }

//     void remove(string key){

//     }

//     int search(string key){

//     }
    

// };
// int main(){
//      HashTable ht(9);

//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums){
    unordered_set<int>seen;

    for(int x:nums){
        if(seen.count(x)){
            return true;
        }
        seen.insert(x);
    }

    return false;
}

vector<int> CommonElements(vector<int>&A,vector<int>& B){
    unordered_set<int> s(A.begin(),A.end());
    vector<int>ans;

    for(int x:B){
        if(s.count(x)){//s.count()--->1 if x exist and 0 if x doesnot exist 
            ans.push_back(x);
        }
    }

    return ans;
}
void countFrequency(vector<int>& nums){
    unordered_map<int,int>freq;

    for(int x:nums){
        freq[x]++;
    }

    for(auto &p:freq){
        cout<<p.first<<"->"<<p.second<<"times\n";
    }
}
int firstNonRepeating(vector<int>& nums){
    unordered_map<int,int>freq;

    for(int x:nums){
        freq[x]++;
    }

    for(int x:nums){
        if(freq[x]==1){
            return x;
        }
    }

    return -1;
}

// bool hasCycle(Node* head){
//     unordered_set<Node*>visited;

//     Node* curr=head;
//     while(curr!=NULL){
//         if(visited.count(curr)){
//             return true;
//         }

//         visited.insert(curr);
//         curr=curr->next;
//     }

//     return true;
// }


// bool checkDuplicate(Node* root,unordered_set<int>&seen){
//     if(root==NULL){
//         return false;
//     }

//     if(seen.count(root->data)){
//         return true;
//     }

//     seen.insert(root->data);

//     return checkDuplicate(root->left,seen)|| checkDuplicate(root->right,seen);
// }

// bool containsDuplicate(Node* root){
//     unordered_set<int> seen;
//     return checkDuplicate(root,seen);
// }


int main(){
vector<int> nums = {2, 3, 2, 4, 3, 2};
// vector<int> nums={1,2,3,1};
cout<<containsDuplicate(nums);
cout<<endl;
countFrequency(nums);


    return 0;
}