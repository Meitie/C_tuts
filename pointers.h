int pointers(){

    int age = 23;

    //using the & shows the memory address
    //C allows us to use the name instead of the space location i.e 0060FEEC
    //printf("%p ", &age); //show how and where it stores its memory in computer

    printf("Adress \t\t Name \t Value \n");
    printf("%p \t %s \t %d \n", &age, "age", age);

    //A pointer is a special type of variable that can hold the location address
    //to create a pointer use * it tells C that its a pointer variable
    int * pAge = &age;
    printf("%p \t %s \t %d \n", pAge, "age", age);

    return 0;
}
