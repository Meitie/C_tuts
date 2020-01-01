int structures(){

    /*
    Data structures = same as javascript, objects etc
    Normally structures are generally created from .h files
    structure is a group of variables, the individual variable = members;
    */

    struct user {
        int userID;
        char firstName[25];
        char lastName[25];
        int age;
        float weight;
    };

    struct user meitar; //they now inheret the structure from above
    struct user bucky;

    meitar.userID = 1;
    bucky.userID = 2;

    puts("Enter the first name of user 1");
    gets(meitar.firstName);
    puts("Enter the first name of user 2");
    gets(bucky.firstName);

    printf("User 1: id is %d ", meitar.userID );
    printf("and their name is %s \n", meitar.firstName );
    printf("User 2: id is %d ", bucky.userID );
    printf("and their name is %s \n", bucky.firstName );

    return 0;
}
