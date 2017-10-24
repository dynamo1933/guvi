#include <stdio.h>

int main(void) {
	int a;
	// your code goes here
	scanf("%d",&a);
char	* arr[]={"even","odd"};
if (a<0)
 a=a*(-1);
	  printf("%s",arr[a%2]);
	return 0;
}
