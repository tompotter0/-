#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int a, n, m;
int main(){
	cin >> n;
	for (int i = 1; i <= n; i++){
		a = (a + 2) % i+1;
	}
	cout << a;
	return 0;
}