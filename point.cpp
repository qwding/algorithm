#include <iostream>

using namespace std;

void exchange(int *x, int *y){
	printf("&x = %p\n",&x);
	printf("&y = %p\n",&y);
	printf("*x = %d\n",*x);
	printf("*y = %d\n",*y);
	printf("\n");
	printf("x = %p\n",x);
	int p = *x;						//之前写成*p = x，结果*p指向的就是x指向的2，并且这样结果就是x，y=3,说明*p = 地址 的时候就是指向这个地址里的值，就跟参数传递是一样的
	printf("p = %d\n",p);
	printf("&p = %p\n",&p);
	*x = *y;
	*y = p;
	printf("\n");
	printf("&x = %p\n",&x);
	printf("&y = %p\n",&y);
	printf("*x = %d\n",*x);
	printf("*y = %d\n",*y);
}

void mall(){
	void *p;
	p = malloc(sizeof(int)*10);

}
int main(){
	int a = 2;
	int b = 3;
	printf("&a = %p\n",&a);
	printf("&b = %p\n",&b);
	printf("\n");
	exchange(&a, &b);
	mall();
	return 0;

}