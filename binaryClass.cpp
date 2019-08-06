#include<iostream>
using namespace std;
int main()
{
	// zero 和 one 分别存储 0 和 1 的个数。
	int i, k, zero, one;
	int a = 0, b = 0;
	// 从 1 循环到 1000 
	for(i = 1; i <= 1000; i++){
		// 将0和1的个数初值置为0 
		zero = one = 0;

		// 循环统计 i 是哪类数。
		// 如果 k 为奇数，则它二进制的最后一位是 1，否则是 0；
		// 将 k 不断除以 2，并且统计尾数是 0 还是 1，直到 k 为 0 
		for( k=i; k != 0; k /= 2) {
			if(k % 2 == 1)
				one++; 
			else
				zero++;
		}
		// 0的个数多，为a类，否则为b类；计数 
		if(one > zero) 
			a++;
		else 
			b++;
	}
	//输出结果 
	cout << a << ' ' << b << endl;
	return 0;
}
