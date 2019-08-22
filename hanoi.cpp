#include<iostream>
using namespace std;
int k = 0,n;


void mov(int n,char a,char c,char b){
//用b柱作为协助过渡，将a柱上的n个圆盘移到c柱上 
	if (n == 0) return;      
	//递归出口，如果n=0，则退出，即结束程序
	mov(n-1, a, b, c);        
	//用c柱作为协助过渡，将a柱上的（n-1）个圆盘移到b柱上
	k++;//记录步数 
	cout <<k<<": "<<a <<"->"<<n<<"->"<<c<<endl; 
	//超时改printf
	mov(n-1, b, c, a);        
	//用a柱作为协助过渡，将b柱上的（n-1）个圆盘移到c柱上
}

int  main() {
	int n;
	char a, b, c;
	cin >> n >> a >> b >> c; 
	mov(n, a, b, c);
	return 0;
}


