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
	//ѭ��������Ӹ����ͳ��� 
	cin>>n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	while(sum > 0){//���ﷶΧ����趨Ϊ���Ӹ�������ô���д��ڿ��Ӹ����ĳ��ȶ���������
	//���ڿ��ӷ�Χδ֪������ֻҪ���ӳ��ȴ���0�Ϳ��Խ���ѭ�� 
		int count = 0;//ÿ��ѭ����ʼ��Ҫ���¼�����ӳ���Ϊsum�ĸ��� 
		for(int j = 0; j < n; j++){//ÿһ�ζ��������еĿ��Ӳ���ͳ��������һ���������������Ӿ���� 
			if(a[j] == sum){//���������ӵ���sum��ͳ��һ������ 
				count++;
			}
		}
		if(count % 2 == 1){//�������������������������������ӵĳ��Ȳ����˳� 
			cout << sum;
			break; 
		}else{//���������ż�����ͼ���ͳ�Ʋ��жϿ��ӳ���Ϊsum+1������ 
			sum++; 
		}
	}
	return 0;
}

