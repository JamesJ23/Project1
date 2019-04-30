/* This C program will Encrypt and decrypt words given to it using the rotation cipher and
    substitution cipher methods. a series of functions will be used to achieve this. 
    choosing between tasks will be done by entering in a intial variable.
 */
#include <stdio.h>
int stringlength(char *message); //function to find length of a string to process only the text //
void Rotationcipher1(char *message, int key); //function to perform a encryption on a word//
void Rotationcipher2(char *message, int key); //function to perform a decryption on a word//
void Substitutioncipher1(char *message, char *Substitution);
void Substitutioncipher2(char *message, char *Substitution);

int main()
{
    char message[] ="HELLO. THERE: JAMES"; //text must be entered manually//
    char Substitution[26] = "KEIJUTVHPSNCFAMWGDXQZYBROL"; //key for example on blackboard//
    int key = 0;
    int task = 5;
    while((task < 1) || task > 5);
    printf("please enter task number\n");
    printf("task 1: Encrypt with rotation cipher\n");
    printf("task 2: Decrypt with rotation cipher\n");
    printf("task 3: Encrypt with substitution cipher\n");
    printf("task 4: Decrypt with substitution cipher\n");    
    scanf("%d", &task);
    switch(task){ //allows the selection of tasks and invalid number checking//
        case 1: printf("task 1:Encryption selected\n"); 
        printf("enter key\n");
        scanf("%d", &key);
        printf(" message: %s \n was encrypted with a key of: %d\n", message, key);
        printf(" the encryption reads: ");
        Rotationcipher1(message, key); //calls function which then prints the encryption//
        break;
        case 2: printf("task 2:Decryption selected\n"); 
        printf("enter key\n");
        scanf("%d", &key);
        printf(" message: %s \n was Decrypted with a key of: %d\n", message, key);
        printf(" the encryption reads: ");
        Rotationcipher2(message, key); 
        break;
        case 3: printf("task 3:Encryption/Substitution selected\n");
        printf(" message: %s \n was Encrypted with a Subkey of: %s\n", message, Substitution);
        printf(" the encryption reads: ");
        Substitutioncipher1(message, Substitution); 
        break;
        case 4: printf("task 4:Decryption/Substitution selected\n");
        printf(" message: %s \n was Decrypted with a Subkey of: %s\n", message, Substitution);
        printf(" the Decryption reads: ");
        Substitutioncipher2(message, Substitution); 
        break;
        default: printf("error invalid number start again\n"); break;
    }
    return 0;
}

int stringlength(char *message) { //finds length of string by checking when 0 occurs//
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
        if(((int)message[index]) == 58){
            printf(":");
        }
        if(message[index] == ' '){
            printf(" ");
        }
        if(((int)message[index]) == 46){
            printf(".");
        }
        
        if(((int)message[index]) >= 65 && ((int)message[index]) <= 90){ //check if values are in the letter range//
            LetterValue = ((((int)message[index])-65 + key) % 26) +65;  //set values down to 1-26 then move them according to the key while still only having 26 values due to modulus
            char WordSum = (char)(LetterValue); //change number value into a character//
            printf("%c", WordSum);  //print single character at a time through the while loop//
        }
        
        index++;
}
    printf("\n");
}

void Rotationcipher2(char *message, int key) {
    int index=0;
    int LetterValue;
    char WordSum;
    
    while(message[index] != '\0' && stringlength(message) > index){
        if(((int)message[index]) == 58){
            printf(":");
        }
        if(message[index] == ' '){
            printf(" ");
        }
        if(((int)message[index]) == 46){
            printf(".");
        }
        
        if(((int)message[index]) >= 65 && ((int)message[index]) <= 90){
            LetterValue = ((((int)message[index])-90 - key) % 26) +90;
            char WordSum = (char)(LetterValue);
            printf("%c", WordSum);
        }
        
        index++;
}
    printf("\n");
}

void Substitutioncipher1(char *message, char *Substitution){
    int index=0;
    int LetterValue;
    char WordSum;
        while(message[index] != '\0' && stringlength(message) > index){
        if(((int)message[index]) == 58){
            printf(":");
        }
        if(message[index] == ' '){
            printf(" ");
        }
        if(((int)message[index]) == 46){
            printf(".");
        }
        
        if(((int)message[index]) >= 65 && ((int)message[index]) <= 90){
            int index2 = (((int)message[index])-65);    //get values of letters represented in 1-26 from message//
            LetterValue = (int)(Substitution[index2]);  //sub values into substitution array and pull according letter value out//
            char WordSum = (char)(LetterValue);
            printf("%c", WordSum);
        }
        
        index++;
}
    printf("\n");
}

void Substitutioncipher2(char *message, char *Substitution){
    int index=0;
    int LetterValue;
    char WordSum;
        while(message[index] != '\0' && stringlength(message) > index){
        if(((int)message[index]) == 58){
            printf(":");
        }
        if(message[index] == ' '){
            printf(" ");
        }
        if(((int)message[index]) == 46){
            printf(".");
        }
        
        if(((int)message[index]) >= 65 && ((int)message[index]) <= 90){
            int index2 = (((int)message[index])-65);    
            LetterValue = (int)(Substitution[index2]);  
            char WordSum = (char)(LetterValue);
            printf("%c", WordSum);
        }
        
        index++;
}
    printf("\n");
}




