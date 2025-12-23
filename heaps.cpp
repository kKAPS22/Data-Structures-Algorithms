// Day-36
// #include<iostream>
// #include<queue>
// #include<string>
// using namespace std;

// int main(){
//     // priority_queue<int> pq;//max heap condition(By default)
//     priority_queue<int,vector<int>,greater<int>>pq;//min heap condition
//     // priority_queue<string,vector<string>,greater<string>>pq;//min heap string cnd
//     // priority_queue<string> pq;
    
//     pq.push(5);
//     pq.push(10);
//     pq.push(15);
//     pq.push(109);
//     pq.push(56);
//     pq.push(9);
//     pq.push(3);

//     // STRINGS
//     // pq.push("Helloworld");
//     // pq.push("KRISHNA_KAPOOR--");
//     // pq.push("govind");


//     while(!pq.empty()){
//         cout<<"The top of priority_queue : "<<pq.top()<<endl;
//         pq.pop();
//     }

    

//     return 0;
// }

// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;


// class Heap{
//     vector<int> vec;//max heap
// public:
//     void push(int val){//O(logn)
        
//         //Step-1
//         vec.push_back(val);

//         //fix heap
//         int x=vec.size()-1;//childIndex
//         int parentIdx=(x-1)/2;

//         while(parentIdx>=0 && vec[x]>vec[parentIdx]){//O(logn)
//             swap(vec[x],vec[parentIdx]);
//             x=parentIdx;
//             parentIdx=(x-1)/2;
//         }
//     }
//    void heapify(int i){//i=parentIdx

//     if(i>=vec.size()){
//         return;
//     }

//      int l=2*i+1;
//      int r=2*i+2;

//      int maxIdx=i;
//      if(l < vec.size() && vec[l]>vec[maxIdx]){
//         maxIdx=l;
//      }
//     if(r< vec.size() && vec[r]>vec[maxIdx]){
//         maxIdx=r;
//      }
//      swap(vec[i],vec[maxIdx]);
//      if(maxIdx!=i){//swapping with the child node
//        heapify(maxIdx);
//      }

//    }
//     void pop(){
//        //Step-1-->O(n)
//        swap(vec[0],vec[vec.size()-1]);

//        //Step-2-->O(n)
//        vec.pop_back();

//        //Step-3
//        heapify(0);


//     }


//     int top(){//O(1)
//        return vec[0];//highest priority element

//     }
//     bool empty(){
//        return vec.size()==0;
//     }
// };

// int main(){
//     Heap heap;

//     heap.push(8);
//     heap.push(4);
//     heap.push(5);
//     heap.push(1);
//     heap.push(2);

//     cout<<"The top of heap :"<<heap.top()<<endl;
//     heap.pop();
//     cout<<"The top of heap :"<<heap.top()<<endl;
//     heap.pop();
//     cout<<"The top of heap :"<<heap.top()<<endl;
//     heap.pop();
//     cout<<"The top of heap :"<<heap.top()<<endl;
//     heap.pop();

//     return 0;
// }