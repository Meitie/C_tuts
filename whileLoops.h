int whileLoop() {

    /*while(test){
    code to be executed;
    }*/
    /*
    int tuna = 1;
    while (tuna < 5 ){
        printf("I have %d fish%s \n", tuna, (tuna!=1) ? "ies" : "");
        tuna++;
    }*/

    //doubliung a penny every day for a month
    int day = 1;
    float penny = 0.01;

    while (day <= 31) {
        printf("Day: %d \t Amount: $%0.2f \n", day, penny);
        penny *= 2;
        day++;
    }


    return 0;
}
