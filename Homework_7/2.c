#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define NAME_MAX 20
#define SURNAME_MAX 20


struct Phone_Book
{
    int number[21];
    char name[NAME_MAX];
    char surname[SURNAME_MAX];
};

void welcome()             // WELCOME function
{
    printf ( "\n/////////////Hello user, this is a phonebook!///////////\n");
    
}
/*void Create_book()        // Create book function
{
    FILE * book= fopen ( "notebook.txt", "w+t" ); 
    fclose(book); 
}*/
void add_newMember()      // add new person
{
    struct Phone_Book new_person;
    printf( " \n enter name of the person: ");
    scanf( "%s", new_person.name);
    printf( " \n enter surname of the person: ");
    scanf( "%s", new_person.surname);
    printf( " \n enter phone number  of the person: ");
    scanf( "%d", new_person.number);
    
}

int main ()
{   
    welcome();
    add_newMember();
    return 0;
    
}

