int testingConditions() {

    int hoursStudied = 80; //10 or more
    int kidsBeatUp = 12; //0 kids beat up

    //&& means that they both have to be true and you can have as many as you want
    if((hoursStudied >= 10 ) && (kidsBeatUp == 0)) {
        printf("you are a good student");
    } else {
        printf("you are a bad student");
    }

 return 0;
}
