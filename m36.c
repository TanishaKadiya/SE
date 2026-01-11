#include<stdio.h>
void main()
{
	char name[5];
	int customer_id,units;
	float charge_per_unit, amount,surcharge, total_amount;
	printf("Enter Customer Id: ");
	scanf("%d",&customer_id);
	printf("Enter name of Customer: ");
	scanf("%s",&name);
	printf("Enter units consumed: ");
	scanf("%d",&units);
	if(units<=350)
    {
        charge_per_unit=1.20;
    }
    else if (units>350 && units<600)
    {
        charge_per_unit = 1.50;
    }
    else if (units>=600 && units<800)
    {
        charge_per_unit = 1.80;
    }
    else
    {
        charge_per_unit = 2.00;
    }
    amount = units * charge_per_unit;
    if (amount > 800)
    {
        surcharge = amount * 0.18;
    }
    total_amount = amount + surcharge;
    if (total_amount < 256)
    {
        total_amount = 256;
    }
    printf("\n------ ELECTRICITY BILL ------\n");
    printf("Customer ID      : %d\n", customer_id);
    printf("Customer Name    : %s\n", name);
    printf("Units Consumed   : %.2f\n", units);
    printf("Charge per Unit  : %.2f\n", charge_per_unit);
    printf("Base Amount      : %.2f\n", amount);
    printf("Surcharge (18%%) : %.2f\n", surcharge);
    printf("Total Amount Due : %.2f\n", total_amount);
    return 0;
}

