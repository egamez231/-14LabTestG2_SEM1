#include <stdio.h>

float input_package (int,int, float *);
float calculate_discount(float, float *);
void print_total(float,float);

int main()
{
    int packNum,quan;
    float price,disc;


    printf("Package Code \t\tPackage Name\t\tPrice(RM)\n");
    printf("1223 \t\t\tTurkey\t\t4800\n");
    printf("2556\t\t\tPakistan\t2300\n");
    printf("3223 \t\t\tChina\t\t1500\n");
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
    case 1223:
        *price = (4800.00 * quan);
        break;
    case 22556:
        *price = (2300.00 * quan);
        break;
    case 3223:
        *price = (1500.00 * quan);
    }
}

float calculate_discount(float price,float *disc)
{
    if (price > 3000)
    {
        *disc = price * 0.1;
    }
}

void print_total(float disc,float price)
{
    float total;
    printf ("Price :RM %.2f\n",price);
    printf("Discount: RM %.2f\n",disc);

    total = price - disc;
    printf("Discount: RM %.2f\n",total);
}
