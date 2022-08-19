#include<stdio.h>
#include<ctype.h>

void getStringFromUser(char* string);
void removeWhiteSpace(char* string);
int getStringSize(char* string);
int countWordsInString(char* string);
void reverseWordOrder(char* string,int stringSize);


int main(void){
        char string[255];
        int stringSize=0;
        int wordCount=0;

        printf("*** Welcome to Lab 9 ***\n");

        getStringFromUser(string);
        printf("The string you entered is: %s\n",string);

        removeWhiteSpace(string);
        printf("String after white space is removed: \"%s\"\n",string);

        stringSize = getStringSize(string);
        printf("String Size = %d\n",stringSize);

        wordCount = countWordsInString(string);
        printf("Word count = %d\n",wordCount);

        reverseWordOrder(string,stringSize);
        printf("The user input with the words put in reverse order: \"%s\"\n",string);


        printf("Thanks for doing lab 9!\n");
}

void getStringFromUser(char* string){

        printf("Please enter a string: ");
        scanf("%[^\n]",string);

}
void removeWhiteSpace(char* string){
        int i=0;
        int j=0;
        char temp[255];
        //int condition=0;
        //condition 0: when character is a letter
        //condition 1 character is space
        for(i=0;string[i] != '\0';i++){
                if(isalpha(*(string + i))){
                        *(temp + j) = *(string + i);
                        j++;
                }
                if(isspace(*(string + i)) && isalpha(*(string + i + 1))){
                        *(temp + j) = ' ';
                        j++;
                }

        }
        *(temp + j) = '\0';
        for(i=0;temp[i] != '\0';i++){
                string[i] = temp[i];
        }
        string[i] = '\0';

}

int getStringSize(char* string){
        int size=0;

        while(*(string + size) != '\0'){
                size++;
        }
        return size;

}
int countWordsInString(char* string){
        int wordCount=1;
        int i=0;
        int id=0;

        if(*(string+0) == ' '){
                id = 0;
        }
        else{
                id=1;
        }

        while(*(string+i) != '\0'){
                if(*(string + i) == ' '){
                        id = 0;
                        i++;
                }
                if(id == 0 && *(string + i) != ' '){
                        wordCount++;
                        i++;
                        id = 1;

                }
                else{
                        i++;
                }
        }
        return wordCount;
}
void reverseWordOrder(char* string,int strSize){
        int i = 0;
        int j=0;
        char temp[255] = " ";
        int start =  0;
        int end = 0;
        int condition = 0;

        for(i=strSize ;i != -1;i--){
                if(condition == 0 && isalpha(*(string + i))){
                        end = i;
                        condition = 1;
                }
                if(condition == 1 && !isalpha(*(string + i - 1))){
                        start = i;
                        condition = 2;
                }
                if(condition == 2){
                        while(start<=end){
                                *(temp + j) = *(string + start);
                                j++;
                                start++;
                        }
                        condition = 0;
                        *(temp + j) = ' ';
                        j++;
                }
        }

        printf("string = %s\n",string);

        for(i=0;*(temp + i) != '\0';i++){
                *(string + i) = *(temp + i);
        }
        *(string + i - 1)  = '\0';

}
