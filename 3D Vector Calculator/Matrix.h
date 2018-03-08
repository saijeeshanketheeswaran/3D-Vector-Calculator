#ifndef Matrix_h
#define Matrix_h

#include<iostream>

using namespace std;

// Class of  Matrix 1
class matrix1{

private:
  int a[5][5];
  int r1,c1;
  int r2,c2;
  int b[10][10];
  int c [10][10];

public:
   void getmatrix1(){
     cout << endl;
     cout << "Need to have the same dimensions to work" << endl;
     cout << "Max number is 5" << endl;
     cout << "Matrix 1:" << endl;
     cout << "Rows: ";
     cin>> r1;
     cout << "Columns: ";
     cin>> c1;
     cout << endl;
     cout<<"Enter elements: " << endl;
     for(int i=0;i<r1;i++){
       for(int j=0;j<c1;j++) {
         cout << i + 1 << j + 1 << " : ";
         cin>>a[i][j];
       }
     }
     cout << endl;
   }

   void getmatrix2(){
     cout << endl;
     cout << "Need to have the same dimensions to work" << endl;
     cout << "Max number is 5" << endl;
     cout << "Matrix 2:" << endl;
     cout << "Rows: ";
     cin>> r2;
     cout << "Columns ";
     cin>> c2;
     cout << endl;
     cout<<"Enter elements: " << endl;
     for(int i=0;i<r2;i++){
       for(int j=0;j<c2;j++) {
         cout << i + 1 << j + 1 << " : ";
         cin>>b[i][j];
       }
     }
     cout << endl;
   }

   friend void matrixsum(matrix1 a, matrix1 b){
     if(a.c1==b.c2 && a.r1==b.r2){
       cout<<"Sum of matrices: " << endl;;
       for( int i=0;i<a.r1;i++){
         for(int j=0;j<a.c1;j++) {
           cout << a.a[i][j]+b.b[i][j] <<" ";
         }
         cout << endl;
       }
     }
     else{
       cout<<"Dimensions are not same, so Addition not possible.";
     }
     cout << endl;
   }


   friend void matrixmutiply(matrix1 a, matrix1 b){
     for(int i =0; i<a.r1; i++){
     for(int j =0; j<b.c2; j++){
       b.c[i][j]=0;
     }
   }
     if(a.c1 == b.r2){
       cout<<"Product of matrices: " << endl;;
       for( int i=0; i<a.r1;i++){
         for(int j=0; j<b.c2;j++) {
           for (int k = 0; k < a.c1; k++){
            b.c[i][j] += a.a[i][k]*b.b[k][j];
         }
       }
     }

       for(int i = 0; i < a.r1; i++) {
         for (int j = 0; j < b.c2; j++ ){
           cout << b.c[i][j] <<" ";;
         }
          cout << endl;
       }
     }
     else{
       cout << "Dimensions are not same since column of matrix 1 does not equal row of matrix 2,";
       cout << "so Multiplication not possible";
     }
     cout << endl;
   }


   friend void matrixsubtract(matrix1 a, matrix1 b){
     if(a.c1==b.c2 && a.r1==b.r2){
       cout<<"Difference of matrices: " << endl;;
       for( int i=0;i<a.r1;i++){
         for(int j=0;j<a.c1;j++) {
           cout << a.a[i][j]-b.b[i][j] <<" ";
         }
           cout << endl;
       }
     }
     else{
       cout<<"Dimensions are not same, so Subtraction not possible";
     }
     cout << endl;
   }
};


#endif
