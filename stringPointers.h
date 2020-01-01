int stringPointers(){

    /*
    This is a special type of array caled a const, and as such it cannot change the value;
    and as such it is a const pointer

    movie1 = "hey now"; this wont be able to run as it is on the left side and it will then
    look for the array and not be able to find it at all as you have changed it now,
    could use things like strcpy or so to change the array numbers or do it [0] individually
    */
    char movie1[] = "The Return of Bucky";
    /*
    this is a pointer variable not a const and as such it can be changed;
    just like shown in the previous work this will look for the address stored at position 0
    and then work on from there until the string terminator at the end of the string array
    as such this becomes more like and string array and easier to manipulate
    */
    char *movie2 = "The Bucky Knight";

    //so this will start at the address and put them until null string terminator at the end
    puts(movie2);

    movie2 = "New movie title";
    puts(movie2);

    return 0;
}
