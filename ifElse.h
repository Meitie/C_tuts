int ifElse() {

    //if you need a test with something that runs by default if the test fails you do this
    /*
    if (test){
        results if true
    } else {
        results if false
    }
    */

    int age;
    char gender;

    //always have a space before the %d (coversion character) ekse it will bug out and skip over the content of the code
    printf("How old are you ? \n");
    scanf(" %d", &age);

    printf("What is your gender? (m/f) ? \n");
    scanf(" %c", &gender);


    if (age >= 18) {
        printf("\nyou may enter this website " , &access);
        if (gender == 'm') {
            printf("dude");
        }
        else {
            printf("m'lady");
        }
    }

    else {
        printf("Nothing to see here!");
    }



    return 0;
}
