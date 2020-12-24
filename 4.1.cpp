#include<iostream>
using namespace std;

int gcd(int a, int b){
	return b ? gcd(b, a%b) : a;
}

int main(){
	int x, y;
	cin >> x >> y;
	if (x < y){	x ^= y; y ^= x; x ^= y;}
	cout << gcd(x, y) << "\t" << (x*y / gcd(x, y)) << endl;
	return 0;
}