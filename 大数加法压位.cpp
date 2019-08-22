#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
 
#define p 8//要压的位数 
#define press 100000000//相应的10的P次方 用于进位 
//这样如果要改变压位的位数只要改这里就可以 

using namespace std;

const int Maxn=50001;

int change(char s[],int n[])//压位的核心部分 
{	
	//在函数外定义数组，通过形参传入函数，在函数内修改数组  
	char temp[Maxn];//中间变量 记录每p位的数 
	int len = strlen(s);
	int cur = 0;//记录位数 
	for ( ;len >= p; ){//如果len大于等于p 
		strncpy(temp, s + len - p, p);//从后面截出来p位数 
		n[cur] = atoi(temp);//把temp转换成数字 
		cur += 1;
		len -= p;//继续下p位 
	}
	if(len){//如果最后len不是正好p的倍数 也就是还剩下的位数不足p位
		memset(temp, 0, sizeof(temp));
		//memset() 函数用来将指定内存的前n个字节设置为特定的值
		//这里为将temp的所有字节置为0 
		strncpy(temp, s, len);//全截下来 
		n[cur] = atoi(temp);//赋上 
		cur += 1;
	}
	return cur;//返回一个位数 
}

//加法计算，计算按照正常计算就行 
int add(int a[],int b[],int c[],int l1,int l2)
{
	int carry = 0;
	int n = max(l1,l2);
	for(int i = 0;i < n;i++){
		c[i] = a[i] + b[i] + carry;
		carry = c[i]/press;//进位 
		c[i] %= press;
	}
	
	while(carry > 0){
		c[n]= carry % press;
		carry /= press;
		n += 1;
	}
	return n;//返回答案的位数 
}
 
void print(int a[],int len)
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
 
int main()
{
	char str1[Maxn],str2[Maxn];
	int a[Maxn],b[Maxn],ans[Maxn];
	cin >> str1 >> str2;//读入两个字符串 
 
	int la = change(str1, a);//将s1这个字符串转化为a这个整型数组 
	int lb = change(str2, b);//同上 
	int len = add(a,b,ans,la,lb); 
	//计算长度为la的a数组和长度为lb的b数组,
	//最后把答案赋给ans数组 并顺便计算出ans的长度(便于输出) 
	print(ans,len);//输出函数 
}
