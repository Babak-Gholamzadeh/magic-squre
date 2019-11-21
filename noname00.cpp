#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	int a[20][20], n, i, j, x=1;
	do
	{
		cout << "Enter an odd number:";
		cin >> n;
	}while (n%2 == 0);
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			a[i][j] = 0;
	i=0; j=n/2;
	while (i!=n-1 || j!=n/2)
	{
		a[i--][j++] = x++;
		if (i==-1 && j==n)
		{
			i = 1;
			j = n-1;
		}
		if (i<0)
			i = n-1;
		if (j>n-1)
			j=0;
		if ((a[i][j]!=0))
		{
			i += 2;
			j--;
		}
	}
	a[i][j] = x;
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	cout << "Count = " << (n/2) * (pow(n, 2)+1) + ((pow(n, 2)+1)/2);
	//(n/2)*(n^2+1)+((n^2+1)/2)
	return 0;
}
