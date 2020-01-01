int valueToManyVar()
{
/*
    int a;
    int b;
    int c;

    //old fashioned way
    a = 100
    b = 100
    c = 100

    //reads right to left and pass left so c = 100 and b = c = 100 etc
    a = b = c = 100;
    printf("%d %d %d \n", a , b , c);
*/

    float age1, age2, age3, average;
    age1 = age2 = 4.0;

    printf("Enter your age \n");
    scanf("%f", &age3);

    average = (age1 + age2+ age3) / 3;

    printf("\n The average age of the group is %f", average);





    return 0;
}
