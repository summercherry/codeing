#include <iostream>
#define p 4//Ҫѹ��λ�� 
#define press 10000//��Ӧ��10��P�η� ���ڽ�λ 
//�������Ҫ�ı�ѹλ��λ��ֻҪ������Ϳ��� 

using namespace std;

int ans[100001],len = 1;

//�߾������˵;���
void mul(int a[],int c){
	int carry = 0;
	for (int i = 0;i < len;i++){
		a[i] = a[i] * c + carry;
		carry = a[i] / press;
		a[i] = a[i] % press;
	}
	while (carry > 0){
		a[len] = carry % press;
		carry = carry / press;
		len = len + 1;
	}
}

//�ݹ麯��
void fn(int n){
	if (n == 1 || n == 0){
		ans[0] = 1;
		return ;
	}
	fn(n-1);
	mul(ans,n);
}


 void print(int a[])
{ 	
	len -= 1;//����ת��Ϊ�±� 
	for( ; len > 0; len--) {
			if(a[len] != 0) break;
	}
	printf("%d",a[len]);//�������λ 
	for(int i = len - 1;i >= 0;i--){ 
		printf("%0*d",p,a[i]);//���pλ ���㲹0 
	} 
}

int main(){
	int n;
	cin >> n;
	fn(n);
	print(ans);
	return 0;	
}
