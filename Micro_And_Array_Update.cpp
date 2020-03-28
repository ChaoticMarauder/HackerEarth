#include <cstdio>
using namespace std;

int main()
{
	int t;
	int n,k;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		
		scanf("%d %d", &n, &k);
		int arr[n];
		int	min=k;
		for(int j=0; j<n; j++)
		{
			
			scanf("%d", &arr[i]);
			if(arr[i]<min)
			{
				min=arr[i];
			}   
		}
        printf("%d", k-min);
		printf("\n");
	}
	return 0;
}
