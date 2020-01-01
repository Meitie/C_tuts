/*
2 different ways to pass variables through functions
1. Pass by value = an actual variable and its values
2. Pass by reference = passing it via the reference address
#########
1.
we dont pass the variable itself, it passed the value of 20,
as such it only effects the value in function and the variable was untouched
this way we can leave the original value as is;
so before age = 20 passed and doesnt effect;
-----
2.
because we passing through the address of the variable it effects the variable
and as such it was changed and effected and the information in function changed
the variable itself
so now age is passed not 20, so it is set to 64;
*/

/*
code from main.c
int age = 20;

    passByValue(age);
    printf("passing by value: age is %d\n", age);


    passByAddress(&age);
    printf("passing by address: age is %d\n", age);


*/

void passByValue (int i) {
    i = 99;
    return;
}

void passByAddress (int *i) {
    *i = 64;
    return;
}
