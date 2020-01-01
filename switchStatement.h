int switchStatement() {

    char grade;
    printf("What grade did you earn?");
    scanf(" %s", &grade);

    switch(grade) {
    case 'A':
        printf("You earned an A\n");
        break;
    case 'B':
        printf("You earned a B\n");
        break;
    case 'C':
        printf("You earned a C\n");
        break;
    case 'D':
        printf("You earned a D\n");
        break;
    case 'E':
        printf("You earned a E\n");
        break;
    default: printf("What does this even mean?\n");
    }
    return 0;
}
