int stringLength(){

    char movie[20];
    char *pMovie = movie;

    /*
    pMovie = the place you storying
    20 = cut off point storing up until then
    stdin = standerd input
    */
    fgets(pMovie, 20, stdin);

    puts(pMovie);

    return 0;
}
