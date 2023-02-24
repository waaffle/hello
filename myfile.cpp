

#include <iostream>
#include <vector>

using namespace std;

void test(vector <int> &v,int l, int r)
{
	int i = l, j = r;
	int m = ((i + j) / 2);
	while (i + 1 < j)
	{
		test(v, i, m);
		test(v, m, j);
	}
	v[i] = l;
	v[j] = r;
	return;
}


int main() {
	int n;
	cin >> n;
	vector <int> v(n);
	test(v, 0, n);
	return 0;
}


