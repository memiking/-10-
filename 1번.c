#include <stdio.h>//���� 1

#define N 5 // �迭�� ũ�� sizeA = sizeB = N�� �Ķ���ͷ� �޴´�

void plus(int A[N], int B[N]);
void multi(int A[N], int B[N]);

int main()
{
	int A[N] = { 1, 2, 3, 4, 5 };
	int B[N] = { 5, 4, 3, 2, 1 };
	// �� �迭�� �Ķ���ͷ� �޴´�
	plus(A, B);
	multi(A, B);

	return 0;
}

void plus(int A[N], int B[N])
{
	int C[N] = { 0 }; // A + B�� ����� �޾��� �迭�� �����
	for (int i = 0; i < N; ++i)
	{
		C[i] = A[i] + B[i];
		// A + B ����
	}

	printf("A + B = {");
	for (int i = 0; i < N - 1; ++i)
	{
		printf("%d, ", C[i]);
	}
	printf("%d}\n", C[N - 1]);
	// ��� ���
}

void multi(int A[N], int B[N])
{
	int result = 0; // A * B�� ����� �޾��� �迭�� �����
	for (int i = 0; i < N; ++i)
	{
		result += A[i] * B[i];
		// A * B ����
	}

	printf("A * B = {");
	for (int i = 0; i < N - 1; ++i)
	{
		printf("%d*%d + ", A[i], B[i]);
	}
	printf("%d*%d} = %d\n", A[N - 1], B[N - 1], result);
	// ��� ���
}
