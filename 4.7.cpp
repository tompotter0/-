#include<iostream>
using namespace std;
bool prime(int x){
	for (int i = 2; i*i <= x; i++){
		if (x%i == 0)return 0;
	}
	return 1;
}

bool gotbaha(int a, int b){
	return (prime(a) && prime(b));
}

int main(){
	int n;
	cin >> n;
	for (int i = 2; i <= n - 2; i++){
		if (gotbaha(i, n - i)){
			cout << n << '=' << i << '+' << n - i;
			break;
		}
	}
	return 0;
}
