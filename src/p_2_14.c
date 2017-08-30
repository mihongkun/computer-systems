#include <stdio.h>

int main(){
	int x = 0x66,y=0x39;
	printf("x & y = %x,\tx && y = %x\n",x & y, x && y);
	printf("x | y = %x,\tx || y = %x\n",x | y, x || y);
	printf("~x | ~y = %x,\t~x || ~y = %x\n",~x | ~y, ~x || ~y);
	printf("~x & ~y = %x,\t~x && ~y = %x\n",~x & ~y, ~x && ~y);
	return 0;
}
