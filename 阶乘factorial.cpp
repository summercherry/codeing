#include <cstdio>
#include <iostream>
using namespace std;
//find n!
int findn(int n){
	int count = 0;
	for ( ;n > 0; ){
		n /= 5;
		count += n;
	}
	return count;	
} 

int main(){
	int n;
	cin >> n;
	cout << findn(n) << " ";
	if (n % 2 != 0){
		//find n!! ��nΪ����
		//(2n-1)!! = 1*3*5*...*(2n-1) 
		cout << 0;//ֱ�ӷ���0 
	}
	else {
		//find n!! ��nΪż��
		// (2n)!! = 2*4*6*...*2n
		n /= 2;//˫�׳˳���2��ɽ׳�
		cout << findn(n) << endl; 
	}
	return 0;
}
