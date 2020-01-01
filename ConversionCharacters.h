
/*
    %s is a conversion character (strings only)
    which you can use as a
    placerholder instead of proper text.
    it will be replaced later with what it will be in the
    following "" anfter used so example
    printf("good %s", "morning") = good morning
    you can use as many as you want


    %d is for numbers yo u can use it inplace of the number
    example
    printf("i ate %d donuts", 6) = i ate 6 donuts

    %f is for number with decimal places (it is called a float)
    the default is to print 6 characters to change the defualt
    you need to add however many characters between % and f
    so for 2 palces you do %.2f

    alot more conversion characters on this website: https://www.dummies.com/programming/c/c-language-conversion-characters/
*/
int conversionChar3()
{
    printf(
           "%s is the most %s person ever says %d people \n",
           "meitar",
           "amazing",
           10
           );

    printf("this makes a noise \a");
    printf("this makes a \t tab \n");

    printf("Pi is %f\n", 3.14159265358);
    printf("Pi is %.8f\n", 3.14159265358);
    printf("Pi is %.4f\n", 3.14159265358);

    return 0;
}
