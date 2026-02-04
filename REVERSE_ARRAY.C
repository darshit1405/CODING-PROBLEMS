#include <stdio.h>

int main()
{
    int i;
    int n;
    int m;
    int t_marks=0;

    printf("Enter the number of subjects : ");
    scanf("%d",&n);
    
    int a[n];
    
    int f=0;
    for(i=1;i<=n;i++){
        printf("marks of sub %d : ",i);
        scanf("%d",&m);
        
        a[n-1]=m;
        
        if(m<40){
            f=1;
        }
        t_marks+=m;
    }
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>=max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    printf("Highest mark : %d",max);
    printf("Lowest mark : %d",min);
    
    int avg=t_marks/n;
    if(f==1 || avg<50){
        printf("Total marks = %d\n",t_marks);
        printf("Average marks : %d\n",avg);
        printf("Fails");
    }
    else{
        printf("Total marks = %d\n",t_marks);
        printf("Average marks : %d\n",avg);
        printf("Pass\n");
    }
    
    int *p=a;
    for(int i=0;i<n;i++){
        printf("Marks of Student Number %d : %d\n",i+1,*(p+i));
    }
    
    

    return 0;
}
