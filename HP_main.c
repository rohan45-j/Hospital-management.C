#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include"doctor.h"
#include"nurse.h"
#include"patient.h"
#include"blood.h"
#include"fixed.h"
#define MAX 256
COORD coord={0,0};
void gotoxy(int x, int y){
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void adminMenu();
void userMenu();
void userPatient();
void ex_it();
void doctor();
void nurse();
void patient();
void blood();
void payment();
void medicine();
void ambulance();
void salary();
void contact();

struct Login{
    char username[30],password[30];
}lgin;
void lginmain(){
    system("cls");
    fixed();
    int c;
    gotoxy(30, 17);
    printf("1.Signup");
    gotoxy(30, 18);
    printf("2.Login");
    gotoxy(30, 20);
    printf("Enter Your choice: ");
    scanf("%d",&c);
    if(c==1){
        signup();
    }
    else if(c==2){
        login();
    }
}
void signup(){
    system("cls");
    fixed();
    FILE *log;
    log=fopen("login","w");
    gotoxy(30, 18);
    printf("Enter username: ");
    scanf("%s",lgin.username);
    gotoxy(30, 19);
    printf("Enter password: ");
    scanf("%s",lgin.password);
    fwrite(&lgin,sizeof(lgin),1,log);
    fclose(log);
    gotoxy(30, 21);
    printf("Sign Up Successfull");
    gotoxy(30, 23);
    printf("Enter any key to continue...");
    getch();
    system("cls");
    login();
}
void login(){
    system("cls");
    fixed();
    char d[25] = " Log In Panel";
    char e[25] = " Loading...";
    char user[30], pass[30],ch;
    FILE *log;
    int i = 0, j;
    gotoxy(30, 17);
    for (j = 0; j < 53; j++){
        delay(30);
        printf("\xB2");
    }
    for (j = 0; j < 15; j++){
        delay(30);
        printf("%c", d[j]);
    }
    for (j = 0; j < 53; j++){
        delay(30);
        printf("\xB2");
    }
    log=fopen("login","r");
    gotoxy(30, 20);
    printf("Enter UserName: ");
    scanf("%s", &user);
    gotoxy(30, 22);
    printf("Enter Password: ");
    while (ch != 13){
        ch = getch();
        if (ch != 13 && ch != 8){
            putch('*');
            pass[i] = ch;
            i++;
        }
    }
    pass[i] = '\0';
    while (fread(&lgin,sizeof(lgin),1,log)){
        if (strcmp(pass, lgin.password) == 0 && strcmp(user, lgin.username) == 0){
            gotoxy(30, 24);
            for (j = 0; j < 55; j++){
                delay(20);
                printf("\xB2");
            }
            for (j = 0; j < 11; j++){
                delay(20);
                printf("%c", e[j]);
            }
            for (j = 0; j < 55; j++){
                delay(20);
                printf("\xB2");
            }
            gotoxy(30, 26);
            printf("LogIn Successful");
            gotoxy(30, 28);
            printf("Press any key to continue.....");
            getch();
        }
        else{
            gotoxy(30, 26);
            printf("Warning!! Incorrect UserName or Password");
            getch();
            login();
        }
    }
    fclose(log);
}

void delay(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main(){
    system("cls");
    fixed();
    gotoxy(33, 18);
    printf("1.Admin Menu");
    gotoxy(33, 20);
    printf("2.User Menu");
    gotoxy(35, 22);
    printf("Enter Your Choice(1-2): ");
    scanf("%d",&choice);
    if (choice==1)
        adminlog();
    else if(choice==2)
        user_log();
    else
        printf("\n %30sInvalid entry. Please enter right option :)");
    system("cls");
    main();
    getch();
}
void adminlog(){
    fixed();
    lginmain();
    adminMenu();
}

void adminMenu(){
    system("cls");
    fixed();
    char d[25] = " ADMIN MENUE  ";
    char ch, user[10], pass[10];
    int i = 0, j;
    gotoxy(60, 20);
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    for (j = 0; j < 14; j++){
        delay(50);
        printf("%c", d[j]);
    }
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    printf(" \n\n\t\t\t\t\t 1. Doctor\n\t\t\t\t\t 2. Nurse\n\t\t\t\t\t 3. Patient Documents\n\t\t\t\t\t 4. Blood Bank\n\t\t\t\t\t 5. Payment\n\t\t\t\t\t 6. Medicine Corner\n\t\t\t\t\t 7. Ambulance\n\t\t\t\t\t 8. Salary\n\t\t\t\t\t 9. Contact us\n\t\t\t\t\t10. Exit\n\n");
    //gotoxy(30, 26);
    printf("\n\n\t\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:doctor();break;
    case 2:nurse();break;
    case 3:patient();break;
    case 4:blood();break;
    case 5:payment();break;
    case 6:medicine();break;
    case 7:ambulance();break;
    case 8:salary();break;
    case 9:contact();break;
    default:printf("\t\t\tInvalid entry. Please enter right option :)");
    }
    getch();
}

void user_log()
{
    fixed();
    lginmain();
    userMenu();
}
void userMenu(){
    system("cls");
    fixed();
    gotoxy(30, 16);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 User Menu  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(30, 18);
    printf("1. Doctor");
    gotoxy(30, 19);
    printf("2. Nurse");
    gotoxy(30, 20);
    printf("3. Patient");
    gotoxy(30, 21);
    printf("4. Blood Bank");
    gotoxy(30, 22);
    printf("5. Medicine Corner");
    gotoxy(30, 23);
    printf("6. Ambulance Service");
    gotoxy(30, 24);
    printf("7. Contact Us");
    gotoxy(30, 25);
    printf("8. Exit");
    gotoxy(30, 26);
    printf("Enter Your Choice(1-8): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:user_doctor();break;
    case 2:user_nurse();break;
    case 3:userPatient();break;
    case 4:user_blood();break;
    // case 5:M_display();break;
    // case 6:A_display();break;
    // case 7:C_display();break;
    case 8:ex_it();break;
    default:
        printf("\n %30sInvalid entry. Please enter right option :)");
    }
    getch();
}

void ex_it(void)
{
    system("cls");
    fixed();
    printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :):)>\n");
    //printf("Press any key to continue.....:)>");
    getch();
    system("cls");

}


