#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstring>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    int a[10005] = {}, n, sum = 1;
	//循环输入筷子根数和长度 
	cin>>n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	while(sum > 0){//这里范围如果设定为筷子根数，那么所有大于筷子根数的长度都遍历不到
	//由于筷子范围未知，所以只要筷子长度大于0就可以进行循环 
		int count = 0;//每次循环开始都要重新计算筷子长度为sum的根数 
		for(int j = 0; j < n; j++){//每一次都遍历所有的筷子并且统计数量，一旦发现奇数个筷子就输出 
			if(a[j] == sum){//如果这根筷子等于sum就统计一下数量 
				count++;
			}
		}
		if(count % 2 == 1){//如果数量是奇数，就输出该奇数个筷子的长度并且退出 
			cout << sum;
			break; 
		}else{//如果数量是偶数，就继续统计并判断筷子长度为sum+1的数量 
			sum++; 
		}
	}
	return 0;
}

