#include <iostream>
using namespace std;

int fact(int i){
	if(i == 0 || i == 1 ) {
		return 1;
	} else {
		return i * fact(i - 1);
	}
}

int main(){
	int n;
	cin >> n;
	cout << "The value of factorial " << n 
	<< " is "<<fact(n) <<endl;
	return 0;
}
