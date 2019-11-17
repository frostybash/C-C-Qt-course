#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>


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

int add_newMember()      // add new person
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

	FILE *book = fopen ( "notebook.txt", "w+t" );
    fprintf (book, "%s %s %s", new_person.name, new_person.surname, new_person.number);
    fclose(book);
    return mainMenu();
    
}

int show_members()             // show members function
{
    struct Phone_Book new_person;
    char  a[128];
    printf( "\n/////////////This is your contacts!///////////\n");
    FILE *book = fopen ( "notebook.txt", "r" );
    fgets( a,127,book);
    printf( "%s", a);
    fclose(book);
  
    return mainMenu();
}

int mainMenu()        //Menu function
{
    printf( "\n/////////////select menu item///////////\n");
    printf( "enter the number >>1<< to add a contact\n");
    printf( "enter >>2<< to display contacts\n");
    printf( "press >>ctrl+c<< to exit programm\n");
    int item;
    scanf( "%d",&item);
    switch (item)
    {
        case 1:
            add_newMember();
            break;
        case 2:
            show_members();
            break;
        dafault:
            printf( "wrong action!\n");
    }
    return 0;
} 

int main ()
{  
    welcome();
    mainMenu();
    return 0;
    
}



     

