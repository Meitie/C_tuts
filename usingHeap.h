int usingHeap() {

    //user can add numbers and average them, this time the user can add howmany numbers they want;
    int i, howMany; //counter & howmany they want
    int total = 0; // sum of everything
    float average = 0.0; //average number
    int *pointsArray;

   printf("How many numbers do you want to average? \n");
    scanf(" %d", &howMany);

    pointsArray = (int *) malloc(howMany * sizeof(int)); //typecast and allocate the size of int;
    //pointsArray is now a nomral array like pointsArray[0] or [1] etc;

    printf("Enter the numbers \n");

    for(i=0; i<howMany; i++){
        scanf(" %d", &pointsArray[i]);//enter a number and store it into the array;
        total += pointsArray[i]; //add them all the the total
    }

    average = (float)total / (float)howMany; //typecast to save them;
    printf("Average is %.2f", average);

    free(pointsArray);

    return 0;
}
