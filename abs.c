#include <stdio.h>

  int aabs(i)
  int i;
  {
    return (i < 0) ? -i : i;
  }


int main(){
	printf("%d\n",aabs(-23));
	return 0;
}
