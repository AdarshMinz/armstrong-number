#include <bits/stdc++.h>
using namespace std;
void printIntersection(int num1[], int num2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (num1[i] > num2[j])
			i++;
		else if (num2[j] > num1[i])
			j++;
		else /* if arr1[i] == arr2[j] */
		{
			cout << num2[j] << " ";
			i++;
			j++;
		}
	}
}
int main()
{
	int arr1[] = { 4,9,5 };
	int arr2[] = { 9,4,9,8,4 };

	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	printIntersection(arr1, arr2, m, n);

	return 0;
}
