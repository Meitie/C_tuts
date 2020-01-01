/*\nyou may enter this website
scanf puts a hold on your program so when it runs then it will stop everything and do its function and once
you finish with your scanf then it will continue running the code (so its basically asymectric javascript code)
*/

int gettingUserInput()
{

    char firstName[20];
    char crush[20];
    int numberOfBabies;

    //You need to give the user a prompt so they know to type
    printf("What is your name? \n");
    /*
    To let user type something in you use scanf it takes a few place holders
    1. placeholder what they will type in
    2. where will you store the user input

    */
    scanf("%s", firstName);

    printf("Who are you going to marry? \n");
    scanf("%s", crush);


    /*
    you need to add & before every variable except arrays (they have built in pointers)
    */
    printf("how many kids will you have \n");
    scanf("%d", &numberOfBabies);


    printf("%s and %s are in love and will have %d babies", firstName, crush, numberOfBabies);

    return 0;
}

