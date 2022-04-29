#include <stdio.h>
#include <string.h>
int main()
{
    char question[100];
    printf("Hello sir, \nWelcome to our Caffe chatbox. How can we help you?\n");
    printf("---------------------------------------------------\n");
START:
    printf("\nEnter Your Question:\n");
    gets(question);
    if(strcmp(question,"hi") == 0 || strcmp(question,"hello") == 0)
    {
        printf("Hello sir, How can we help you?\n");
    }
    else if(strcmp(question,"how are you") == 0 || strcmp(question,"how are you?") == 0)
    {
        printf("I am fine! you?\n");
    }
    else if(strcmp(question,"bye") == 0)
    {
        goto EXIT;
    }
    else
    {
        printf("Sorry sir. I can't understand what you want to say.\n");
        printf("do you have any question?\n");
        gets(question);
 
        if(strcmp(question,"yes") == 0 )
        {
            goto START;
        }
        else if(strcmp(question,"no") == 0)
        {
            goto EXIT;
        }
    }
 
    goto START;
 
EXIT:
    printf("Thank you so much for contact us. Bye\n\n");
 
    return 0;
}
