int doWhile() {

    /*do {
        this is the code that actually runs
    } while (test)*/
    /*
    int car = 10;
    do {
        printf("Car: %d\n", car);
        car++;
    } while(car <= 20);
    */

    //little function to find out scores (until and averages of peoples grades ends when user type 0)
    float grade = 0;
    float scoreEntered = 0;
    float numberOfTests = 0;
    float average = 0;

    printf("What is your grade?\nPress E when complete. \n\n");

    do {
        //to get whole number no decimal put .0
        printf("Test: %.0f \t Average: %.2f \n\n", numberOfTests, average);
        printf("Enter your test score: ");
        scanf(" %f", &scoreEntered);
        grade += scoreEntered;
        numberOfTests++;
        average = grade / numberOfTests;
    } while (scoreEntered != 0);






    return 0;

}
