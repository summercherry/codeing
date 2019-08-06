#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int i, num, sum, tmp;
	cin >> num;

	// 遍历 100~num 内所以数据，输出满足条件的数据
	for(i = 100; i <= num; i++) {
		sum = 0;
		tmp = i;
		while (tmp / 10 != 0){ 
			sum +=  pow(tmp % 10, 3); //从个位数字开始提取 
			tmp = tmp / 10;
			//参与运算的均为整型时，结果为整型，舍去小数。 
		}
		sum +=  pow(tmp % 10, 3);
		if (i == sum)
			cout << i << endl;
	}
	return 0;
}

