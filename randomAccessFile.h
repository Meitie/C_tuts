int randomAccessFile() {

    /*
    With random access files we are able to jump around and access parts in the middle of the file
    to change one wording or sentence, where as other appended to end or so
    ---- more opetaions we can do
    w+ = open file writing first then read after
    */

    FILE *fPointer;
    fPointer = fopen("bacon.txt", "w+"); //a to append
    fputs("the year is 2019", fPointer);

    //this looks for cursour and then move it where you want to edit
    //fseeks(pointer, howmany spaces into, where you start)
    fseek(fPointer, 14, SEEK_SET);//start at begining, and move 14 number of spaces
    fputs("20",fPointer);


    fseek(fPointer, -2, SEEK_END); // this looks from the start
    //seek end will try to move forward 14, but it cant so to go back you need to do negative
    fputs("21",fPointer);

    fclose(fPointer);
    return 0;
}
