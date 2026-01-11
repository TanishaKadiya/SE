#include<stdio.h>
void main()
{
	int product,costprice,sellingprice,total1,total2,loss,profit;
	printf("Enter number of products:");
	scanf("%d",&product);
	printf("Enter the cost price per product: ");
	scanf("%d",&costprice);
	printf("Enter the selling price per product: ");
	scanf("%d",&sellingprice);
	total1= costprice*product;
	total2= sellingprice*product;
	profit= total2-total1;
	loss= total1-total2;
	if(sellingprice>costprice)
	{
		printf("Profit during transaction is: %d",profit);
	}
	else
	{
			printf("Loss during transaction is: %d",loss);
	}
}
