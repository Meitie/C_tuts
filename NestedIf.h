
int nestedIf()
{

    int age;
    char gender;

    //always have a space before the %d (coversion character) ekse it will bug out and skip over the content of the code
    printf("How old are you ? \n");
    scanf(" %d", &age);

    printf("What is your gender? (m/f) ? \n");
    scanf(" %c", &gender);


    if (age >= 18) {
        printf("\nyou may enter this website ");
        if (gender == 'm') {
            printf("dude");
        }
        if (gender == 'f') {
            printf("m'lady");
        }
    }

    if (age <= 18) {
        printf("\nNothing to see here");
    }

    return 0;
}

