int intFloatArrays(){

    /*
     this will show the difference between an int and float array (and mention char arrays also)
     int and float arrays are different to char arrays because they dont have the null character at the end,
     will make a difference when you try get the sizeof the array


    */

    int i;
    //int meatballs[4] = {5, 3, 9, 22}; // called initializing the array
    int meatballs[5];
    int totalBalls = 0;

    for(i=0; i<5; i++) {
        printf("How many meatballs did you eat on day %d \n", i+1);
        scanf(" %d", &meatballs[i]);
    }

    for(i=0; i<5; i++) {
        totalBalls += meatballs[i];
    }

    int avg = totalBalls / 5;
    printf("You ate %d meatballs total, thats an average of %d per day\n", totalBalls, avg);


    return 0;
}
