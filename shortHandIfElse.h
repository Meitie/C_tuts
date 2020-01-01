int shortHandIfElse() {

    // same sytnax layout as Javascript
    //(test) ? trueCode : falseCode

  /*  char lastName[20];
    printf("Please enter your last name \n");
    scanf(" %s", lastName);

    //you can test characters just like you can test numbers
    //there is a difference between case sensitivy upper vs lower
    (lastName[0] < 'M' ) ? printf("Blue Team"): printf("Red Team") ;
*/
    int friends = 33;

    //Bobbys versions
    //it checks %d into friends and to find out if %s works out or not it checks ths shorthand if else;
    printf("I have %d friend%s", friends, (friends != 1) ? "s" : "" );


    //my version
    //(friends == 1) ? printf("I have %d friend", friends) : printf("I have %d friends", friends);

    return 0;

}
