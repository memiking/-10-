#include <stdio.h>//문제 1

#define N 5 // 배열의 크기 sizeA = sizeB = N을 파라미터로 받는다

void plus(int A[N], int B[N]);
void multi(int A[N], int B[N]);

int main()
{
	int A[N] = { 1, 2, 3, 4, 5 };
	int B[N] = { 5, 4, 3, 2, 1 };
	// 두 배열을 파라미터로 받는다
	plus(A, B);
	multi(A, B);

	return 0;
}

void plus(int A[N], int B[N])
{
	int C[N] = { 0 }; // A + B의 결과를 받아줄 배열을 만든다
	for (int i = 0; i < N; ++i)
	{
		C[i] = A[i] + B[i];
		// A + B 수행
	}

	printf("A + B = {");
	for (int i = 0; i < N - 1; ++i)
	{
		printf("%d, ", C[i]);
	}
	printf("%d}\n", C[N - 1]);
	// 결과 출력
}

void multi(int A[N], int B[N])
{
	int result = 0; // A * B의 결과를 받아줄 배열을 만든다
	for (int i = 0; i < N; ++i)
	{
		result += A[i] * B[i];
		// A * B 수행
	}

	printf("A * B = {");
	for (int i = 0; i < N - 1; ++i)
	{
		printf("%d*%d + ", A[i], B[i]);
	}
	printf("%d*%d} = %d\n", A[N - 1], B[N - 1], result);
	// 결과 출력
}
