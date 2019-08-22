#include<iostream>
using namespace std;

int fac(int n)  //递归函数
{
	//if (n == 1) return 1; //递归出口 
	return (fac(n-1) + n);  //调用下一层递归
} 
int main()
{
	int n;
	cin >> n;  //输入t的值
	cout << "s=" << fac(n) << endl; //计算1到t的累加和，输出结果
}

