
#include<stdio.h>

void swap(int* a, int* b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}
void permute(int TotalN, int N, char str2)
{
	int i;
	if (N == 1)
	{
		for (i = 0; i < TotalN; i++)
		{
			printf("%d", str2[i]);
		}
		printf("\n");
		return 0;
	}
	for (i = 0; i < N; i++)
	{
		swap(i,N-1);
		Permutation(TotalN, N - 1);
		swap(i,N-1);

	}
}

int main(int argc, int* argv[])
{
	FILE* fp1, * fp2;
	int size;
	char str[64];
	char str2[4]; // 입력파일의 요소들이 들어갈 배열

	if ((fp1 = fopen(argv[1], "r")) == NULL) { //fail to open file for read

		printf("fale to open file.");

		return 0;
	}

	if ((fp2 = fopen(argv[2], "wt")) == NULL) { //fail to open file for write

		printf("fail to create file for write.");

		return 0;
	}

	fgets(str, sizeof(str), fp1);


	int nNumber = atoi(str);

	for (int i = 0; i < nNumber; i++)
	{
		fgets(str, sizeof(str), fp1);
		str2[i] = str[0];
	}//str2={a,b,c,d}

	int N = sizeof(str2) / sizeof(int);
	Permutatio(N, N);
	
	
}