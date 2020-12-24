#include<iostream>
#include<cmath>
using namespace std;
long long fec(int x){
	int ans = 1;
	for(int i = 2; i <= x; i++)ans *= i;
	return ans;
}
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	cout << fec(a) + fec(b) + fec(c) << endl;
	return 0;
}