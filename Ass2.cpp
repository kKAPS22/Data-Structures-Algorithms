//Implement the Bs Algorithm regarded as the fast search algorithm with run-time complexity of O(log n) in comparison to linear search 
// #include<bits/stdc++.h>
// using namespace std;

// int binarySearch(const vector<int>& arr,int target){
//         int low=0;
//         int high=arr.size()-1;

//         while(low<=high){
//             int mid=low+(high-low)/2;
//             if(arr[mid]==target){

//                 return mid;
//             }
        
//             else if(arr[mid]<target){
//                 low=mid+1;
//             }
            
//             else{
//                 high=mid-1;
//             }
//             return -1;
//         }
//     }


// int linearSearch(const vector<int>& arr,int target){
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n,target;
//     cout<<"Enter the number of elements (sorted array):";
//     cin>>n;

//     vector<int>arr(n);
//     cout<<"Enter "<<n<<"sorted elements :\n";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
   
//     cout<<"Enter the target value to search:";
//     cin>>target;

//     int bsIndex=binarySearch(arr,target);
//     if(bsIndex!=-1){
//         cout<<"Binary search :Found the target at index"<<bsIndex<<endl;
//     }
//    else{
//     cout<<"target not found"<<endl;
//    }

//    int lsIndex=linearSearch(arr,target);
//    if(lsIndex!=-1){
//     cout<<"Linear search :Found target at index "<<lsIndex<<endl;
    
//    }else{
//     cout<<"Linear search Traget not found"<<endl;
//    }

//     return 0;
// }

//Bubble sort 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={64,34,25,12,22,11,90};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     //bubble sort algorithm 
//     for(int i=0;i<n-1;i++){//When n-1 element get to the write position the one remaining element will be automatically ata the right position
//         for(int j=0;j<n-1-i;j++){//in the inner loop u have sorted the i no . of elements why to go back and unnnecesaryly increase the iterations
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }

//         }

//     }
//     cout<<"Sorted array";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<< "  ";
//     }
//     cout<<endl;
    

    
//     return 0;
// }

/*) Design the Logic to Find a Missing Number in a Sorted Array. Given an array of n-1 
distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array 
(a) Linear time 
(b) Using binary search. 
(c)Sum
(d)XOR*/

//Xor Approach 
// #include<bits/stdc++.h>
// using namespace std;

// int findMissingXOR(int arr[],int n){
//     int xor_all=0;
//     int xor_arr=0;

//     //Xor all numbers from 1 to n 
//     for(int i=1;i<=n;i++){
//         xor_all^=i;
//     }

//     //Xor all elements in the array 
//     for(int i=0;i<n-1;i++){
//         xor_arr^=arr[i];
//     }

//     return xor_all^xor_arr;
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7,9};
//     int n=9;

//     cout<<"Missing number is :"<<findMissingXOR(arr,n)<<endl;

//     return 0;
// }

//using linear 
// #include<iostream>
// using namespace std;

// int findMissingBruteForce(int arr[],int n,int N){
//     for(int i=1;i<=N;i++){
//         int flag=0;

    
//         for(int j=0;j<n;j++){
//             if(arr[j]==i){
//                 flag=1;
//                 break;

//             }
//         }

//         if(flag==0){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){

//    int arr[] = {1, 2, 3, 4, 6};
//     int N = 6;                // Range 1 to N
//     int n = sizeof(arr) / sizeof(arr[0]); // Array size is N - 1

//     cout << "Missing number is: " << findMissingBruteForce(arr, n, N) << endl;



//     return 0;
// }

/* String Related Programs */
// (a) Write a program to concatenate one string to another string. 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string str1="Krishna ";
//     string str2="Kapoor";

//     string result=str1+str2;
//     cout<<"Concatenated string :"<<result<<endl;
//     return 0;
// }




// (b) Write a program to reverse a string. 
// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//     string str="Krishna Kapoor";
//     int start=0;
//     int end=str.length()-1;
//     char temp;

//     while(start<end){
//         temp=str[start];
//         str[start]=str[end];
//         str[end]=temp;

//         start++;
//         end--;

        
//     }
//     cout<<"Reversed string :"<<str<<endl;

    

//     return 0;
// }
// (c) Write a program to delete all the vowels from the string.
// #include<bits/stdc++.h>
// using namespace std;

// bool isVowel(char c){
//     c=tolower(c);
//     return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

// }

// int main(){
     
//     string str="Beautifual day ";
//     string result=" ";

//     for(int i=0;i<str.length();i++){
//         if(!isVowel(str[i])){
//             result=result+str[i];
//         }
//     }

//     cout<<"String after removal of the vowels :"<< result<<endl;

//     return 0;
// }

// (d) Write a program to sort the strings in alphabetical order. 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// string arr[]={"banana","apple","cherry","mango","date"};
// int n=sizeof(arr)/sizeof(arr[0]);

// for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-1-i;j++){

//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//     }
// }

// cout << "Strings sorted alphabetically:\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }

// (e) Write a program to convert a character from uppercase to lowercase.
// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//     char ch;
//     cout<<"Enter an upper-case characcter ";
//     cin>>ch;

//     if(ch>='A'&&ch<='Z'){
//         ch=ch+('a'-'A');
//         cout<<"Lowercase character "<<ch<<endl;
//     }else{
//         cout<<"The character is an upper case ";
//     }
//     return 0;
// }


