#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<cmath>

using namespace std;

long long  n;            // 兵营数量
long long c[100005];    // 每个兵营的初始人数
long long m,p1,s1,s2;   // 中立点位置，第一次增兵位置数量，第二次增兵位置。

int main()
{
	cin>>n;
	for(long long i=1; i<=n; i++) {
		cin>>c[i];
	}
	cin>>m>>p1>>s1>>s2;
	c[p1] += s1;    // 直接把 S1 的兵源补充到 P1 位置。
	long long powL=0;
	long long powR=0;
	for(long long i=1; i<=n; i++) {
		if(i<m) {
			powL += (m-i) * c[i];
		}
		if(i>m) {
			powR += (i-m) * c[i];
		}
	}
	// 先假设补充兵力投放在 m 点，先算出一个基础差值。
	long long p2 = m;
	//C 库函数 long int labs(long int x) 返回 x 的绝对值。
	long long diff = labs(powL - powR);
	for(long long i=1; i<=n ;i++) {
		// 左边的势力减右边的势力，同时再增加/减少 s2 投放后的势力。
//		long long temp = labs(powL + (m-i)*s2 - powR );
//		if(temp < diff) {
//			p2 = i;
//			diff = temp;
//		}
		if(i<m) {
			// 左边的势力减右边的势力，同时再增加 s2 投放后的势力。
			long long temp = labs(powL - powR + (m-i)*s2);
			if(temp < diff) {
				p2 = i;
				diff = temp;
			}
		} else if(i>m) {
			// 左边的势力减右边的势力，同时再减少 s2 投放后的势力。
			long long temp = labs(powL - powR - (i-m)*s2 );
			if(temp < diff) {
				p2 = i;
				diff = temp;
			}
		}
		
	}
	cout<<p2<<endl;
	return 0;
}

