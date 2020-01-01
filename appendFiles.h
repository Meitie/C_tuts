int appendFiles() {

    FILE *fPointer;
    fPointer = fopen("bacon.txt", "a"); //a to append

    //prints to file,
    fprintf(fPointer, "\n-Bucky Robers");

    fclose(fPointer);
    return 0;
}
