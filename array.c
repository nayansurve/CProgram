89main()
{
    int a[5];
    printf("Enter 5 numbers:");

    for(int i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Display numbers:");

    for(int i=0;i<=5;i++)
    {
        printf("\n%d",a[i]);
    }
}
