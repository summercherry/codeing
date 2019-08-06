#include<iostream>
using namespace std;

int matchstick(int n)
{
	int a[10] = {6,2,5,5,4,5,6,3,7,6};//从0-9所需的火柴棒个数
	int sum = 0;
//	while (n / 10 != 0){
//		// n除以10不等于0的话，说明该数至少有两位
//		sum += a[n % 10];   //加上该位火柴棍数
//		n = n / 10;
//	}
//	sum += a[n];     //加上最高位的火柴棍数
	while (n != 0){
		// n除以10不等于0的话，说明该数至少有两位
		sum += a[n % 10];   //加上该位火柴棍数
		n = n / 10;
	}
	return sum;
}

int main()
{
//	int n, count = 0;
//	int i, j, result;
//	cin >> n;
//	n -= 4;//减去加号、等号两根火柴棒
//	for (i = 0;i <= 1111;i++)
//	{
//		for (j = 0;j <= 1111;j++)
//		{
//			result = i + j;
//			if (matchstick(i) + matchstick(j) + matchstick(result) == n)
//				//三个数字的火柴棒个数相加＝所给火柴棒个数时
//				count++;//计数器+1
//		}
//	}
//	cout << count << endl;
	cout << matchstick(0);//为0 
	return 0;
}
