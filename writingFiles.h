int writingFiles(){
    /*  We do this to create files for the users information based off on what they did during the app
        because at the moment when we close the app all the information is deleted, so we write to a file
        so that next time the user closes the app their information is saved and can be used in future.
        different ways:
        1. Sequential access file = order;
        2. Random access file = can store all over place;

        w = write / create file (if it doesnt exist)
        r = read
        a = append
        to the files
        */

    //use FILE as decleration that we are using a file
    FILE * fPointer;
    //w writes so it will create a new one, EVEN if it exists it will re-create it
    fPointer = fopen("bacon.txt", "w");//allows us to open a file and do something with it (create/write/read, etc)

    //first param = location, second = what we write
    fprintf(fPointer, "so is pork \n");//this prints it to the file;

    fclose(fPointer);//closes it, hands it back to computer

    return 0;
}
