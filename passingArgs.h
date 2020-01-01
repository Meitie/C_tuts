/*
Copy the code below into main:
 float euroPrice;

    printf("defualt exchange rate means: ");
    passingArgs(1);

    printf("how much money do you have?\n");
    scanf(" %f", &euroPrice);

    printf("%.2f\n", euroPrice);
    passingArgs(euroPrice);

    return 0;


*/

void passingArgs(float euroAmount) {

    float usd = euroAmount*1.37;
    printf("Your %.2f euro's are now %.2f usd\n", euroAmount, usd);

    return 0;
}
