#include <stdio.h>

void print_array(int[],int);

void replace_swap(int *x,int *y){
        *y = *x ^ *y;
        *x = *x ^ *y;
        *y = *x ^ *y;
}

void reverse_array(int a[],int cnt) {
	int pre,suf;
	for(pre = 0,suf = cnt-1;pre < suf;++pre ,--suf) replace_swap(&a[pre],&a[suf]);
}

void print_array(int a[],int cnt){
	for(int i = 0;i < cnt;i++){
                if(i==0) printf("{%d,\t",a[i]);
                else if(i!=cnt-1)printf("%d,\t",a[i]);
		else printf("%d\t}\n",a[i]);
        }

}
int main(){
	int a[] = {1,2,3,4,5,6,7,8,9};
	int cnt = 9;
	printf("翻转之前:\n");
	print_array(a,cnt);
	reverse_array(a,cnt);
	printf("翻转之后:\n");
	print_array(a,cnt);
	return 0;
}
