//Reverse an array 
/*
#include<iostream>
using namespace std;
void Reverse(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

int main(){
 
int arr[]={1,2,3,4};


    
int n=sizeof(arr)/sizeof(arr[0]);
Reverse(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}*/

//Multiplication of matrix 
// #include<iostream>
// using namespace std;

// int main(){

//     int A[100][100];
//     int B[100][100];
//     int product[100][100];
//     int sum=0;
//     int Arows,Acolumns;
//     int Brows,Bcolumns;

//     cout<<"Enter the rows matrix A:";
//     cin>>Arows;
//     cout<<"Enter the colums of matrix A:";
//     cin>>Acolumns;

//     cout<<"Enter the rows of matrix B:";
//     cin>>Brows;
//     cout<<"Enter the columns of matrix B:";
//     cin>>Bcolumns;

//     cout<<"Enter the elements of matrix A:\n";
//     for(int i=0;i<Arows;i++){
//         for(int j=0;j<Acolumns;j++){
//             cin>>A[i][j];
//             cout<<" ";
//         }
//         cout<<"\n";
//     }

//     cout<<"Enter the elements of matrix B:\n";
//     for(int i=0;i<Brows;i++){
//         for(int j=0;j<Bcolumns;j++){
//             cin>>B[i][j];
//             cout<<" ";
//         }
//         cout<<"\n";
//     }


//     for(int i=0;i<Arows;i++){
//         for(int j=0;j<Bcolumns;j++){
//             for(int k=0;k<Brows/*Acolums*/;k++){//you can also take acolumns 
//                 sum +=A[i][k]*B[k][j];
//             }
//             product[i][j]=sum;
//             sum=0;
//         }
//     }

//     cout<<"Resultant matrix";
//     for(int i=0;i<Arows;i++){
//         for(int j=0;j<Bcolumns;j++){
//             cout<<product[i][j];
//             cout<<" ";
//         }
//         cout<<"\n";
//     }



//     return 0;

// }


//Transpose of matrix 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){


//     int rows,cols;
//     cout<<"Enter the number of rows :";
//     cin>>rows;

//     cout<<"Enter the number of columns :";
//     cin>>cols;


//     int matrix[100][100];
//     int transpose[100][100];

//     cout<<"Enter the elements of the matrix "<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<"Enter the ["<<i<<","<<j<<"]";
//             cin>>matrix[i][j];
//         }
//     }

//     //computing the transpose 
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             transpose[j][i]=matrix[i][j];
//         }
//     }

//     for(int i=0;i<cols;i++){
//         for(int j=0;j<rows;j++){
//             cout<<transpose[i][j];
            
//         }
//         cout<<endl;
//     }


//     return 0;
// }

//To find sum odf every row and colum 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int rows,cols;
//     int matrix[100][100];


//     cout<<"Enter the number of rows :";
//     cin>>rows;
//     cout<<"Enter the number of columns :";
//     cin>>cols;

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<"Enter the element with ["<<i<<","<<j<<"]";
//             cin>>matrix[i][j];
//             cout<<"  ";
//         }
//         cout<<endl;
//     }


//     //To find rowSum --->traverse the matrix using rows 
//    for(int i=0;i<rows;i++){
//     int rowSum=0;
//     for(int j=0;j<cols;j++){
      
//         rowSum+=matrix[i][j];
    
//     }
//     cout<<"The sum of row "<<i<<" ="<<rowSum<<endl;
// }


// //To find colSum --->traverse the matrix using the column 
// for(int j=0;j<cols;j++){
//     int colSum=0;
//     for(int i=0;i<rows;i++){

//       colSum+=matrix[i][j];

//     }
//     cout<<"Sum of column "<<j<<"="<<colSum<<endl;
// }

//     return 0;
// }

/*2) Design the logic to remove the duplicate elements from an Array and after the 
deletion the array should contain the unique elements*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// set<int> st;
// int arr[]={1,2,2,3,4,5,7,112,110,123,14,9,0,4};




// int n=sizeof(arr)/sizeof(arr[0]);

// for(int i=0;i<n;i++){

//     st.insert(arr[i]);
// }

// int index=0;
// for(auto it:st){
//     arr[index]=it;
//     index++;

// }

// cout<<"Array after removing duplicates (sorted) :";
// for(int i=0;i<index;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<"\n";

//     return 0;

// }

//Predict the output 
// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//     int j;
//     int arr[5]={1};
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<"  ";
//     }

//     return 0;

// }
/*In C++, when you initialize an array like int arr[5] = {val};, 
only the first element is explicitly initialized, and the remaining elements are zero-initialized automatically if the array is defined with this brace-enclosed initializer.*/