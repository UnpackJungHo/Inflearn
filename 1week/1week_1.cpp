#include<iostream>
using namespace std;

int fact(int n) {
	if (n == 0 || n == 1) return 1;
	return n * fact(n - 1);
}

int fibo(int n) {
	if (n == 0 || n == 1) return n;	
	return fibo(n - 1) + fibo(n - 2);
}

int n = 5;
int x = 10;

int main1() {
	cout << fact(5);
	return 0;
}