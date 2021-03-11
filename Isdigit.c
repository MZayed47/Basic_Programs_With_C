int main()
{
    char str[]="2015Goodyear";
    int year;
    if(isdigit(str[0]))
    {
        year=atoi(str);
        printf("%d\n",year);
    }
    return 0;
}

/*  isdigit(1) >> return true;
    isdigit(a) or anything >> return false;
*/
