//employee




#include <stdio.h>
    float permenent(float b){
        if(b>50000){
            b=b+5000;
        }
        float hra=0.2*b;
        float da=0.1*b;
        float tax=(b+hra+da)*0.1;
        float t_salary=b+hra+da-tax;
        return t_salary;
    }
    
    float contract(float b){
        return b-0.05*b;
    }
    
    float intern(float b){
        return b;
    }
    
int main()
{
 
    float b;
    int k,n;
    float salary[5];
    printf("Number of employees : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("Know your salary according to your role : ");
        scanf("%d",&k);
        switch(k){
            case 1:
                printf("Enter salary of permenent employee %d : ",i+1);
                scanf("%f",&b);
                if(b>0){
                    salary[i] = permenent(b);
                }
                else{
                    salary[i]=0;
                }
                break;
            case 2:
                // int np;
                // printf("Fix salary employees : ");
                // scanf("%d",&np);
                // for(int i=1;i<=np;i++){
                printf("Enter salary of contract based employee %d : ",i+1);
                scanf("%f",&b);
                if(b>0){
                    salary[i]=contract(b);
                }
                else{
                    salary[i]=0;
                }
                break;
            
            case 3:
                printf("Enter salary of trainee employee %d : ",i+1);
                scanf("%f",&b);
                if(b>0){
                    salary[i]=intern(b);
                }
                else{
                    salary[i]=0;
                }
                break;
            
            default:
                salary[i]=0;
            
        }
        printf("\n");
    }
    
    float sum=0;
    float min=salary[0];
    float max=salary[0];
    for(int i=0;i<n;i++){
        if(salary[i]>max){
            max=salary[i];
        }
        else if(salary[i]<min){
            min=salary[i];
        }
        sum+=salary[i];
    }
    printf("Total salary of employees are %f\n",sum);
    printf("Max salary : %f\n",max);
    printf("Min salary : %f",min);

    return 0;
}
