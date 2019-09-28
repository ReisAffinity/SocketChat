#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char command[30];
    printf("Enter a command: ");
    scanf("%s", command);

    if(strcmp(command, "help") == 0){
        printf("Commands are for this program are \n help  \n myip \n myport \n connection \n terminate \n send \n exit ");
    }
    else if(strcmp(command, "myip") == 0){
        
        system("C:\\Windows\\System32\\ipconfig"); 
    }
    else if(strcmp(command, "myport") == 0){
        system("C:\\Windows\\System32\\netstat -a");
    }
    else if(strcmp(command, "connection") == 0){

        char connection[30];
        printf("Enter the connection id that you want to go to: ");
        scanf(" $s", connection);



    }
    else{
        printf("Please enter help to see all commands");
    }
    
}