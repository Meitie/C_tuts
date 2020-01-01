int forLoop() {

    /* for loop is good if you know exactly howmany times we want to loop
    int var; - creating the variable before hand
    for (setting var num; howmany times you want to run var; incrementing var) {
        code that runs
    }
    */

    /*int bacon;

    for(bacon = 0; bacon <= 100; bacon+=8 ){
        printf("Bacon: %d\n", bacon);
    }
    */

    //MAKING A TABLE USING FOR LOOPS
    int columns;
    int rows;

    //creates the rows
    for(rows=1; rows<=6; rows++) {

        //creates the colums
        for(columns=1; columns<=3; columns++){
            printf(" %d", columns);
        }

        //puts the rows into a new line
        printf("\n");
    };
























    return 0;
}
