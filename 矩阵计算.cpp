#include <stdio.h>
void setnum(int m, int n, int a[100][100])
{
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
}
void printnum(int m, int n, int a[100][100])
{
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
} 
void multi(int m, int k, int n, int A[100][100], int B[100][100], int C[100][100])
{
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			C[i][j] = 0;
			for (int p = 1; p <= k; p++) {
				C[i][j] += A[i][p] * B[p][j];
			}
		}
	}
}
int main()
{
	int m1, n1, m2, n2;
	printf("请输入第一个矩阵的大小:");
	scanf("%d%d", &m1, &n1);
	printf("输入第一个矩阵的元素:\n");
	int A[100][100];
	setnum(m1, n1, A);
	printf("输入第二个矩阵的大小:");
	scanf("%d%d", &m2, &n2);
	if (n1 == m2) {
		printf("输入第二个矩阵的元素:\n");
		int B[100][100];
		setnum(m2, n2, B);
		int C[100][100];
		multi(m1, n1, n2, A, B, C);
		printf("最终结果为:\n");
		printnum(m1, n2, C);
	}
	else printf("Error!\n");
	return 0;
}

