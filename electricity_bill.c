#include <stdio.h>

int main()
{
    int u;
    printf("Electricity bill unit : ");
    scanf("%d",&u);
    if(u<=100){
        printf("Total electricity bill is %d",u*2);
    }
    else if(u>=101 && u<=300){
        printf("Total electricity bill is %d",u*3);
    }
    else{
        printf("Total electricity bill is %d",u*5);
    }

    return 0;
}
