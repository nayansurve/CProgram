main()
{

    char continents=7;
    printf("<<<<7 CONTINENTS OF WORLD>>>>");
    printf("\n Enter your choice:");
    scanf("%c",&continents);

    switch(continents)
    {
    case '1':
        printf("\n 1st largest continent is:");
        printf("\n Asia");
        break;

    case '2':
        printf("\n 2nd largest continent is:");
        printf("\n Africa");
        break;

    case '3':
        printf("\n 3rd largest continent is:");
        printf("\n North America");
        break;

    case '4':
        printf("\n 4th largest continent is:");
        printf("\n South America");
        break;

    case '5':
        printf("\n 5th largest continent is:");
        printf("\n Antartica");
        break;

    case '6':
        printf("\n 6th largest continent is:");
        printf("\n Europe");
        break;

    case '7':
        printf("\n 7th largest continent is:");
        printf("\n Ausrralia");
        break;

    default:
        printf("\n Invalid choice");
        break;

}
}
