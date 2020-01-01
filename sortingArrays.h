int sortingArrays() {

    //C doesnt have a way to sort so we create our own
    //i is for couting;
    //temp is for switching so it doesnt override one of the number it temp stores the number,
    //this is called a bubble sort
    //sorted = 0 or 1
    int i, temp, sorted;
    int howMany = 10;
    int goals[howMany];

    //create the array
    for(i=0; i<howMany; i++){
        goals[i] = ( rand()%25 ) +1; //in real life we will have array of actual data not use rand
    }

    printf("Original list: \n");
     for(i=0; i<howMany; i++){
        printf("%d\n", goals[i]);
    }


    //infitine loop while(1) = true = so runs for ever so we can sort it until its completely done
    while(1){

        sorted = 0;
        //this will compair every number to the number after it by doing -1
        for(i=0; i<howMany-1; i++){
            //if the first number is bigger then we want to switch them
            if(goals[i] > goals[i+1]){
                temp = goals[i]; // this saves the first number for future use
                goals[i] = goals[i+1]; // this then overrides first number with second
                goals[i+1] = temp; //this brings back the first bumber and places it in second position now
                sorted = 1; //this shows that sorted has happened shows the list is not in order yet
            }
        }

        if (sorted == 0) {
            break;
        }
    }

    printf("\nSorted list: \n");
     for(i=0; i<howMany; i++){
        printf("%d\n", goals[i]);
    }

 return 0;
}
