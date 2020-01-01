int breakKey() {

    /*
        break keyword allows you to end your loop early
        Example: if it loops through 1 -> 100 to guess a number and it guesses correctly
        no need to run the rest so it ends
    */

    int num;
    int howMany;
    int maxAmount = 10;

    printf("How many times do you want this loop to loop? (up to 10): ");
    scanf(" %d", &howMany);
    for (num=1; num <= maxAmount; num++){
        printf("Number: %d\n", num);
        //this checks to see if the number we have, is equal to the number use input
        if (num == howMany){
            break;
        }
    }


    return 0;
}
