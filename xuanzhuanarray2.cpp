#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int n, a[10005];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i]; 
	}
	int l = 0;
	int r = n - 1;
	while (l < r){
	        int mid = (l + r) >> 1;
	        if (a[mid] > a[r]){
	            l =  mid + 1;
	        }
	        else r = mid;
	    }
	
	cout << a[l];
	return 0 ;
}
