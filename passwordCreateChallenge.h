//TO BE CONTINUED

int passwordChallenge() {

    char password[100];
    printf("Please create a password, make sure it has the following:\n1 Uppercase\n1 Lowercase\n1 number\n$ sign; \n");
    printf("Password: ");
    scanf(" %s", password);

   if (password){
        int passwordLength = strlen(password);
        int passlen;

        /*for (passlen = 0; passlen <= passwordLength; passlen++){

            switch (password[passlen])){
            case (isupper(password[passlen])):
                printf("%c ",password[passlen]);
                printf("this one is uppercase\n");
                break;
            case (isalpha(password[passlen])):
                printf("%c ",password[passlen]);
                printf("this one is letter\n");
                break;
            case (isdigit(password[passlen])):
                printf("%c ",password[passlen]);
                printf("this one is a digit\n");
                break;
            }
        }
*/
        printf("Passlength: %d \n",passlen);

    } else {
        printf("You need to add a password");
    }

    return 0;
}
