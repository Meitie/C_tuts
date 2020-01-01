/*

*/

int ifStatements()
{

    /*if (4 < 10) {
        printf("4<10 passed! \n");
    };

    if (4 > 10) {
        printf("4>10 passed! \n");
    };*/

    int age;

    printf("How old are you ? \n");
    scanf("%d", &age);

    if (age >= 18) {
        printf("\nYou are older then 18");
    }

    if (age <= 18) {
        printf("\nYou are younger than 18");
    }



    return 0;
}
