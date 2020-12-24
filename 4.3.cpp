#include<iostream>
#include<cmath>
using namespace std;
bool isP(int x){
	for (int i = 2; i*i <= x; i++)if (x%i == 0)return 0;
	return 1;
}
int main(){
	int a;
	cin >> a;
	cout << (isP(a) ? "Yes." : "No.")<<endl;
	return 0;
}