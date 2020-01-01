int continueKey() {

    /*
        what continue does is stops the code from running any further down and tells the code
        to go back to the start/top of the loop and start the next iteration
    */
    int num = 1;

    do{
        if (num == 6 || num == 8){
            num++;
            continue;
        }
        printf("%d is available \n", num);
        num++;
    } while(num<=10);

    return 0;
}
