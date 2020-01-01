
/*
    When the code compiles it needs to know what and where the end of a string is
    so it adds a special character being \0 to show where the end is

    so when you calculate the memory and how many characters
    so if it was "meitar segal" = 12 characters (with white space) + 1 for string terminator so 13

    when you create a string you actually create an array
    string = character array
*/



int stringTerminator5()
{
    "Meitar Segal\0"

    char name[13] = "Meitar Segala";
    printf("My name is %s coming from .h file\n", name);

   name[2] = 'z';
   printf("My name is %s \n", name);

    char food[] = "tuna";
    printf("My fav food is %s \n", food);

   takes 2 pieces of info
   1. what array you want to replace
   2. what do you want to replace it with
   strcpy(food, "bacon");
   printf("My fav food is %s \n", food);

    return 0;
}
