#include<stdio.h>
int main(){


    int attempts =0;
    int password;
    #define correct_password 1234

    printf("Enter the password:\n");

    while(attempts<3){

        scanf("%d",&password);

        if(password==correct_password){
            printf("Access Granted\n");
            return 0;
        }
    else{

        attempts++;
        printf("Access denied\n Attempts = %d\n",3-attempts);
    }

        
    }
    printf("Account locked due to max failed attempts.\n");
    return 0;
}