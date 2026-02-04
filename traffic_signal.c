#include <stdio.h>

int main()
{
    int signal_no;
    int i=0;
    while(i==0){
        printf("Enter signal number : ");
        scanf("%d",&signal_no);
        if(signal_no==1){
            printf("Signal : RED\n");
            printf("STOP behind the line");
            i=1;
        }
        else if(signal_no==2){
            printf("Signal : YELLOW\n");
            printf("Slow down");
            i=1;
        }
        else if(signal_no==3){
            printf("Signal : GREEN\n");
            printf("GO");
            i=1;
        }
        else{
            printf("please enter 1,2 or 3");
        }
    }

    return 0;
}
