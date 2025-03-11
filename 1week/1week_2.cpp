#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> v = { 1,2,3 };

void printV(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << '\n';
}

void makePermutation(int n,int r, int depth) {
	if (r == depth)
	{
		printV(v);
		return;
	}
	for (int i = depth; i < n; i++) {
		swap(v[i], v[depth]);
		makePermutation(n, r, depth + 1);
		swap(v[i], v[depth]);
	}
	//dsdsd
	return;
}


int main() {
	//int a[] = { 1,2,3 };
	//sort(v.begin(), v.end()); // 오름차순 정렬
	//do {
	//	/*for (int i = 0; i < 2; i++) {
	//		cout << v[i] << " ";
	//	}
	//	cout << '\n';*/

	//	for (int i : v) cout << i << " ";
	//	cout << '\n';
	//} while (next_permutation(v.begin(), v.end()));

	//
	//cout << '\n';


	makePermutation(3, 3, 0);

}