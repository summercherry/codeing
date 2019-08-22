#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


int main()
{
	// 初始化和定义标志位
	int num1[200] = {0}, num2[200] = {0}, flag = 0;
	//flag的初始值设为0，即为默认等于的状态，
	//本程序只需要将两数不等于的情况进行罗列，修改flag的值。
	char str1[201], str2[201];
	
	// 数据输入
	cin >> str1 >> str2;

	int len1 = strlen(str1);
	int len2 = strlen(str2);

	// 数据存储
	for(int i = 0; i < len1; i++) {
		num1[i] = str1[len1 -i-1] - '0';//填写下标
	}
	for(int i = 0; i < len2; i++) {
		num2[i] = str2[len2 -i-1]   ;//填空
	}
	//数据比较
	int i;
	if (len1 > len2) flag =  1;
	//num1的位数大于num2则num1比num2大
	if (len1 < len2) flag = -1;
	//num1的位数小于num2则num1比num2小
	if (len1 == len2) {
		for(i = len1; i > 0; i--){  //从高位到低位比较
			if (num1[i] > num2[i]) {
				flag =  1;
				break;
			}
			if (num1[i] < num2[i]){
				flag = -1;
				break;
			} 
		}
	}

	//输出
	cout << str1 ;
	if (flag == 0)
		cout << " = ";
	else if (flag == 1)
		cout << " > ";
	else cout << " < ";
	cout << str2;
	return 0;
}
