int stringManip(){

    char intro[100] = "Hey, ";
    //make sure its long enough to hold everything that you will put in

    //strcat = add onto the end of the string
    strcat(intro, "How ");
    strcat(intro, "are ");
    strcat(intro, "you? ");

    printf("%s \n", intro);



    //string copy = replaces with another
    strcpy(intro, "I'm good and you?");
    printf("%s \n", intro);


 return 0;
}
