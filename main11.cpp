#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
  const int SIZE=4;

  double sumMajorDiagonal(const double m[] [SIZE]) {
      double sum=0.0;
      for(int i=0;i<SIZE;i++) {
          sum+=m[i][i];
      }
      return sum;
  }
      int main () {
          double m[SIZE][SIZE]={
              {2.0,4.5,1.2,7.8},
              {9.3,5.6,0.8,3.1},
              {6.4,8.7,2.9,4.0},
              {5.2,1.7,3.5,6.8}
          };
          cout<<"Sum of major diagonal ="<<sumMajorDiagonal(m)<<endl;
      }
 //Problem 2
  const int SIZE1=4;
  double sumColumn(const double m[][SIZE1],int rowSize,int coulmnIndex) {
      double sum=0.0;
      for(int i=0; i<rowSize;++i) sum +=m[i][coulmnIndex];
      return sum;
  }
  int main () {
      double m[5][SIZE1]={
          {5,3,1,6},
          {-5,2,1,5},
          {6,6,1,6},
          {0,4,0,4}
      };
      for(int j=0;j<SIZE1;j++) {
          cout<<"Sum of column"<<j<<"="<<sumColumn(m,5,j)<<endl;
      }
  }
 //Problem 3
 const int N=4;
 void multiplyMatrix(const double a[][N],const double b[][N],double c[][N]) {
     for (int i=0;i<N;i++) {
         for (int j=0;j<N;j++) {
             c[i][j]=0;
             for (int k=0;k<N;k++) {
                 c[i][j]+=a[i][k]*b[k][j];
             }
         }
     }
 }
 int main() {
     double M1[N][N]={
         {1.0,2.0,3.0,4.0},
         {5.0,6.0,7.0,8.0},
         {9.0,10.0,11.0,12.0},
         {13.0,14.0,15.0,16.0}
     };
     double M2[N][N]={
         {0.5,1.5,3.5,3.5},
         {4.5,5.5,6.5,7.5},
         {8.5,9.5,10.5,11.5},
         {12.5,13.5,14.5,15.5}
     };
     double C[N][N];
     multiplyMatrix(M1,M2,C);
     cout<<"Output:\n";
     for (int i=0;i<N;i++) {
         for (int j=0;j<N;j++) {
             cout<<C[i][j]<<" ";
             if (j!=N-1) cout<<" ";
         }
         cout<<endl;
     }
     return 0;
 }
 //Problem 4
 int findMax(const int arr[][100],int n, int m) {
     int maxVal=arr[0][0];
     for (int i=0;i<n;i++) {
         for (int j=0;j<m;j++) {
             if (arr[i][j]>maxVal) {
                 maxVal=arr[i][j];
                 return maxVal;
             }
             int main() {
                 int arr[3][100]={
                     {3,8,1,4},
                     {5,9,0,2},
                     {7,6,3,1}
                 };
                 cout<<"Maximum element="<<findMax(arr,3,4);
             }
         }
     }
 }

///Problem 5
 int main() {
     int n=3;
     int a[3][3]={{1,2,3},{4,5,6},{7,8,9,}};
     int t[3][3];
     for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
             t[i][j]=a[i][j];
     cout<<"Transpose:\n";
     for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
             cout<<t[i][j]<<" ";
     cout<<endl;
 }
//Problem 6
 int main() {
     int n=3,m=4;
     double a[3][4]={
         {10,20,30,40},
         {1,2,3,4},
         {5,10,15,20}
     };
     for (int i=0;i<n;i++) {
         double sum=0;
         for (int j=0;j<m;j++) {
             sum+=a[i][j];
             cout<<"Average of row"<<i<<"="<<sum/m<<endl;
         }
     }
 }

//Problem 7
 int main() {
     int n=3;
     int a[3][3]={
         {1,2,3},
         {2,5,6},
         {3,6,9}
     };
     bool symmetric=true;
     for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
             if (a[i][j]!=a[j][i])
                 symmetric=false;
     if(symmetric)cout<<"The matrix is symmetric.";
     else cout<<"The matrix is not symmetric.";
 }
//Problem 8
 int main() {
     int n;
     cin >> n;
     vector<int> v(n);
     for (int i = 0; i < n; i++) cout << v[i];
     int minV=v[0],maxV=v[0];
     double sum=0;
     for (int x:v) {
         if (x<minV) minV=x;
         if (x>maxV) maxV=x;
         sum+=x;
     }
     cout<<"Minimum="<<minV<<endl;
     cout<<"Maximum="<<maxV<<endl;
     cout<<"Average="<<sum/n;
 }
//Problem 9
 int main() {
     int n;
     cin >> n;
     vector<int> v(n);
     for (int i = 0; i < n; i++) {
         cin >> v[i];
         vector<int>res;
         for (int x:v)
             if (x>0)res.push_back(x);
         sort(res.begin(), res.end());
         for (int x:res)
             cout << x << " ";
     }
 }
//Problem 10
int main() {
    vector<int> v={1,2,5,0,3,1,7};
    vector<int> result;
    for (int i=1;i<v.size()-1;i++)
        if (v[i]<v[i-1] && v[i])<v[i+1])
result.push_back(v[i]);
    for (int x : result)
        cout<<x<<" ";
}




