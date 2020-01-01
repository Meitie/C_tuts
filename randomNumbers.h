int randomNumbers(){

    /* rand() generates a number randomly between 1 and 32767 (byte storage limit on computer or so)

    in example dice roll betlow we used %(modulus) 6 to limit it down from 0-5 so devided and leaving the remainder,
    and then added 1 to push up till 1-6;
    */


    int i;
    int diceRoll;

    for(i=0; i<20; i++){
        diceRoll = ( rand()%6 ) +1 ;
        printf("%d\n", diceRoll);
    }



    return 0;
}
