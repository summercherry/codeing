#include<iostream>
#include<cmath>
using namespace std;

/**
	@brief 计算 a 的因数有几种分解方式
	@param a 需要被计算的数
	@param b 已经被拆到的因数(下一步需要从这个因数向上找)
	@return 因数分解的个数
*/
int f(int a,int b)
{
	// 至少 a=a 是一个解
	int ans=1;
	for(int i=b; i<=sqrt(a) ; i++) {
//	for(int i=2; i<=sqrt(a) ; i++) {
		// 该数最大可以被自身开方后的数字分解
		if(a%i==0) {
			// 注意，一个解的意思是一组因数的乘积，不是一个因数。
			// 因此这里需要不停地递归，直到 [b. sqrt(a)] 区间内没有因数。
			// 对于每个 a % i == 0 的情况都需要累计 ans.
			ans+=f(a/i,i);
			// 如果该数可以被上述循环的数字整除，就继续向下探寻被除后的数字的分解种数
		}
	}
	return ans; 
}
int main()
{
	int n,a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		cout<<f(a,2)<<endl;
	}
}
