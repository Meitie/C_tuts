int readFiles(){

    FILE *fPointer;
    fPointer = fopen("bacon.txt", "r");//now we are going to read it
    /* C console cannot read whats inside of the file, so to be able to do so we need to store it
    in something that it can, i.e a char array so Store it in an array */
    char singleLine[150];

    // !(not)File end of File it will progress until the end, keep looping until the end of file
    while(!feof(fPointer)) {
        fgets(singleLine, 150, fPointer);//fgets gets 1 line, from the file so instead of stdin(keyboard) it gets from file
        puts(singleLine);
        /*
        puts auto puts on a new line, and in the text file the computer sees \n in the end
        so now we have two \n and there is an extra space between them
        */
    }


    fclose(fPointer);//always close it out

    return 0;
}
