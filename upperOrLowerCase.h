int upperLower() {

    int item = 'a';

   if (isalpha(item)) {

       if (isupper(item)) {
            printf("%c is a uppercase letter\n", item);
       } else {
               printf("%c is a lowercase letter\n", item);
       }


    } else {
        if (isdigit(item)) {
            printf("%c is a number\n", item);
        } else {
            printf("%c is NOT a number\n", item);
        }
    }
    return 0;
}


