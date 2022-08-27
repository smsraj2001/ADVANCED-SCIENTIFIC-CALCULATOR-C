#include"Calc_header.h"

int main()
{
    system("cls");
    FILE *f;
    f=fopen("History.txt","w");
    fclose(f);
        f=fopen("History.txt","a+");
        fprintf(f,"\n--------------------------------------------------------------------------------------\n");
        fprintf(f,"---------------------------WELCOME TO THE SCIENTIFIC CALCULATOR---------------------------- \n");
        fprintf(f,"---------------------------------------------------------------------------------------\n");
        fclose(f);
    int ch=0;
    int Y=1;
    char Calc_oprn;
    
    while(Y!=0)
    {
        system("cls");
        menu();
        Y=1;
        printf("\nEnter your CHOICE:-\n");
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
                ShellExecuteA(NULL,"open","Trigonometry.exe",NULL,NULL,SW_SHOWNORMAL);
            break;
            case 5:
                ShellExecuteA(NULL,"open","Miscellaneous.exe",NULL,NULL,SW_SHOWNORMAL);
            break;
            case 0: 
                printf("``````````````````````````````````````````````````````````````\n");
                printf("THANKS FOR VISITING THE SCIENTIFIC CALCULATOR!!!VISIT AGAIN!!!\n");
                printf("``````````````````````````````````````````````````````````````\n");
                    f=fopen("History.txt","a+");
                    fprintf(f,"``````````````````````````````````````````````````````````````\n");
                    fprintf(f,"THANKS FOR VISITING THE SCIENTIFIC CALCULATOR!!!VISIT AGAIN!!!\n");
                    fprintf(f,"``````````````````````````````````````````````````````````````\n");
                    fclose(f);		
                Y=0;
            break;
            default:
            printf("WRONG CHOICE!...Please give the correct option!!!\n");
            sleep(1.5);
            break;
        }
    }
    remove("Calc_client.o");
    remove("Calc_server.o");
    remove("Arith_client.o");
    remove("Arith_server.o");
    remove("Alge_client.o");
    remove("Alge_server.o");
    remove("Conv_client.o");
    remove("Conv_server.o");
    remove("Misc_client.o");
    remove("Misc_server.o");
    remove("Trig_client.o");
    remove("Trig_server.o");
return 0;
}