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

