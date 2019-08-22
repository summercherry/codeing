#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

// a[]用于存储输入的字符串
char a[1001];

// b[x] 用来存储每一次全排列输出的各个字符在 a[] 当中的下标
// 其中 x 是全排列中的位置
int b[1001];

// 用来标记 a[x] 某个字母是否已经在前面的递归当中用到。
// 0 表示没有用过，1 表示已经用过了。
int c[1001];

// 初始字符串长度
int tot;

void permutation(int n)
{
	for(int i=0 ; i<tot ;i++) 
	// 遍历每一个 a[x] 的字母
	{
		if(c[i] == 0) {
			// 如果字母没有被用过。
			// 标记这个字母被占用了。
			c[i] = 1;
			// 记录第 n 个位置使用 a[i] 这个字母。
			b[n] = i;
			// 在前 n 个字母已经被确定的前提下，探索 n+1 位置。
			permutation(n+1);
			// 注意，从递归出来之后，需要清除 c[i] 字母的使用标记。
			// 因为 i 循环到下一个字母之后，现在的 c[i] 就是未被选择的字母了。
			c[i] = 0;
		}
	}
	if(n==tot)
	// 已经找到最后一个字母了，可以输出了。
	{
		for(int i=0;i<tot;i++)
			cout<<a[b[i]];
		cout<<endl; 
	}
}

int main()
{
	cin>>a;
	tot=strlen(a);
	permutation(0); 
	return 0;
}
