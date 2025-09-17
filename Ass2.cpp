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

/*Duplicate zero */
/*
#include <iostream>
using namespace std;

void duplicateTwos(int arr[], int n) {
    int countTwos = 0;

    // Count how many 2s will be duplicated without exceeding array length
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 2) {
            countTwos++;
        }
    }

    int i = n - 1;               // Original array index
    int j = n + countTwos - 1;  // Target index after duplication (might be out of bound)

    // Work backward from the end
    while (i >= 0 && j >= 0) {
        if (arr[i] == 2) {
            // Duplicate 2s if j is within bounds
            if (j < n) arr[j] = 2;
            j--;
            if (j < n) arr[j] = 2;
            j--;
        } else {
            if (j < n) arr[j] = arr[i];
            j--;
        }
        i--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    duplicateTwos(arr, n);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}*/


/*Sparse matrix*/
/*
#include <iostream>
using namespace std;

const int MAX = 100;

struct SparseMatrix {
    int rows, cols, nonZero;
    int row[MAX], col[MAX], val[MAX];
};

void printSparse(const SparseMatrix &mat) {
    cout << "Row Col Val\n";
    for (int i = 0; i < mat.nonZero; i++) {
        cout << mat.row[i] << "   " << mat.col[i] << "   " << mat.val[i] << "\n";
    }
}

SparseMatrix transpose(const SparseMatrix &mat) {
    SparseMatrix result;
    result.rows = mat.cols;
    result.cols = mat.rows;
    result.nonZero = mat.nonZero;

    int k = 0;
    for (int c = 0; c < mat.cols; c++) {
        for (int i = 0; i < mat.nonZero; i++) {
            if (mat.col[i] == c) {
                result.row[k] = mat.col[i];
                result.col[k] = mat.row[i];
                result.val[k] = mat.val[i];
                k++;
            }
        }
    }
    return result;
}

SparseMatrix add(const SparseMatrix &A, const SparseMatrix &B) {
    SparseMatrix result;
    result.rows = A.rows;
    result.cols = A.cols;
    result.nonZero = 0;

    if (A.rows != B.rows || A.cols != B.cols) {
        cout << "Dimension mismatch!\n";
        return result;
    }

    int i = 0, j = 0;
    while (i < A.nonZero && j < B.nonZero) {
        int posA = A.row[i]*A.cols + A.col[i];
        int posB = B.row[j]*B.cols + B.col[j];

        if (posA == posB) {
            int summed = A.val[i] + B.val[j];
            if (summed != 0) {
                result.row[result.nonZero] = A.row[i];
                result.col[result.nonZero] = A.col[i];
                result.val[result.nonZero++] = summed;
            }
            i++; j++;
        } else if (posA < posB) {
            result.row[result.nonZero] = A.row[i];
            result.col[result.nonZero] = A.col[i];
            result.val[result.nonZero++] = A.val[i];
            i++;
        } else {
            result.row[result.nonZero] = B.row[j];
            result.col[result.nonZero] = B.col[j];
            result.val[result.nonZero++] = B.val[j];
            j++;
        }
    }
    while (i < A.nonZero) {
        result.row[result.nonZero] = A.row[i];
        result.col[result.nonZero] = A.col[i];
        result.val[result.nonZero++] = A.val[i++];
    }
    while (j < B.nonZero) {
        result.row[result.nonZero] = B.row[j];
        result.col[result.nonZero] = B.col[j];
        result.val[result.nonZero++] = B.val[j++];
    }

    return result;
}

SparseMatrix multiply(const SparseMatrix &A, const SparseMatrix &B) {
    SparseMatrix result;
    result.rows = A.rows;
    result.cols = B.cols;
    result.nonZero = 0;

    if (A.cols != B.rows) {
        cout << "Dimension mismatch for multiplication!\n";
        return result;
    }

   
    for (int i = 0; i < A.nonZero; i++) {
        for (int j = 0; j < B.nonZero; j++) {
            if (A.col[i] == B.row[j]) {
                int r = A.row[i];
                int c = B.col[j];
                int v = A.val[i] * B.val[j];

                // Check if already exists at (r,c)
                bool found = false;
                for (int k = 0; k < result.nonZero; k++) {
                    if (result.row[k] == r && result.col[k] == c) {
                        result.val[k] += v;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    result.row[result.nonZero] = r;
                    result.col[result.nonZero] = c;
                    result.val[result.nonZero++] = v;
                }
            }
        }
    }

    // Remove zeros if any
    int k = 0;
    for (int i = 0; i < result.nonZero; i++) {
        if (result.val[i] != 0) {
            result.row[k] = result.row[i];
            result.col[k] = result.col[i];
            result.val[k] = result.val[i];
            k++;
        }
    }
    result.nonZero = k;

    return result;
}

int main() {
    SparseMatrix A, B;

    // Initialize matrix A
    A.rows = 3; A.cols = 3; A.nonZero = 4;
    A.row[0] = 0; A.col[0] = 0; A.val[0] = 1;
    A.row[1] = 0; A.col[1] = 2; A.val[1] = 2;
    A.row[2] = 1; A.col[2] = 1; A.val[2] = 3;
    A.row[3] = 2; A.col[3] = 0; A.val[3] = 4;

    // Initialize matrix B
    B.rows = 3; B.cols = 3; B.nonZero = 4;
    B.row[0] = 0; B.col[0] = 1; B.val[0] = 5;
    B.row[1] = 1; B.col[1] = 0; B.val[1] = 6;
    B.row[2] = 1; B.col[2] = 2; B.val[2] = 7;
    B.row[3] = 2; B.col[3] = 2; B.val[3] = 8;

    cout << "Matrix A (triplets):\n"; printSparse(A);
    cout << "\nMatrix B (triplets):\n"; printSparse(B);

    cout << "\nTranspose of A:\n";
    SparseMatrix At = transpose(A);
    printSparse(At);

    cout << "\nAddition A + B:\n";
    SparseMatrix sum = add(A, B);
    printSparse(sum);

    cout << "\nMultiplication A * B:\n";
    SparseMatrix prod = multiply(A, B);
    printSparse(prod);

    return 0;
}*/

