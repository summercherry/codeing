#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
 
#define p 8//Ҫѹ��λ�� 
#define carry 100000000//��Ӧ��10��P�η� ���ڽ�λ 
//�������Ҫ�ı�ѹλ��λ��ֻҪ������Ϳ��� 
using namespace std;
 
const int Maxn=50001;
 
char s1[Maxn],s2[Maxn];
int a[Maxn],b[Maxn],ans[Maxn];
 
int change(char s[],int n[])//ѹλ�ĺ��Ĳ��� 
{
	char temp[Maxn];//�м���� ��¼ÿpλ���� 
	int len=strlen(s+1),cur=0;
	while(len/p){//���len���ڵ���p 
		strncpy(temp,s+len-p+1,p);//�Ӻ���س���pλ�� 
		n[++cur]=atoi(temp);//��temp������� 
		len-=p;//������pλ 
	}
	if(len){//������len��������p�ı��� Ҳ���ǻ�ʣ�µ㲻��pλ�� 
		memset(temp,0,sizeof(temp));
		strncpy(temp,s+1,len);//ȫ������ 
		n[++cur]=atoi(temp);//���� 
	}
	return cur;//����һ��λ�� 
}
//�������(��)�е������� ��������������� 
int add(int a[],int b[],int c[],int l1,int l2)
{
	int x=0,l3=max(l1,l2);
	for(int i=1;i<=l3;i++){
		c[i]=a[i]+b[i]+x;
		x=c[i]/carry;//��λ 
		c[i]%=carry;
	}
	while(x>0){c[++l3]=x%10;x/=10;}
	return l3;//���ش𰸵�λ�� 
}
 
void print(int a[],int len)
{ 
	printf("%d",a[len]);//�����λ 
	for(int i=len-1;i>=1;i--)printf("%0*d",p,a[i]);//���pλ ���㲹0 
	printf("\n");
}
 
int main()
{
//	freopen("t.in","r",stdin);
//	freopen("t.out","w",stdout);
	scanf("%s%s",s1+1,s2+1);//���������ַ��� 
 
	int la=change(s1,a);//��s1����ַ���ת��Ϊa����������� 
	int lb=change(s2,b);//ͬ�� 
	
	int len=add(a,b,ans,la,lb); 
	//���㳤��Ϊla��a����ͳ���Ϊlb��b�������Ѵ𰸸���ans���� ��˳������ans�ĳ���(�������) 
	print(ans,len);//������� 

}
