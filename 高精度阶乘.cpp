#include <iostream>
#define p 4//要压的位数 
#define press 10000//相应的10的P次方 用于进位 
//这样如果要改变压位的位数只要改这里就可以 

using namespace std;

int ans[100001],len = 1;

//高精度数乘低精度
void mul(int a[],int c){
	int carry = 0;
	for (int i = 0;i < len;i++){
		a[i] = a[i] * c + carry;
		carry = a[i] / press;
		a[i] = a[i] % press;
	}
	while (carry > 0){
		a[len] = carry % press;
		carry = carry / press;
		len = len + 1;
	}
}

//递归函数
void fn(int n){
	if (n == 1 || n == 0){
		ans[0] = 1;
		return ;
	}
	fn(n-1);
	mul(ans,n);
}


 void print(int a[])
{ 	
	len -= 1;//长度转换为下标 
	for( ; len > 0; len--) {
			if(a[len] != 0) break;
	}
	printf("%d",a[len]);//处理最高位 
	for(int i = len - 1;i >= 0;i--){ 
		printf("%0*d",p,a[i]);//输出p位 不足补0 
	} 
}

int main(){
	int n;
	cin >> n;
	fn(n);
	print(ans);
	return 0;	
}
