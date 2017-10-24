#include <stdio.h>

int main(void) {
	int a;
	// your code goes here
	scanf("%d",&a);
char	* arr[]={"even","odd"};
	  printf("%s",arr[a%2]);
	return 0;
}
