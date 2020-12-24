#include<iostream>
using namespace std;
double exp(double x){
	double ans = 1, j = 1,y=x;
	for (int i = 1; i < 20; i++){
		j = j*i;
		ans += (1 / j)*y;
		y = y*x;
	}
	return ans;
}
double sinh(double x){
	return .5*(exp(x) - exp(-x));
}
int main(){
	double x;
	cin >> x;
	cout << sinh(x);
	return 0;
}
