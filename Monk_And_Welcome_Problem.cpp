#include <cstdio>


using namespace std;

int main()
{
	int N;
	scanf("%d", &N);

	int A[N];
	int B[N];
	int C[N];

	for(int i=0; i<N; i++)
	{
		scanf("%d", &A[i]);
	}
	for(int i=0; i<N; i++)
	{
		scanf("%d", &B[i]);
	}
	for(int i=0; i<N; i++)
	{
		printf("%d%c", A[i]+B[i], ' ');
	}
	return 0;
}
