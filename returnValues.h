/*
Add to the main.c

   // 2 ways to possible return the value;
   // 1. store it in a variable such as buckyBonus;
   // 2. put it in place in the place you want to use it such as meitars bonus


    int buckyBonus = returnValues(10);

    printf("%s bonus is: $%d\n", "Bucky", buckyBonus);
    printf("%s bonus is: $%d\n", "Meitar", returnValues(9));


*/

int returnValues(int yearsWorked) {

    int bonus = yearsWorked * 250;

    if(yearsWorked >= 10) {
        bonus += 1000;
    }

    return bonus;
}
