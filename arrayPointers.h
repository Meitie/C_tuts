int arrayPointers() {

    int i;
    int meatBalls[5] = {7,33,21,43,9};

    printf("Element \t MemAddress \t value\n");

    for(i=0; i<5; i++) {
        printf("meatBalls[%d] \t %p \t %d\n", i, &meatBalls[i], meatBalls[i]);
    }

    //for every array the basic name = pointer to first element in array
    printf("\nmeatBalls \t\t %p \n", meatBalls);

    //dereference the array name will give value of the first one
    printf("\n*meatBalls \t\t %d \n", *meatBalls);

    //this will look at the array and then go down 2 values into the array same as meatBalls[2]
    printf("\n*(meatBalls+2) \t\t %d \n", *(meatBalls+2));



    return 0;
}
