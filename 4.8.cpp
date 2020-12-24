#include<iostream>
using namespace std;
double x;
double p(int n){
	if (n == 0)return 1;
	if (n == 1)return x;
	return ((2 * n - 1)*x - p(n - 1) - (n - 1)*p(n - 2)) / n;
}

int main(){
	int n;
	cin >> n >> x;
	cout << p(n);
	return 0;
}