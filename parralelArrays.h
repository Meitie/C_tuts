int parralelArrays(){

    //parralel arrays to loop through multiple arrays at the same time
    //use this to go through arrays of linking data to find out information
    //so in example below we use it to track users scores in games played and goals scored

    int i;
    int players[5] = {55,60,33,22,41};
    int goals[5] = {24,56,4,22,13};
    int gamesPlayed[5] = {32,41,30,12,13};
    float pointsPerGame[5];
    float bestPPG = 0.0;
    int bestPlayer;

    puts("Plyr \t Gls \t GP \t PPG");
    for(i=0; i<5; i++){
        //typecast it so that it will be able to save the results as a float
        pointsPerGame[i] = (float)goals[i] / (float)gamesPlayed[i];
        printf("%d \t %d \t %d \t %.2f \n", players[i], goals[i], gamesPlayed[i], pointsPerGame[i]);

        //this will only run when best ppg is better then previous run then if it is it will store them
        //as the new best player else the previous is the best player
        if(pointsPerGame[i] > bestPPG) {
            bestPPG = pointsPerGame[i];
            bestPlayer = players[i];
        }
    }

    printf("\nThe best player is %d \n", bestPlayer);


    return 0;
}
