#include <stdio.h>

void inplace_swap(int *x,int *y) {
	printf("开始:\n");
	printf("x=%d\t,y=%d\t\n",*x,*y);
	printf("过程:\n");
	*y = *x ^ *y;
	printf("x=%d\t,y=%d\t\n",*x,*y);
	*x = *x ^ *y;
	printf("x=%d\t,y=%d\t\n",*x,*y);
	*y = *x ^ *y;
	printf("x=%d\t,y=%d\t\n",*x,*y);
}
int main(){
	int x = 10;
	int y = 11;
	inplace_swap(&x,&y);
	printf("结果:\nx=%d\t,y=%d\t\n",x,y);
	return 0;
}

