int main()
{
    int X=1;
    int ch;
    while(X)
    {
        X=1;
        printf("Enter ur choice:-\n");
        scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    ShellExecuteA(NULL,"open","Arithmetic.exe",NULL,NULL,SW_SHOWNORMAL);
    break;
    case 2:
    ShellExecuteA(NULL,"open","Algebra.exe",NULL,NULL,SW_SHOWNORMAL);
    break;
    case 3:
    ShellExecuteA(NULL,"open","Conversion.exe",NULL,NULL,SW_SHOWNORMAL);
    break;
    case 4:
    ShellExecuteA(NULL,"open","Miscellaneous.exe",NULL,NULL,SW_SHOWNORMAL);
    break;
    case 0:
    exit(0);return 0;
    break;
    default:
    printf("Wrong!!!\n");
    break;
    }
    }
    return 0;
}

