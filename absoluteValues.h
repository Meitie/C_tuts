int absoluteValue() {

    /*
    to work out the absoulte value incase a users messes up and it goes into a negative number
    */

    int year1;
    int year2;
    int age;

    printf("Enter a year\n");
    scanf(" %d", &year1);

    printf("Enter another year\n");
    scanf(" %d", &year2);

    age = year1 - year2;
    printf("%d\n", age);
    //if it is a negative number it will convert it over to positive number
    age = abs(age);
    printf("%d", age);
    return 0;
}
