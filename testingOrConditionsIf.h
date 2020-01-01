testingOrConditions() {

    char answer;

    printf("Do you like bagels? (y/n) \n");
    scanf(" %c", &answer);

    if (answer == 'y' || answer =='n') {
        printf("Good job, you didn't mess anything up");
    }else {
        printf("Please answer either choose either: (y/n)");
    }


    return 0;
}
