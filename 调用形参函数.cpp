#include <iostream>
#include <string.h>
using namespace std;
int add(float a[3], float b[3],float sum[3],int p)
{
    sum[0] = a[0] + b[0];
    sum[1] = a[1] + b[1];
    sum[2] = a[2] + b[2];
    p = p + 1; 
    return p;
}

int main()
{
    float A[3] = { 1, 1, 1};
    float B[3] = { 1, 2,3};
    float M[3];
    int p = 0;
    p = add(A, B, M,p);
    cout << M[0] << " " << M[1] << "  "<<M[2]<<endl;
    cout << M[0] << " " << M[1] << "  " << M[2] << endl;
    cout << p <<endl;
    system("pause");
    return 0;
}

