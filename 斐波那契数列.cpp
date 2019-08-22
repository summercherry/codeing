#include <iostream>
using namespace std;

int fibonaci(int i)
{
	if(i == 1 || i == 2) {
		// 平凡情况，返回 1。
		return 1;
	} else {
		// 一般情况，返回等于前两项的和
		return fibonaci(i - 1) + fibonaci(i - 2);
	}
}

int main(){
	int n, a, j;
	cin >> n;
	for(j = 0; j < n; j++){
		cin >> a;
		cout << fibonaci(a) << endl;
	}
	return 0;
}
