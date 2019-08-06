//#include<cstdio>
//#include<iostream>
//using namespace std;
//
//int main(){
//	int s[100005], sum[100005], i;
//	int n, m, l, r;
//	cin >> n;
//	cin >> m;
//	cin >> s[0];
//	sum[0] = s[0];
//	for (i = 1; i < n; i++){
//		cin >> s[i];
//		sum[i] = sum[i-1] + s[i];
//	}
//	for (i = 0; i < m; i++){
//		cin >> l;
//		cin >> r;
//		if (l == 1){
//			cout << sum[r-1];
//		}
//		else {
//			cout << sum[r-1]- sum[l-2];//隐含的数组下标越界问题
//		}
//		cout << endl;	
//	}
//	return 0; 
//}

#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int s[100005], i;
	int n, m, l, r;
	cin >> n;
	cin >> m;
	cin >> s[0];
	for (i = 1; i < n; i++){
		cin >> s[i];
		s[i] += s[i-1];
	}
	for (i = 0; i < m; i++){
		cin >> l;
		cin >> r;
		if (l == 1){
			cout << s[r-1];
		}
		else {
			cout << s[r-1]- s[l-2];//隐含的数组下标越界问题
		}
		cout << endl;	
	}
	return 0; 
}


