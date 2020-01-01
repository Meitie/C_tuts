int roundingNumbers() {

    float bacon1 = 9.65435;
    float bacon2 = 3.3;

    //floor always rounds down so it will take even .5+ and round it down
    printf("bacon1 is %.2f \n", floor(bacon1));
    printf("bacon2 is %.2f \n", floor(bacon2));

    //ceil will always round up, even taking anything less then .5 and round up
    printf("bacon1 is %.2f \n", ceil(bacon1));
    printf("bacon2 is %.2f \n", ceil(bacon2));


    return 0;
}
