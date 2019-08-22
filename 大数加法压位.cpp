#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
 
#define p 8//Ҫѹ��λ�� 
#define press 100000000//��Ӧ��10��P�η� ���ڽ�λ 
//�������Ҫ�ı�ѹλ��λ��ֻҪ������Ϳ��� 

using namespace std;

const int Maxn=50001;

int change(char s[],int n[])//ѹλ�ĺ��Ĳ��� 
{	
	//�ں����ⶨ�����飬ͨ���βδ��뺯�����ں������޸�����  
	char temp[Maxn];//�м���� ��¼ÿpλ���� 
	int len = strlen(s);
	int cur = 0;//��¼λ�� 
	for ( ;len >= p; ){//���len���ڵ���p 
		strncpy(temp, s + len - p, p);//�Ӻ���س���pλ�� 
		n[cur] = atoi(temp);//��tempת�������� 
		cur += 1;
		len -= p;//������pλ 
	}
	if(len){//������len��������p�ı��� Ҳ���ǻ�ʣ�µ�λ������pλ
		memset(temp, 0, sizeof(temp));
		//memset() ����������ָ���ڴ��ǰn���ֽ�����Ϊ�ض���ֵ
		//����Ϊ��temp�������ֽ���Ϊ0 
		strncpy(temp, s, len);//ȫ������ 
		n[cur] = atoi(temp);//���� 
		cur += 1;
	}
	return cur;//����һ��λ�� 
}

//�ӷ����㣬���㰴������������� 
int add(int a[],int b[],int c[],int l1,int l2)
{
	int carry = 0;
	int n = max(l1,l2);
	for(int i = 0;i < n;i++){
		c[i] = a[i] + b[i] + carry;
		carry = c[i]/press;//��λ 
		c[i] %= press;
	}
	
	while(carry > 0){
		c[n]= carry % press;
		carry /= press;
		n += 1;
	}
	return n;//���ش𰸵�λ�� 
}
 
void print(int a[],int len)
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
 
int main()
{
	char str1[Maxn],str2[Maxn];
	int a[Maxn],b[Maxn],ans[Maxn];
	cin >> str1 >> str2;//���������ַ��� 
 
	int la = change(str1, a);//��s1����ַ���ת��Ϊa����������� 
	int lb = change(str2, b);//ͬ�� 
	int len = add(a,b,ans,la,lb); 
	//���㳤��Ϊla��a����ͳ���Ϊlb��b����,
	//���Ѵ𰸸���ans���� ��˳������ans�ĳ���(�������) 
	print(ans,len);//������� 
}