void payment(){
    system("cls");
    printf("\t\t\t\t\t\tPAYMENT\n\t\t\t*******************************************************\n");
    printf("\n\n\t\t1. Add Payment Method\n\t\t2. Due Payment List\n\t\t3. All Payment List\n\t\t4. Exit\n\n");
    printf("\n\nEnter your choice(1-8): ");
    scanf("%d", &choice);
    switch (choice){
    }
}
void medicine(){
    printf("\t\t\t\t\t\tMEDICINE CORNER\n\t\t\t*******************************************************\n");
    printf("\n\n\t\t1. Add Medicine Record\n\t\t2. List Medicine Record\n\t\t3. Edit Medicine Record\n\t\t4. Exit\n\n");
    printf("\n\nEnter your choice(1-8): ");
    scanf("%d", &choice);
    switch (choice){
    }
}
void ambulance(){
    system("cls");
    printf("\t\t\t\t\t\tAMBULANCE SYSTEAM\n\t\t\t*******************************************************\n");
    printf("\n\n\t\t1. Add Driver Record\n\t\t2. List Driver Record\n\t\t3. Edit Driver Record\n\t\t4. List Total Car\n\t\t5. Exit\n\n");
    printf("\n\nEnter your choice(1-8): ");
    scanf("%d", &choice);
    switch (choice){
    }
}
void salary(){
    system("cls");
    printf("\t\t\t\t\t\tSALARY\n\t\t\t*******************************************************\n");
    printf("\n\n\t\t1. Add Salary Method\n\t\t2. Due Salary List\n\t\t3. All Salary List\n\t\t4. Exit\n\n");
    printf("\n\nEnter your choice(1-8): ");
    scanf("%d", &choice);
    switch (choice){
    }
}
void contact(){
    system("cls");
    printf("\t\t\t\t\t\tCONTACT US\n\t\t\t*******************************************************\n");
    printf("\n\n\t\t1. Mobile\n\t\t2. Email\n\t\t3. Facebook\n\t\t4. Exit\n\n");
    printf("\n\nEnter your choice(1-8): ");
    scanf("%d", &choice);
    switch (choice){
    }
}

