#include <iostream>
using namespace std;

int fibonaci(int i)
{
	if(i == 1 || i == 2) {
		// ƽ����������� 1��
		return 1;
	} else {
		// һ����������ص���ǰ����ĺ�
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
