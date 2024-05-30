#include <stdio.h>

double calculateRevenue(double Quantity, double unitPrice);

int main(){
    double Quantity, unitPrice, Revenue;

    printf("The unit price: ");
    scanf("%lf", &unitPrice);
    printf("The quantity of a product: ");
    scanf("%lf", &Quantity);

    Revenue = calculateRevenue(Quantity, unitPrice);

    printf("The revenue from the sale is %.2lf \n", Revenue);

    return 0;
}

double calculateRevenue(double Quantity, double unitPrice){
    double discountRate = 0.0;
    if(Quantity >= 100 && Quantity <= 120){
        discountRate = 0.10;
    } else if(Quantity > 120){
        discountRate = 0.15;
    }
    double Revenue = unitPrice * Quantity * (1 - discountRate);
    return Revenue;
}