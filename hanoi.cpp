#include<iostream>
using namespace std;
int k = 0,n;


void mov(int n,char a,char c,char b){
//��b����ΪЭ�����ɣ���a���ϵ�n��Բ���Ƶ�c���� 
	if (n == 0) return;      
	//�ݹ���ڣ����n=0�����˳�������������
	mov(n-1, a, b, c);        
	//��c����ΪЭ�����ɣ���a���ϵģ�n-1����Բ���Ƶ�b����
	k++;//��¼���� 
	cout <<k<<": "<<a <<"->"<<n<<"->"<<c<<endl; 
	//��ʱ��printf
	mov(n-1, b, c, a);        
	//��a����ΪЭ�����ɣ���b���ϵģ�n-1����Բ���Ƶ�c����
}

int  main() {
	int n;
	char a, b, c;
	cin >> n >> a >> b >> c; 
	mov(n, a, b, c);
	return 0;
}


