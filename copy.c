#include <stdio.h>
char *copys(s)
char *s;
{
	return s;
}
int main(){
	printf("%s\n",copys("hello world."));
	return 0;
}