//8) Write a program to count the total number of distinct elements in an array of length n.
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter the length of array :";
//     cin>>n;
    
//     int arr[n];
//     cout<<"Enter the elements :";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     set<int> distinctel;
//     for(int i=0;i<n;i++){
//         distinctel.insert(arr[i]);
//     }

//     cout<<"Distinct elements are :";
//     for(auto element: distinctel){
//         cout<<element<<" ";
//     }

//     cout<<endl;
//     cout<<"Total number of distinct elements :"<<distinctel.size()<<endl;

//     return 0;
// }

//String Anagrams  
/*
Given two strings str1 and str2, determine if they form an anagram pair.  
Note: Two strings are considered anagrams if one string can be rearranged to form the other 
string. */
/*
#include<bits/stdc++.h>
using namespace std;

bool Anagrams(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    }

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    return str1==str2;
}



int main(){
     
    string s1,s2;
    cout<<"Enter string 1:";
    cin>>s1;

    cout<<"Enter string s2 :";
    cin>>s2;


    if(Anagrams(s1,s2)){
        cout<<"Strings are anagrams ."<<endl;
    }else{
        cout<<"Strings are NOT anagrams."<<endl;
    }

    return 0;
}*/

/*Inversion Counting */
// #include<bits/stdc++.h>
// using namespace std;

// int  inversion(int A[],int n){
//   int count=0;
//     for(int i=0;i<n;i++){  
//        for(int j=i+1;j<n;j++){    
//              if(A[i]>A[j]&&i<j){
//                   count ++;
//               }
//         }
//     }
//   return count;
// }


// int main(){
//     int arr[]={12,14,16,18,5,21,17,10,11};
//     int n=sizeof(arr)/sizeof(arr[0]);
    
//     cout<<inversion(arr,n);
//     return 0;
// }

//brute force Approach 
/*
#include<bits/stdc++.h>
using namespace std;

void CountPairsDifference(int A[],int k,int n){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((A[i]-A[j])==k){
                cout<<"the value of i "<<"and j "<<i<<","<<j;
                cout<<"\n";

            }
        }

    }
}

int main(){
    int arr[]={13,12,11,10,9,8,7,6,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;

    CountPairsDifference(arr,k,n);
    return 0;
}*/

//Optimized code --->o(n log n)
/*#include<bits/stdc++.h>
using namespace std;

int CountPairsDifference(int A[],int n,int k){
    sort(A,A+n);
    int count=0;
    int i=0;
    int j=1;

    while(j<n){
        if(A[j]-A[i]==k){
            count++;
            i++;
            j++;
        }else if(A[j]-A[i]<k){
            j++;
        }else{
            i++;
            if(i==j){
                j++;
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {5, 6, 7, 8, 9, 10, 11, 12, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << CountPairsDifference(arr, n, k); // Output: 6
    return 0;
}*/

//most optimized
/*
#include<bits/stdc++.h>
using namespace std;

int CountPairsDifference(int A[],int n,int k){
    int count=0;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(A[i]);
    }

    for(int i=0;i<n;i++){
        if(s.count(A[i]+k)){
            count++;
        }
    }
    return count;
}
int main() {
    int arr[] = {5, 6, 7, 8, 9, 10, 11, 12, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << CountPairsDifference(arr, n, k); // Output: 6
    return 0;
}*/

/*) String Split Challenge 
You are given a string consisting of lowercase English alphabets. Your task is to determine 
if it's possible to split this string into three non-empty parts (substrings) where one of 
these parts is a substring of both remaining parts  in cpp*/
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// bool isSubstring(const string& s1, const string& s2) {
//     return s2.find(s1) != string::npos;
// }
// int main(){
//     string s;
//     cin>>s;
//     int n =(int)s.size();

//     for(int i=1;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             string A=s.substr(0,i);
//             string B=s.substr(i,j-i);
//             string C=s.substr(j);


//             if(isSubstring(A,B) && isSubstring(A,C)){
//                  cout<<"YES\n";
//                  return 0;
//             }
//             if (isSubstring(B, A) && isSubstring(B, C)) {
//                 cout << "YES\n";
//                 return 0;
//             }
//             if (isSubstring(C, A) && isSubstring(C, B)) {
//                 cout << "YES\n";
//                 return 0;

//         }
//     }
//     }
//     cout<<"No\n";
//     return 0;
// }




/*Brute Force Approach */
// void SortArrayOf012(int arr[],int n){
//     int cnt0;int cnt1;int cnt2=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             cnt0++;
//         }else if( arr[i]==1){
//             cnt1++;
//         }else{
//             cnt2++;
//         }
//     }

//     for(int i=0;i<cnt0;i++){
//         arr[i]={0};
//     }
//     for(int i=cnt0;i<cnt0+cnt1;i++){
//         arr[i]={1};
//     }
//     for(int i=cnt0+cnt1;i<n;i++){
//         arr[i]={2};
//     }
// }


// void SortArray012(int arr[],int n){
//     //Dutch National Flag 

//     int low=0,mid=0,high=n-1;
//     while(mid<=high){
//     if(arr[mid]==0){
//         swap(arr[mid],arr[low]);
//         mid++,low++;
//     }else if(arr[mid]==1){
//         mid++;
//     }else{
//         swap(arr[mid],arr[high]);
//         high--;
//     }
// }
// }

