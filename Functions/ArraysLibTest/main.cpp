#include<Functions.h>

#pragma comment(lib, "Arrays.lib")

void main()
{
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
}