// // Building a graph
// #include<iostream>
// #include<vector>
// #include<list>
// #include<queue>
// using namespace std;

// class Graph{
//     int V;//No. of vertices
//     list<int>*l;//dynamic array implementation int* arr
//     bool isUndir;
// public:
//     Graph(int V,bool isUndir=true){
//        this->V=V;
//        l=new list<int> [V];
//        this->isUndir=isUndir;
//     }

//     void addEdge(int u,int v){
        
//           l[u].push_back(v);
//           if(isUndir){
//             l[v].push_back(u);
//           }
          

        
//     }

//     void printAdjList(){
//         for(int i=0;i<V;i++){
//             cout<<i<<" :";
//             for(int neigh :l[i]){
//                 cout<<neigh<<"  ";
//             }
//             cout<<endl;
//         }
//     }

//     //BFS Traversal
//     void bfs(){//O(V+E)
      
//         queue<int> Q;
//         vector<bool>vis(V,false);//Intializing the visited vector with false value

//         Q.push(0);
//         vis[0]=true;

//         while(Q.size()>0){
//             int u=Q.front();
//             Q.pop();
//             cout<<u<<" ";


//             for(int v:l[u]){//V->immediate neighbour
//                 if(!vis[v]){
//                     vis[v]=true;
//                     Q.push(v);
//                 }
//             }
//         }
//         cout<<endl;
//     }

//     //DFS-->Depth First Search
//     void dfsHelper(int u,vector<bool>&vis){//O(V+E)
//         cout<< u<< " ";
//         vis[u]=true;

//         for(int v :l[u]){
//             if(!vis[v]){
//                 dfsHelper(v,vis);
//             }
//         }
//     }

//     void dfs(){
//         int src=0;
//         vector<bool>vis(V,false);

//         //To check for disconnected components
//         for(int i=0;i<V;i++){
//            if(!vis[i]){
//             dfsHelper(i,vis);
//             cout<<endl;
//            }
//         } 
//     }

//     bool undirCycleHelper(int src,int parent,vector<bool>&vis){
//        vis[src]=true;
//        list<int> neighbors=l[src];

//        for(int v:neighbors){
//         if(!vis[v]){
//             if(undirCycleHelper(v,src,vis)){
//                 return true;
//             }
//         }else{
//             if(v!=parent){
//                 return true;
//             }
//         }
//        }
//        return false;

//     }

//     bool isCycleUndir(){
//         vector<bool> vis(V,false);
//        for(int i=0;i<V;i++){
//         if(!vis[i]){
//             if(undirCycleHelper(i,-1,vis)){
//                 return true;
//             }
//         }
//        }
//        return false;
//     }

//     bool dirCycleHelper(int src,vector<bool>&vis,vector<bool>&recPath){

//         vis[src]=true;
//         recPath[src]=true;

//         list<int>neighbors=l[src];

//         for(int v:neighbors){
//             if(!vis[v]){
//               if( dirCycleHelper(v,vis,recPath)){
//                    return true;
//                 }
//             }else{
//                 if(recPath[v]){
//                     return true;
//                 }
//             }
//         }
//         recPath[src]=false;
//         return false;
//     }

//     bool isCycleDir(){
//         vector<bool> vis(V,false);
//         vector<bool> recPath(V,false);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 if(dirCycleHelper(i,vis,recPath)){
//                    return true;
//                 }
//             }
//         }
//         return false;
//     }
// };



// int main(){
//       Graph g(5);

//       //cycle UNDIRECTED
//     //   g.addEdge(0,1);
//     //   g.addEdge(0,2);
//     //   g.addEdge(1,2);
//     //   g.addEdge(0,3);
//     //   g.addEdge(3,4);

//     //   g.addEdge(0,2);
//     //   g.addEdge(2,5);
//     //   g.addEdge(1,6);
//     //   g.addEdge(6,4);
//     //   g.addEdge(4,3);
//     //   g.addEdge(4,9);
//     //   g.addEdge(3,7);
//     //   g.addEdge(3,8);


//     //    cout<<g.isCycleUndir()<<endl;
  

//     //   g.printAdjList();
//     //   cout<<"\n";
    
//     //   cout<<"BFS :";
//     //  g.bfs();

//     //  cout<<"DFS :";
//     //  g.dfs();

//     //Directed Graph
//     Graph graph(4,false);
//     graph.addEdge(1,0);
//     graph.addEdge(0,2);
//     graph.addEdge(2,3);
//     graph.addEdge(3,0);
//     cout<<graph.isCycleDir()<<endl;


//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Edge{

public:
   int v;
   int wt;


   Edge(int v,int wt){
    this->v=v;
    this->wt=wt;
   }

};

void dijkstra(int src,vector<vector<Edge>>graph,int V){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    vector<int>dist(V,INT_MAX);
    pq.push(make_pair(0,src));
    dist[src]=0;

    while(pq.size()>0){
        int u=pq.top().second;
        pq.pop();

        vector<Edge> edges=graph[u];
        for(Edge  e:edges){
            if(dist[e.v]>dist[u]+e.wt){
                dist[e.v]=dist[u]+e.wt
                pq.push(make_pair(dist[e.v],v));
            }
        }
    
    }

}
int main(){
    int V=6;
    vector<vector<Edge>> graph(V);

    graph[0].push_back(Edge(1,2));
    graph[0].push_back(Edge(2,4));

    graph[1].push_back(Edge(2,1));
    graph[1].push_back(Edge(3,7));

    graph[2].push_back(Edge(4,3));

    graph[3].push_back(Edge(5,1));

    graph[4].push_back(Edge(3,2));
    graph[4].push_back(Edge(5,5));

    return 0;
}

