#include <stdio.h>

float input_package (int,int, float *);
float calculate_discount(float, float *);
void print_total(float,float);

int main()
{
    int packNum,quan;
    float price,disc;
    printf("Enter Package: ");
    scanf ("%d", &packNum);
    printf("Enter Quantity: ");
    scanf ("%d", &quan);

    input_package(packNum,quan,&price);
    calculate_discount(price,&disc);

    print_total(disc,price);



}

float input_package(int pack,int quan, float *price)
{
    switch (pack)
    {
    case 1:
        *price = (10.00 * quan);
        break;
    case 2:
        *price = (12.00 * quan);
        break;
    case 3:
        *price = (20.00 * quan);
    }
}

float calculate_discount(float price,float *disc)
{
    if (price > 50)
    {
        *disc = price * 0.1;
    }
}

void print_total(float disc,float price)
{
    float total;
    printf ("Price : %.2f\n",price);
    printf("Discount: RM %.2f\n",disc);

    total = price - disc;
    printf("Discount: RM %.2f\n",total);
}
