#include<iostream>
using namespace std;
void f(long long x){
	if (x / 10){
		f(x / 10);
	}
	cout << char(x % 10 + '0');
}

int main(){
	long long a;
	cin >> a;
	f(a);
	return 0;
}
