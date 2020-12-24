#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int a[10000], n, m;
int main(){
	cin >> n>>m;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)cout << a[(i+n-m)%n] << "\n";
	return 0;
}