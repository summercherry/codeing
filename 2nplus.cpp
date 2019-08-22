//#include <iostream>
//using namespace std;
//
//int pluss(int a1[100],int m){
//	//在函数外定义数组，通过形参传入函数，在函数内修改数组 
//	int carry = 0;
//	for(int i = 0; i < m; i++)
//	{
//		int tmp = a1[i] + a1[i] + carry;
//		carry = tmp / 10;
//		a1[i] = tmp % 10;
//	}
//
//	// 针对最后一个进位，需要单独处理。
//	if(carry) {
//		a1[m] = carry;
//		m = m + 1;//进位加1 
//	}
//	return m;//返回执行加法以后的位数 
//} 

//int main()
//{
//	// 初始化和定义操作数、结果
//	int num1[100] = {0};
//	//数据输入
//	int n;
//	cin >> n;
//	num1[0] = 1;//2^0=1 
//	sum[0] = num1[0];
//	int p = 1;//存储位数，从个位开始 
//	for (int i = 0; i < n; i++){
//		p = pluss(num1, p);	
//	}
//
//	// 输出
//	p = p - 1; //将位数换为下标 
//	for( ; p >= 0 ; p--){
//		cout<< num1[p];
//	}
//	return 0;
//}
#include <iostream>
using namespace std;

int main() {
	int num[105] = {1}, n;
	cin >> n;

	int k = 1;  //结果的位数
	for(int i = 0; i < n; i++) {  //乘 N 次2
		int carry = 0;
		for(int j = 0; j < k; j++) { // 按位进行乘 2 计算
			num[j] = num[j] * 2 + carry;
			carry = num[j] / 10;
			num[j] = num[j] % 10;
		}
		if(carry) {
			num[k] = carry;
			k = k + 1;//进位加1 
		}
	}

	//输出
	k = k - 1; //将位数换为下标 
	for( ; k >= 0 ; k--){
		cout<< num[k];
	}

	return 0;
}

