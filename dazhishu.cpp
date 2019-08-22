#include<iostream>
using namespace std;
int main()
{
	long long n, i;
	bool find = false;
	cin >> n;
	// 从 n 开始逐个往下减，直到找到符合要求的质数。
	for( ; !find; n--) 
	{
		find = true;
		for(i = 2; i < n; i++) {
			// 判断 n 是否能除尽 i
			if(n % i == 0)
			{
				find = false;
				break;
			}
		}
	}
	// 循环当中 n 做了 -- 操作，这里要加回来。
	cout << n+1;
	return 0;
}
