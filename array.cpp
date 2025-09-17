//Majority element theorme 
/*
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        
        //Brute force approach 
        
        // int n=arr.size();
        // for(int i=0;i<n;i++){
        //     int cnt=0;
        //     for(int j=0;j<n;j++){
        //      if(arr[j]==arr[i]){
        //          cnt++;
        //      }
        //      if(cnt>n/2) return arr[i];
        //     }
        // }
        // return -1;
        
        //Hashings
        // map<int,int>mpp;
        
        // for(int i=0;i<arr.size();i++){
        //     mpp[arr[i]]++;
        // }
        
        // for(auto it : mpp){
        //     if(it.second>(arr.size()/2)){
        //         return it.first;
        //     }
        // }
        // return -1;
        
        //Optimal
        /*
        int cnt=0;
        int el;
        //Moorie's voting algorithm 
        for(int i=0;i<arr.size();i++){
            if(cnt==0){
                cnt=1;
                el=arr[i];
            }
            else if(arr[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        
        //verifying
        int cnt1=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==el) cnt1++;
        }
        if(cnt1>(arr.size()/2)){
            return el;
        }
        return -1;
    }
};
*/