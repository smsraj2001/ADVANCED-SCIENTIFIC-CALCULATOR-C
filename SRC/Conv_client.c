#include"Conv_header.h"

int main()
{
    int firstInput;
    //system("cls");
    FILE *f;
    printf("\n--------------------------------------------------------------------------------------\n");
    printf("---------------------------WELCOME TO CONVERSION CALCULATOR---------------------------- \n");
    printf("---------------------------------------------------------------------------------------\n");
        f=fopen("History.txt","a+");
        fprintf(f,"\n--------------------------------------------------------------------------------------\n");
        fprintf(f,"---------------------------WELCOME TO CONVERSION CALCULATOR---------------------------- \n");
        fprintf(f,"---------------------------------------------------------------------------------------\n");
        fclose(f);
    
    while(1)
    {
       printf("Enter the INPUT character.\n1. LENGTH\n2. MASS\n3. TEMPERATURE\n4. RADIANS\n#. 0 TO QUIT\n");
        scanf("%d",&firstInput);
        switch(firstInput)
        {
            case 1: 
                length();
                break;
            case 2:
                mass();
                break;
            case 3:
                temperature();
            break;
            case 4: 
                radians();
            break;
            case 0: 
                printf("``````````````````````````````````````````````````````````````\n");
                printf("THANKS FOR VISITING THE CONVERSION CALCULATOR!!!VISIT AGAIN!!!\n");
                printf("``````````````````````````````````````````````````````````````\n");
                    f=fopen("History.txt","a+");
                    fprintf(f,"``````````````````````````````````````````````````````````````\n");
                    fprintf(f,"THANKS FOR VISITING THE CONVERSION CALCULATOR!!!VISIT AGAIN!!!\n");
                    fprintf(f,"``````````````````````````````````````````````````````````````\n");
                    fclose(f);
		sleep(1.5);
                goto end;
                break;
            default:
            printf("Wrong choice...Please give the correct option!!!\n");
            break;
        }
    }
    end:
        return 0;
}