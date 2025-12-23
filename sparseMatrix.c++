/*Sparse Matrix
1.Transpose 
2.Addition
3.Multiplication
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int m,n;
//     cout<<"Enter the no. of rows of your sparse matrix :"<<endl;
//     cin>>m;
//     cout<<"Enter the no. of Col of your Sparse Matrix :"<<endl;
//     cin>>n;
//     int A[m][n];
//     cout<<"Enter the elements of matrix :"<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>A[i][j];
//             cout<<"  ";
//         }
//     }

//     int size=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(A[i][j]!=0){
//                 size++;
//             }
//         }
//     }

//     int sp1[size][3];
//     int row=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(A[i][j]!=0){
//                 sp1[row][0]=i;
//                 sp1[row][1]=j;
//                 sp1[row][2]=A[i][j];
//                 row++;
//             }
//         }
//     }

//     cout<<"Thus the desired sparse Matrix is "<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<3;j++){
//             cout<<sp1[i][j]<<"|";
            
//         }
//         cout<<endl;
//     }

//     int tsp[size][3];
//     cout<<"Transpose sparse matrix "<<endl;
//     for(int i=0;i<size;i++){
//         tsp[i][0]=sp1[i][1];
//         tsp[i][1]=sp1[i][0];
//         tsp[i][2]=sp1[i][2];
//     }

//      cout << "Transpose of the sparse matrix is:\n";
// for(int i = 0; i < size; i++) {
//     for(int j = 0; j < 3; j++) {
//         cout << tsp[i][j] << " ";
//     }
//     cout << endl;
// }



//     return 0;
// }

//Addition of sparse matrix
// #include <bits/stdc++.h>
// using namespace std;

// void AdditionOfTwoMatrix(int sp1[][3], int size1, int sp2[][3], int size2) {
//     int i = 0, j = 0, k = 0;
//     int spAdd[size1 + size2][3];
//     while (i < size1 && j < size2) {
//         if (sp1[i][0] == sp2[j][0] && sp1[i][1] == sp2[j][1]) {
//             spAdd[k][0] = sp1[i][0];
//             spAdd[k][1] = sp1[i][1];
//             spAdd[k][2] = sp1[i][2] + sp2[j][2];
//             i++; j++;
//         } else if ((sp1[i][0] < sp2[j][0]) || 
//                    (sp1[i][0] == sp2[j][0] && sp1[i][1] < sp2[j][1])) {
//             spAdd[k][0] = sp1[i][0];
//             spAdd[k][1] = sp1[i][1];
//             spAdd[k][2] = sp1[i][2];
//             i++;
//         } else {
//             spAdd[k][0] = sp2[j][0];
//             spAdd[k][1] = sp2[j][1];
//             spAdd[k][2] = sp2[j][2];
//             j++;
//         }
//         k++;
//     }
//     while (i < size1) {
//         spAdd[k][0] = sp1[i][0];
//         spAdd[k][1] = sp1[i][1];
//         spAdd[k][2] = sp1[i][2];
//         i++; k++;
//     }
//     while (j < size2) {
//         spAdd[k][0] = sp2[j][0];
//         spAdd[k][1] = sp2[j][1];
//         spAdd[k][2] = sp2[j][2];
//         j++; k++;
//     }

//     cout << "ROW\tCOL\tVALUE\n";
//     for (int l = 0; l < k; l++) {
//         cout << spAdd[l][0] << "\t" << spAdd[l][1] << "\t" << spAdd[l][2] << endl;
//     }
// }

// int main() {
//     // Define two sparse matrices each by number of non-zero elements
//     int size1 = 3;
//     int sp1[3][3] = {
//         {0, 1, 5}, // row 0, col 1, value 5
//         {1, 2, 8}, // row 1, col 2, value 8
//         {3, 0, 6}  // row 3, col 0, value 6
//     };

//     int size2 = 3;
//     int sp2[3][3] = {
//         {0, 1, 3}, // row 0, col 1, value 3
//         {2, 0, 7}, // row 2, col 0, value 7
//         {3, 3, 4}  // row 3, col 3, value 4
//     };

//     cout << "Sparse Matrix 1:" << endl;
//     for (int i = 0; i < size1; i++) {
//         cout << "Row: " << sp1[i][0] << ", Col: " << sp1[i][1] << ", Val: " << sp1[i][2] << endl;
//     }
//     cout << "Sparse Matrix 2:" << endl;
//     for (int i = 0; i < size2; i++) {
//         cout << "Row: " << sp2[i][0] << ", Col: " << sp2[i][1] << ", Val: " << sp2[i][2] << endl;
//     }

//     cout << "Addition of the two sparse matrices is:" << endl;
//     AdditionOfTwoMatrix(sp1, size1, sp2, size2);

//     return 0;
// }


//Multiplication of sparse matrix
#include<iostream>
using namespace std;

struct Element{//It is a way to group variables under one name 

    int row,col,val;
};

int multiplySparse(int r1,int c1,int r2,int c2,int n1,int n2,Element A[],Element B[],Element C[]){
    
    
    if(c1!=r2){
        cout<<"Matrix multiplicationb not possible ";
        return 0;
    }

    int k=0;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int sum=0;
            for(int x=0;x<n1;x++){
                if(A[x].row==i){
                    for(int y=0;y<n2;y++){
                        if(B[y].row==A[x].col && B[y].col==j){
                            sum+=A[x].val*B[y].val;
                        }
                    }
                }
            }

            if(sum!=0){
                C[k].row=i;
                C[k].col=j;
                C[k].val=sum;
                k++;

            }
        }
    }
    return k;
}

int main(){

    return 0;
}