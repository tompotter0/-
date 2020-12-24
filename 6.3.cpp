#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int a[10], mx, mn;
int main(){
	for (int i = 0; i < 10; i++){
		cin >> a[i];
		if (a[i]>a[mx])mx = i;
		if (a[i]<a[mn])mn = i;
	}
	swap(a[0], a[mn]);
	swap(a[9], a[mx]);

	for (int i = 0; i < 10; i++)cout << a[i] << "\n";
	return 0;
}