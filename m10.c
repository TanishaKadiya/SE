#include<stdio.h>
main()
{
	int l,h,w;
	printf("Enter the length of the prism : ");
	scanf("%d",&l);
	printf("Enter the height of the prism : ");
	scanf("%d",&h);
	printf("Enter the width of the prism : ");
	scanf("%d",&w);
	printf("Area of the rectangular prism is :%d",2*(w*l+h*l+h+w));
}
