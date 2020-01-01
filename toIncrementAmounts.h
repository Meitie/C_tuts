int toIncrementNum()
{
    int pageViews = 0;

    pageViews = pageViews +1;
    printf("Page views: %d\n", pageViews);
     pageViews = pageViews +1;
    printf("Page views: %d\n", pageViews);
     pageViews = pageViews +1;
    printf("Page views: %d\n", pageViews);

    float balance = 1000.00;

    balance *= 1.11;
    //same as balance = balance * 1.1;
    printf("Balance: %f\n", balance);
    balance *= 1.11;
    printf("Balance: %f\n", balance);
     balance *= 1.11;
    printf("Balance: %f\n", balance);

    return 0;
}
