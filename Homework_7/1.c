#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define NAME_MAX 20
#define SURNAME_MAX 20
#define NUMBER_MAX 20


struct Phone_Book
{
    char number[NUMBER_MAX];
    char name[NAME_MAX];
    char surname[SURNAME_MAX];
};

void welcome()             // WELCOME function
{
    printf ( "\n/////////////Hello user, this is a phonebook!///////////\n");
    
}

void add_newMember()      // add new person
{
    struct Phone_Book new_person;
    printf( " \n enter name of the person: ");
    scanf( "%s", new_person.name);
    printf( " \n enter surname of the person: ");
    scanf( "%s", new_person.surname);
    printf( " \n enter phone number  of the person: ");
    scanf( "%s", new_person.number);
    printf( " name :  %s", new_person.name);
    printf( "\n");
    printf( " surname :  %s", new_person.surname);
    printf( "\n");
    printf( " phonenumber :  %s", new_person.number);
    printf( "\n");
    
}

int main ()
{
    FILE * book= fopen ( "notebook.txt", "w+t" );
    welcome();
    add_newMember();
    fclose(book);
    return 0;
    
}



     

