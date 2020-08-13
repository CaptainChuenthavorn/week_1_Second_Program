#include<stdio.h>
int main()
{
	int i, j, k, n;
	printf("Enter number : ");
	scanf_s("%d", &n);
	for (i = 0;i < 2 * n;i++) {
		for (j = 0;j < n - i;j++)
		{
			printf(" ");
		}
		for (k = 0;k < i;k++);
		{
			printf("* ");
		}
		printf("\n");
	}
	for (i = 0;i < (n-1);i++) {
		for (j = 0;j < i;j++)
		{
			printf(" ");
		}
		for (k = 0;k < (n - i) ; k++)
		{
			printf("* ");
		}
		printf("\n");
}
	return 0;
}
