#include <stdio.h>
#include <string.h>

void main(){
    char a[20]="Hello";
	char b[20]="World";
	strcat(a,b);
	puts(a);
	strcpy(a,b);
	puts(a);
	printf("%d\n",strlen(b));
	if(0==strcmp(a,b))
		printf("Same");
	else if(strcmp(a,b)>0)
		printf("a is bigger");
	else
		printf("b is bigger");

}