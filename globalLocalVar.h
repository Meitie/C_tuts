int pizza = 23;

int globalLocal() {
    printf("I ate this many pizza's: %d\n", pizza);
    return 0;
}

void printSomething(){
    printf("I ate this many pizza's: %d\n", pizza+1);
    return;
}
/*
Difference between global and local variables;
1. Gloabl = once you make a variable outside of a function or above, any function can use it,
2. Local = when you create it inside of the function, only that function can use it
*/


