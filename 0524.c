#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if 0
int check_sys(){
	int i = 1;
	return (*(char *)&i);
}
int main(){
	int ret = check_sys();
	if (ret == 1){
		printf("小端\n");
	}
	else {
		printf("大端\n");
	}
	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;//unsigned 类型 系统不会将第一个二进制位看成符号位  
	printf("a=%d,b=%d,c=%d", a, b, c);//所有-1就是直接将-1的二进制1111 1111转成十进制输出
	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	char a = -128;
	printf("%u\n", a);
	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	int i=-20;
	unsigned int j=10;//任何数和unsigned进行运算，都会转成unsigned类型
	printf("%d\n",i+j);
	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	unsigned int i;//死循环   因为unsigned是非负的
	for (i=9;i>=0;++i)
	{
		printf("%u\n",i);
	}
	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	char a[1000];
	int i;//死循环 因为char类型的范围是-128--+127，永远达不到1000
	for (i = 0; i < 1000; ++i){
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	system("pause");
	return 0;
}
#endif

#if 0
unsigned char i = 0;
int main(){
	for (i = 0; i <= 25; ++i){
		printf("hellow world\n");
	}
	system("pause");
	return 0;
}
#endif

#if 1
int main(){
	int n=9;
	float *pFloat=(float *)&n;
	printf("n的值为：%d\n",n);
	printf("*pFloat的值为：%d\n",*pFloat);

	*pFloat=9.0;
	printf("num的值为：%d\n",n);
	printf("*pFloat的值为：%d\n",*pFloat);
	system("pause");
	return 0;
}
#endif
