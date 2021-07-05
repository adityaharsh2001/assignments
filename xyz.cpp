#include <stdio.h>
#include <stdlib.h>

void leftRotate(int *arr[], int d, int n)
{
	int i;
	for (i = 0; i < d; i++) {
	   int temp = *arr[0], i;
	for (i = 0; i < n - 1; i++)
		*arr[i] = *arr[i + 1];
	*arr[n-1] = temp;
	}
}
void rightRotate(int *arr[],int d, int n)
{
    for (int i=0; i<d;i++) {
      int x = *arr[n-1];
    for (i = n-1; i > 0; i--)
      *arr[i] = *arr[i-1];
        *arr[0] = x;
    }
}
void printArray(int *arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d", &arr[i]);
}
int main()
{
    int number;
    printf("How many elements do you want to insert [1-100]\n");
    scanf("%d", &number);
    int *arr = (int *)malloc(number*sizeof(int));
    
    for (int i=0; i < number;i++)
    {
        printf("Pl. input the value of element %d", (i+1));
        scanf("%d",&arr[i]);
    }
    char c;
    printf("Enter your choice\n");
    getchar();
    printf("Enter 'l' to shift the elements to the left\n Enter 'r' to shift the elements to the right\n");
    
    scanf ("%c", &c);
    
    printf("Please enter the number of elements to be shifted\n");
    int n;
    scanf("%d", &n);
    if (c == 'l')
	    leftRotate(&arr,n,number);
	else if (c == 'r')
	    rightRotate(&arr,n,number);
	else
	    printf("Wrong value entered");
	printArray(&arr, number);
	return 0;
}