/* This C program will Encrypt and decrypt words given to it using the rotation cipher and
    substitution cipher methods. a series of functions will be used to achieve this. 
    choosing between tasks will be done by entering in a intial variable.
 */
#include <stdio.h>
int stringlength(char *message); //function to find length of a string to process only the text //
void Rotationcipher1(char *message, int key); //function to perform a encryption on a word//
int main()
{
    char message[] ="HELLO THERE YOU"; //text must be entered manually//
    int key = 0;
    int task = 1;
    while((task < 10);
    printf("please enter task number\n");
    printf("task 1: Encrypt with rotation cipher\n");
    printf("task 2: Decrypt with rotation cipher\n");
    printf("task 3: Encrypt with substitution cipher\n");
    printf("task 4: Decrypt with substitution cipher\n");    
    scanf("%d", &task);
    switch(task){ //allows the selection of tasks and invalid number checking//
        case 1: printf("task 1 selected\n"); 
        printf("enter key\n");
        scanf("%d", &key);
        printf(" message: %s \n was encrypted with a key of: %d\n", message, key);
        printf(" the encryption reads: ");
        Rotationcipher1(message, key); //calls function which then prints the encryption//
        break;
        case 2: printf("task 2 selected\n");
        break;
        case 3:
        break;
        case 4:
        break;
        default: printf("error invalid number\n"); task = 1;
    }
    return 0;
}

int stringlength(char *message) {
    int length = 0;
    while(message[length] != 0) {
        if(message[length] != 0) {
        length++;
        }
    }
    return length;
}

void Rotationcipher1(char *message, int key) {
    int index=0;
    int LetterValue;
    char WordSum;
    
    while(message[index] != '\0' && stringlength(message) > index){
        if(message[index] != ' '){
            LetterValue = ((((int)message[index])-65 + key) % 26) +65;
            char WordSum = (char)(LetterValue);
            printf("%c", WordSum);
        }
        
        else{
            printf(" ");
        }
        
        index++;
}
    printf("\n");
}

    


