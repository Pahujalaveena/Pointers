#include<iostream>
using namespace std;
int main()
{
	int n;
	printf("Enter the size of array");
	scanf("%d",&n);
	int *A=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		A[i]=i+1;
	}
	
	
	int *B=(int*)realloc(A,2*n*sizeof(int));
	printf("Prev block address = %d and new blck address is = %d",A,B);


//	int *B=(int*)realloc(A,(n/2)*sizeof(int));     half the size


//	int *A=(int*)realloc(A,0);                      equivalent to free(A) 


//	int *B=(int*)realloc(Null,n*sizeof(int));        equivalent to malloc       

	for(int i=0;i<n;i++)
	{
		printf("%d",A[i]);
	}
}