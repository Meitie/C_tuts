int incrementalOperator(){
/*
    int tuna = 20;
    printf("%d \n", tuna);

    //increment 1
    tuna++;
    printf("%d \n", tuna);

    //decrease 1
    tuna--;
    printf("%d \n", tuna);
*/

    int a = 5, b = 10, answer = 0;
    //when you do on left, it changes the value BEFORE equation
    answer = ++a * b;
    printf("Answer: %d \n", answer);

    a = 5, b = 10, answer = 0;
    answer = a++ * b;
    //changes the value AFTER we make the change
    printf("Answer: %d \n", answer);


    return 0;


}
