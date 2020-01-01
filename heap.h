int heap(){

    /*
    In the past we used to limit the amount of memory we reserved, however what if you
    need more memory then your program reserves
    -----
    i.e business for their employees, you
    dont know howmany employees the business will have so you may set to little and in the future
    they may have more then that employees.
    -----
    Everything that the computer is currently using or running is being taken from the RAM in the computer,
    however everything that is left over is called the "Heap", and you can access this extra memory to use with
    your program to borrow it and when your done you give it back
    */

    //heap = left over memory that we can borrow and return after program ends
    int *points;

    /*
    malloc = get memory from the heap memory allocate;  malloc(how much memory do you need)
    and what we want is 5 time(could be any number) we can store enough for 5 extra intergers (int)
    the size of an int (we dont know the actual size of int each computer could be different)
    so we use sizeof to grab what it currently is
    (int *) = int typecast pointer so it treats it as a pointer;
    */
    points = (int *) malloc(5 * sizeof(int));

    /*
    we only need to borrow the extra whilst the programs runs and once it is done we do not need
    to hold onto it anylonger so we return the extra memory we borrowed to the computer so we just use
    free(nameOfVariable);
    */
    free(points);



    return 0;
}
