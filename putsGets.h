int putGets(){

    //put = show strings things to the user (Automatically adds a new line)
    //gets = gets string from user (differs from scanf because this allows for space bar
    //where as scanf does not allow me to do space it read space as end of user input
    //replaces printf/scanf

    char catsName[50];
    char catsFood[25];
    char sentence[75] = "";

    puts("Whats the cats name? ");
    gets(catsName);

    puts("What does he eat? ");
    gets(catsFood);

    strcat(sentence, catsName);
    strcat(sentence, " loves to eat ");
    strcat(sentence, catsFood);

    puts(sentence);

 return 0;
}
