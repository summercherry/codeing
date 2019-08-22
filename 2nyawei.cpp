#include <iostream>
using namespace std;

int change(char s[],int n[])//压位的核心部分 
{
	char temp[Maxn];//中间变量 记录每p位的数 
	int len = strlen(s+1),cur=0;
	while(len/p){//如果len大于等于p 
		strncpy(temp,s+len-p+1,p);//从后面截出来p位数 
		n[++cur]=atoi(temp);//把temp转换成数字 
		len -= p;//继续下p位 
	}
	if(len){//如果最后len不是正好p的倍数 也就是还剩下点不够p位的 
		memset(temp,0,sizeof(temp));
		strncpy(temp,s+1,len);//全截下来 
		n[++cur]=atoi(temp);//赋上 
	}
	return cur;//返回一个位数 
}


int pluss(int a1[100],int m){
	//在函数外定义数组，通过形参传入函数，在函数内修改数组 
	int carry = 0;
	for(int i = 0; i < m; i++)
	{
		int tmp = a1[i] + a1[i] + carry;
		carry = tmp / 10;
		a1[i] = tmp % 10;
	}

	// 针对最后一个进位，需要单独处理。
	if(carry) {
		a1[m] = carry;
		m = m + 1;//进位加1 
	}
	return m;//返回执行加法以后的位数 
}

int main()
{
	// 初始化和定义操作数、结果
	int num1[100] = {0};
	//数据输入
	int n;
	cin >> n;
	num1[0] = 1;//2^0=1 
	sum[0] = num1[0];
	int p = 1;//存储位数，从个位开始 
	for (int i = 0; i < n; i++){
		p = pluss(num1, p);	
	}

	// 输出
	p = p - 1; //将位数换为下标 
	for( ; p >= 0 ; p--){
		cout<< num1[p];
	}
	return 0;
}
 


