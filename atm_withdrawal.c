#include <stdio.h>

int main()
{
    int rs;
    int bb;
    printf("Your bank balance : ");
    scanf("%d",&bb);
    printf("Enter amount : ");
    scanf("%d",&rs);
    if(rs%100==0 && rs<=bb){
        bb-=rs;
        printf("SUCCESS");
    }
    else{
        printf("FAILURE");
    }

    return 0;
}
