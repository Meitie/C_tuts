/*
typecasting is a temporary way that you can chage the
datatype of a variable so like a float to int and back
*/

int typecasting()
{

    float avgProfit;
    int priceOfPumpkin = 10;
    int sales = 59;
    int daysWorked = 7;

    /*
    as int and float dont work well together so you need to convert them temporary
    add it with a () before the int and add the datatype you want so below we need the int
    to become floats so we do (float) and it becomes a temporary float.

    */

    avgProfit = ((float)priceOfPumpkin * (float)sales) / (float)daysWorked;
    printf("Average daily profit $%.2f", avgProfit);





    return 0;
}
