int pointerDereference() {

    int age = 23;
    int * pAge = &age;

    printf("Adress \t\t Name \t Value \n");
    printf("%p \t %s \t %d \n", pAge, "age", age);
    printf("%p \t %s \t %d \n", &age, "age", age);

    printf("\n*pAge: %d \n", *pAge);
    //it de-references it, it looks at the address, the variable it points to and gets the value of it

    /*2 ways to get the value from variable;
    1. use the dereference way
    2. use the varibale name */
    *pAge = 71;
    printf("\n*pAge: %d \n", *pAge);
    printf("\nage: %d \n", age);

    return 0;
}
