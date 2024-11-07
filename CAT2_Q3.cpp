//A program to calculate gross pay,taxes and netpay
//Author:Peter Paul Munyaka
//Reg NO:CT101/G/24684/24
//DATE:7/11/2024
#include <stdio.h>
#include<math.h>
int main() {
    float hoursworked, hourlywage, grosspay, taxes, netpay;

    printf("Enter number of hours worked in a week: ");
    scanf("%f", &hoursworked);
    printf("Enter hourly wage paid: ");
    scanf("%f", &hourlywage);

    if (hoursworked > 40) {
        grosspay = (40 * hourlywage) + ((hoursworked - 40) * hourlywage * 1.5);
    } else {
        grosspay = hoursworked * hourlywage;
    }

    if (grosspay <= 600) {
        taxes = grosspay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grosspay - 600) * 0.20);
    }

    netpay = grosspay - taxes;

    printf("Gross Pay: $%.2f\n", grosspay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netpay);
    return 0;
}