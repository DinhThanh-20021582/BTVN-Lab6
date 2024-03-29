#include <iostream>
using namespace std;

void xuatmang(int a[], int n)
{
	for (int i = 1; i <= n; i++ )
	cout << a[i] << " ";
	cout << endl;
}

void doiVT(int a[], int s1, int s2)
{
	int temp = a[s1];
	a[s1] = a[s2];
	a[s2] = temp;
}

void hoanvi(int a[], int first, int last, int n)
{
	if (first == last){
		xuatmang(a, n);
		return;
	}
	
	for (int i = first; i <= last; i++){
		doiVT(a, first, i);
		hoanvi(a, first + 1, last, n);
		doiVT(a, first, i);
	}
}

int main()
{
	int n;
	cin >> n;
	int a[n+1];
	for (int i = 1; i <= n; i++){
		a[i] = i;
	}
	hoanvi(a, 1, n, n);
	return 0;
}
