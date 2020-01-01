int intAndChar() {

    int item = '9';
    /*
    you can use int and char interchangerbilly in C (it converts it to binary) in code so it will still work
    if you change item to a letter or number you can still run code off of it in alpha or is digit;
    here we can see we used %c = character for int which is a number, instead of using things such as %d instead
    to check for a whole number like we would normally do
    */
    //(isalpha(item)) ? printf("%c is a letter\n", item) : printf("%c is NOT a letter\n", item);
    //(isdigit(item)) ? printf("%c is a number\n", item) : printf("%c is NOT a number\n", item);

    if (isalpha(item)) {
        printf("%c is a letter\n", item);

    } else {
        if (isdigit(item)) {
            printf("%c is a number\n", item);
        } else {
            printf("%c is NOT a number\n", item);
        }
    }


    return 0;

}
