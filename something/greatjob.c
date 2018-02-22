#include <iostream>
using namespace std;

int main()
{
	int n, k = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (i == ((k*(k + 1)/2)))
			k++;
		cout << k << " ";
	}
	return 0;
}
