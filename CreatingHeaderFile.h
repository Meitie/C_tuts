#include "Meitarsinfo.h"

/*lines above called pre process directives
    so before your code goes and compiles
    it will run the includes and add them to file
    then compile with them included inside them
    they do not have to have a semicolor ;

    whenever you use <> it looks for default headers,
    rather use "" to bring it from same directory (so it is slightly quicker)

    <stdio.h> is standard input/output
    which allows us to input and printf (output)

    can also use #define to define a constant
    which means it can never change value
*/
int creatingHeaderFile6(passedThrough)
{

    int girlsAge = (AGE / 2) + 7;

    printf("%s can date girls who are older then %d %s", MYNAME, girlsAge, passedThrough);
    return 0;
}


