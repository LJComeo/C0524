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
		printf("С��\n");
	}
	else {
		printf("���\n");
	}
	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;//unsigned ���� ϵͳ���Ὣ��һ��������λ���ɷ���λ  
	printf("a=%d,b=%d,c=%d", a, b, c);//����-1����ֱ�ӽ�-1�Ķ�����1111 1111ת��ʮ�������
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
	unsigned int j=10;//�κ�����unsigned�������㣬����ת��unsigned����
	printf("%d\n",i+j);
	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	unsigned int i;//��ѭ��   ��Ϊunsigned�ǷǸ���
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
	int i;//��ѭ�� ��Ϊchar���͵ķ�Χ��-128--+127����Զ�ﲻ��1000
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
	printf("n��ֵΪ��%d\n",n);
	printf("*pFloat��ֵΪ��%d\n",*pFloat);

	*pFloat=9.0;
	printf("num��ֵΪ��%d\n",n);
	printf("*pFloat��ֵΪ��%d\n",*pFloat);
	system("pause");
	return 0;
}
#endif
