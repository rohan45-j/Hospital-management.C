#define MAX 256
int choice,row;
char ans,Id[20],Age[20],Gender[15],First_Name[15], Last_Name[15],Department[50],Contact_Number[15],Address[15],Join_Date[15];
struct nurse
{
    char ans;
    int Age[20];
    char Gender[15],Id[20],First_Name[15], Last_Name[15],Department[50],Contact_Number[15],Address[15],Join_Date[15];
};
struct nurse n, n_temp;

void general_N_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("G_N_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Nurse Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Nurse Id: ");
    scanf("%s", n.Id);
    printf("\n\t\tEnter Nurse First Name: ");
    scanf("%s", n.First_Name);
    printf("\n\t\tEnter Nurse Last Name: ");
    scanf("%s", n.Last_Name);
    printf("\n\t\tEnter Nurse Age: ");
    scanf("%s", n.Age);
    printf("\n\t\tEnter Nurse Gender: ");
    scanf("%s", n.Gender);
    printf("\n\t\tEnter Nurse Address: ");
    scanf("%s", n.Address);
    printf("\n\t\tEnter Nurse Department: ");
    scanf("%s", n.Department);
    printf("\n\t\tEnter Nurse Contact Number: ");
    scanf("%s", n.Contact_Number);
    printf("\n\t\tEnter Nurse Join Date: ");
    scanf("%s",n.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        N_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        nurse();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void phy_N_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("phy_N_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Nurse Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Nurse Id: ");
    scanf("%s", n.Id);
    printf("\n\t\tEnter Nurse First Name: ");
    scanf("%s", n.First_Name);
    printf("\n\t\tEnter Nurse Last Name: ");
    scanf("%s", n.Last_Name);
    printf("\n\t\tEnter Nurse Age: ");
    scanf("%s", n.Age);
    printf("\n\t\tEnter Nurse Gender: ");
    scanf("%s", n.Gender);
    printf("\n\t\tEnter Nurse Address: ");
    scanf("%s", n.Address);
    printf("\n\t\tEnter Nurse Department: ");
    scanf("%s", n.Department);
    printf("\n\t\tEnter Nurse Contact Number: ");
    scanf("%s", n.Contact_Number);
    printf("\n\t\tEnter Nurse Join Date: ");
    scanf("%s",n.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        N_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        nurse();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void ped_N_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("ped_N_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Nurse Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Nurse Id: ");
    scanf("%s", n.Id);
    printf("\n\t\tEnter Nurse First Name: ");
    scanf("%s", n.First_Name);
    printf("\n\t\tEnter Nurse Last Name: ");
    scanf("%s", n.Last_Name);
    printf("\n\t\tEnter Nurse Age: ");
    scanf("%s", n.Age);
    printf("\n\t\tEnter Nurse Gender: ");
    scanf("%s", n.Gender);
    printf("\n\t\tEnter Nurse Address: ");
    scanf("%s", n.Address);
    printf("\n\t\tEnter Nurse Department: ");
    scanf("%s", n.Department);
    printf("\n\t\tEnter Nurse Contact Number: ");
    scanf("%s", n.Contact_Number);
    printf("\n\t\tEnter Nurse Join Date: ");
    scanf("%s",n.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        N_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        nurse();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void den_N_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("den_N_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Nurse Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Nurse Id: ");
    scanf("%s", n.Id);
    printf("\n\t\tEnter Nurse First Name: ");
    scanf("%s", n.First_Name);
    printf("\n\t\tEnter Nurse Last Name: ");
    scanf("%s", n.Last_Name);
    printf("\n\t\tEnter Nurse Age: ");
    scanf("%s", n.Age);
    printf("\n\t\tEnter Nurse Gender: ");
    scanf("%s", n.Gender);
    printf("\n\t\tEnter Nurse Address: ");
    scanf("%s", n.Address);
    printf("\n\t\tEnter Nurse Department: ");
    scanf("%s", n.Department);
    printf("\n\t\tEnter Nurse Contact Number: ");
    scanf("%s", n.Contact_Number);
    printf("\n\t\tEnter Nurse Join Date: ");
    scanf("%s",n.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        N_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        nurse();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void car_N_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("car_N_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Nurse Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Nurse Id: ");
    scanf("%s", n.Id);
    printf("\n\t\tEnter Nurse First Name: ");
    scanf("%s", n.First_Name);
    printf("\n\t\tEnter Nurse Last Name: ");
    scanf("%s", n.Last_Name);
    printf("\n\t\tEnter Nurse Age: ");
    scanf("%s", n.Age);
    printf("\n\t\tEnter Nurse Gender: ");
    scanf("%s", n.Gender);
    printf("\n\t\tEnter Nurse Address: ");
    scanf("%s", n.Address);
    printf("\n\t\tEnter Nurse Department: ");
    scanf("%s", n.Department);
    printf("\n\t\tEnter Nurse Contact Number: ");
    scanf("%s", n.Contact_Number);
    printf("\n\t\tEnter Nurse Join Date: ");
    scanf("%s",n.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        N_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        nurse();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void gyn_N_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("gyn_N_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Nurse Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Nurse Id: ");
    scanf("%s", n.Id);
    printf("\n\t\tEnter Nurse First Name: ");
    scanf("%s", n.First_Name);
    printf("\n\t\tEnter Nurse Last Name: ");
    scanf("%s", n.Last_Name);
    printf("\n\t\tEnter Nurse Age: ");
    scanf("%s", n.Age);
    printf("\n\t\tEnter Nurse Gender: ");
    scanf("%s", n.Gender);
    printf("\n\t\tEnter Nurse Address: ");
    scanf("%s", n.Address);
    printf("\n\t\tEnter Nurse Department: ");
    scanf("%s", n.Department);
    printf("\n\t\tEnter Nurse Contact Number: ");
    scanf("%s", n.Contact_Number);
    printf("\n\t\tEnter Nurse Join Date: ");
    scanf("%s",n.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        N_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        nurse();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void sex_N_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("sex_N_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Nurse Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Nurse Id: ");
    scanf("%s", n.Id);
    printf("\n\t\tEnter Nurse First Name: ");
    scanf("%s", n.First_Name);
    printf("\n\t\tEnter Nurse Last Name: ");
    scanf("%s", n.Last_Name);
    printf("\n\t\tEnter Nurse Age: ");
    scanf("%s", n.Age);
    printf("\n\t\tEnter Nurse Gender: ");
    scanf("%s", n.Gender);
    printf("\n\t\tEnter Nurse Address: ");
    scanf("%s", n.Address);
    printf("\n\t\tEnter Nurse Department: ");
    scanf("%s", n.Department);
    printf("\n\t\tEnter Nurse Contact Number: ");
    scanf("%s", n.Contact_Number);
    printf("\n\t\tEnter Nurse Join Date: ");
    scanf("%s",n.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        N_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        nurse();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void ear_N_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("ear_N_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Nurse Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Nurse Id: ");
    scanf("%s", n.Id);
    printf("\n\t\tEnter Nurse First Name: ");
    scanf("%s", n.First_Name);
    printf("\n\t\tEnter Nurse Last Name: ");
    scanf("%s", n.Last_Name);
    printf("\n\t\tEnter Nurse Age: ");
    scanf("%s", n.Age);
    printf("\n\t\tEnter Nurse Gender: ");
    scanf("%s", n.Gender);
    printf("\n\t\tEnter Nurse Address: ");
    scanf("%s", n.Address);
    printf("\n\t\tEnter Nurse Department: ");
    scanf("%s", n.Department);
    printf("\n\t\tEnter Nurse Contact Number: ");
    scanf("%s", n.Contact_Number);
    printf("\n\t\tEnter Nurse Join Date: ");
    scanf("%s",n.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        N_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        nurse();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void N_add_rec()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " NURSE RECORD  ";
    char ch, user[10], pass[10];
    int i = 0, j;
    gotoxy(60, 20);
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    for (j = 0; j < 16; j++){
        delay(50);
        printf("%c", d[j]);
    }
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    printf("\n\n\t\t1. Add General Surgeon Nurse\n\t\t2. Add Psychologist Nurse\n\t\t3. Add Pediatrician Nurse\n\t\t4. Add Dentist Nurse\n\t\t5. Add Cardiologist Nurse\n\t\t6. Add Gynecologist Nurse\n\t\t7. Add Sexologist Nurse\n\t\t8. Add Ear And Nose Nurse\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-6): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:general_N_add();break;
    case 2:phy_N_add();break;
    case 3:ped_N_add();break;
    case 4:den_N_add();break;
    case 5:car_N_add();break;
    case 6:gyn_N_add();break;
    case 7:sex_N_add();break;
    case 8:ear_N_add();break;
    case 9:nurse();break;
    }
}

void general_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("G_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		nurse();
}

void phy_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("phy_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		nurse();
}

void ped_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ped_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		nurse();
}

void den_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("den_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		nurse();
}

void car_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("car_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		nurse();
}

void gyn_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("gyn_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		nurse();
}

void sex_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("sex_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		nurse();
}

void ear_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ear_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		nurse();
}

void N_list_rec()
{
   system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " NURSE RECORD  ";
    char ch, user[10], pass[10];
    int i = 0, j;
    gotoxy(60, 20);
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    for (j = 0; j < 16; j++){
        delay(50);
        printf("%c", d[j]);
    }
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    printf("\n\n\t\t1. List General Surgeon Nurse\n\t\t2. List Psychologist Nurse\n\t\t3. List Pediatrician Nurse\n\t\t4. List Dentist Nurse\n\t\t5. List Cardiologist Nurse\n\t\t6. List Gynecologist Nurse\n\t\t7. List Sexologist Nurse\n\t\t8. List Ear And Nose Nurse\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-6): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:general_N_list();break;
    case 2:phy_N_list();break;
    case 3:ped_N_list();break;
    case 4:den_N_list();break;
    case 5:car_N_list();break;
    case 6:gyn_N_list();break;
    case 7:sex_N_list();break;
    case 8:ear_N_list();break;
    case 9:nurse();break;
    }
}

void general_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("G_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	//L:
	//getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	nurse();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	//goto L;
    }
}

void phy_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("phy_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",d.Id);
			gotoxy(25,row);
			printf("%s %s",d.First_Name, d.Last_Name);
			gotoxy(45,row);
			printf("%s",d.Age);
			gotoxy(60,row);
			printf("%s",d.Gender);
			gotoxy(75,row);
			printf("%s",d.Address);
			gotoxy(90,row);
			printf("%s",d.Department);
			gotoxy(110,row);
			printf("%s",d.Contact_Number);
			gotoxy(128,row);
			printf("%s",d.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	//L:
	//getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	nurse();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void ped_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ped_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",d.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	nurse();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void den_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("den_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	nurse();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void car_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("car_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	nurse();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void gyn_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("gyn_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	nurse();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void sex_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("sex_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	nurse();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void ear_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ear_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	nurse();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void N_Search_rec()
{
	system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " NURSE RECORD  ";
    char ch, user[10], pass[10];
    int i = 0, j;
    gotoxy(60, 20);
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    for (j = 0; j < 16; j++){
        delay(50);
        printf("%c", d[j]);
    }
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    printf("\n\n\t\t1. Search General Surgeon Nurse\n\t\t2. Search Psychologist Nurse\n\t\t3. Search Pediatrician Nurse\n\t\t4. Search Dentist Nurse\n\t\t5. Search Cardiologist Nurse\n\t\t6. Search Gynecologist Nurse\n\t\t7. Search Sexologist Nurse\n\t\t8. Search Ear And Nose Nurse\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-6): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:general_N_search();break;
    case 2:phy_N_search();break;
    case 3:ped_N_search();break;
    case 4:den_N_search();break;
    case 5:car_N_search();break;
    case 6:gyn_N_search();break;
    case 7:sex_N_search();break;
    case 8:ear_N_search();break;
    case 9:nurse();break;
    }
}

void general_N_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("G_N_temp.txt","w+");
	   fptr=fopen("G_N_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Nurse : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
        {
            if(strcmp(n.Id,Id)==0)
            {
                valid =1;
                printf("\n\t\t\t\t\t\t\t***Existing Record***\n");
                gotoxy(10,25);
                printf("ID");
                gotoxy(25,25);
                printf("Full Name");
                gotoxy(45,25);
                printf("Age");
                gotoxy(60,25);
                printf("Gender");
                gotoxy(75,25);
                printf("Address");
                gotoxy(90,25);
                printf("Department");
                gotoxy(110,25);
                printf("Contact_No. ");
                gotoxy(128,25);
                printf("Join_Date");
                printf("\n=========================================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",n.Id);
                gotoxy(25,row);
                printf("%s %s",n.First_Name, n.Last_Name);
                gotoxy(45,row);
                printf("%s",n.Age);
                gotoxy(60,row);
                printf("%s",n.Gender);
                gotoxy(75,row);
                printf("%s",n.Address);
                gotoxy(90,row);
                printf("%s",n.Department);
                gotoxy(110,row);
                printf("%s",n.Contact_Number);
                gotoxy(128,row);
                printf("%s",n.Join_Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",n.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",n.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",n.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",n.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",n.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",n.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",n.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",n.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",n.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("G_N_record.txt");
        rename("G_N_temp.txt", "G_N_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        nurse();
}

void phy_N_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("phy_N_temp.txt","w+");
	   fptr=fopen("phy_N_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Nurse : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
        {
            if(strcmp(n.Id,Id)==0)
            {
                valid =1;
                printf("\n\t\t\t\t\t\t\t***Existing Record***\n");
                gotoxy(10,25);
                printf("ID");
                gotoxy(25,25);
                printf("Full Name");
                gotoxy(45,25);
                printf("Age");
                gotoxy(60,25);
                printf("Gender");
                gotoxy(75,25);
                printf("Address");
                gotoxy(90,25);
                printf("Department");
                gotoxy(110,25);
                printf("Contact_No. ");
                gotoxy(128,25);
                printf("Join_Date");
                printf("\n=========================================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",n.Id);
                gotoxy(25,row);
                printf("%s %s",n.First_Name, n.Last_Name);
                gotoxy(45,row);
                printf("%s",n.Age);
                gotoxy(60,row);
                printf("%s",n.Gender);
                gotoxy(75,row);
                printf("%s",n.Address);
                gotoxy(90,row);
                printf("%s",n.Department);
                gotoxy(110,row);
                printf("%s",n.Contact_Number);
                gotoxy(128,row);
                printf("%s",n.Join_Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",n.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",n.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",n.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",n.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",n.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",n.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",n.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",n.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",n.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("phy_N_record.txt");
        rename("phy_N_temp.txt", "phy_N_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        nurse();
}

void ped_N_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("ped_N_temp.txt","w+");
	   fptr=fopen("ped_N_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Nurse : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
        {
            if(strcmp(n.Id,Id)==0)
            {
                valid =1;
                printf("\n\t\t\t\t\t\t\t***Existing Record***\n");
                gotoxy(10,25);
                printf("ID");
                gotoxy(25,25);
                printf("Full Name");
                gotoxy(45,25);
                printf("Age");
                gotoxy(60,25);
                printf("Gender");
                gotoxy(75,25);
                printf("Address");
                gotoxy(90,25);
                printf("Department");
                gotoxy(110,25);
                printf("Contact_No. ");
                gotoxy(128,25);
                printf("Join_Date");
                printf("\n=========================================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",n.Id);
                gotoxy(25,row);
                printf("%s %s",n.First_Name, n.Last_Name);
                gotoxy(45,row);
                printf("%s",n.Age);
                gotoxy(60,row);
                printf("%s",n.Gender);
                gotoxy(75,row);
                printf("%s",n.Address);
                gotoxy(90,row);
                printf("%s",n.Department);
                gotoxy(110,row);
                printf("%s",n.Contact_Number);
                gotoxy(128,row);
                printf("%s",n.Join_Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",n.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",n.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",n.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",n.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",n.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",n.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",n.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",n.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",n.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("ped_N_record.txt");
        rename("ped_N_temp.txt", "ped_N_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        nurse();
}

void den_N_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("den_N_temp.txt","w+");
	   fptr=fopen("den_N_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Nurse : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
        {
            if(strcmp(n.Id,Id)==0)
            {
                valid =1;
                printf("\n\t\t\t\t\t\t\t***Existing Record***\n");
                gotoxy(10,25);
                printf("ID");
                gotoxy(25,25);
                printf("Full Name");
                gotoxy(45,25);
                printf("Age");
                gotoxy(60,25);
                printf("Gender");
                gotoxy(75,25);
                printf("Address");
                gotoxy(90,25);
                printf("Department");
                gotoxy(110,25);
                printf("Contact_No. ");
                gotoxy(128,25);
                printf("Join_Date");
                printf("\n=========================================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",n.Id);
                gotoxy(25,row);
                printf("%s %s",n.First_Name, n.Last_Name);
                gotoxy(45,row);
                printf("%s",n.Age);
                gotoxy(60,row);
                printf("%s",n.Gender);
                gotoxy(75,row);
                printf("%s",n.Address);
                gotoxy(90,row);
                printf("%s",n.Department);
                gotoxy(110,row);
                printf("%s",n.Contact_Number);
                gotoxy(128,row);
                printf("%s",n.Join_Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",n.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",n.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",n.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",n.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",n.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",n.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",n.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",n.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",n.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("den_N_record.txt");
        rename("den_N_temp.txt", "den_N_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        nurse();
}

void car_N_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("car_N_temp.txt","w+");
	   fptr=fopen("car_N_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Nurse : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
        {
            if(strcmp(n.Id,Id)==0)
            {
                valid =1;
                printf("\n\t\t\t\t\t\t\t***Existing Record***\n");
                gotoxy(10,25);
                printf("ID");
                gotoxy(25,25);
                printf("Full Name");
                gotoxy(45,25);
                printf("Age");
                gotoxy(60,25);
                printf("Gender");
                gotoxy(75,25);
                printf("Address");
                gotoxy(90,25);
                printf("Department");
                gotoxy(110,25);
                printf("Contact_No. ");
                gotoxy(128,25);
                printf("Join_Date");
                printf("\n=========================================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",n.Id);
                gotoxy(25,row);
                printf("%s %s",n.First_Name, n.Last_Name);
                gotoxy(45,row);
                printf("%s",n.Age);
                gotoxy(60,row);
                printf("%s",n.Gender);
                gotoxy(75,row);
                printf("%s",n.Address);
                gotoxy(90,row);
                printf("%s",n.Department);
                gotoxy(110,row);
                printf("%s",n.Contact_Number);
                gotoxy(128,row);
                printf("%s",n.Join_Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",n.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",n.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",n.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",n.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",n.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",n.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",n.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",n.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",n.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("car_N_record.txt");
        rename("car_N_temp.txt", "car_N_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        nurse();
}

void gyn_N_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("gyn_N_temp.txt","w+");
	   fptr=fopen("gyn_N_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Nurse : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
        {
            if(strcmp(n.Id,Id)==0)
            {
                valid =1;
                printf("\n\t\t\t\t\t\t\t***Existing Record***\n");
                gotoxy(10,25);
                printf("ID");
                gotoxy(25,25);
                printf("Full Name");
                gotoxy(45,25);
                printf("Age");
                gotoxy(60,25);
                printf("Gender");
                gotoxy(75,25);
                printf("Address");
                gotoxy(90,25);
                printf("Department");
                gotoxy(110,25);
                printf("Contact_No. ");
                gotoxy(128,25);
                printf("Join_Date");
                printf("\n=========================================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",n.Id);
                gotoxy(25,row);
                printf("%s %s",n.First_Name, n.Last_Name);
                gotoxy(45,row);
                printf("%s",n.Age);
                gotoxy(60,row);
                printf("%s",n.Gender);
                gotoxy(75,row);
                printf("%s",n.Address);
                gotoxy(90,row);
                printf("%s",n.Department);
                gotoxy(110,row);
                printf("%s",n.Contact_Number);
                gotoxy(128,row);
                printf("%s",n.Join_Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",n.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",n.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",n.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",n.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",n.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",n.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",n.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",n.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",n.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("gyn_N_record.txt");
        rename("gyn_N_temp.txt", "gyn_N_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        nurse();
}

void sex_N_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("sex_N_temp.txt","w+");
	   fptr=fopen("sex_N_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Nurse : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
        {
            if(strcmp(n.Id,Id)==0)
            {
                valid =1;
                printf("\n\t\t\t\t\t\t\t***Existing Record***\n");
                gotoxy(10,25);
                printf("ID");
                gotoxy(25,25);
                printf("Full Name");
                gotoxy(45,25);
                printf("Age");
                gotoxy(60,25);
                printf("Gender");
                gotoxy(75,25);
                printf("Address");
                gotoxy(90,25);
                printf("Department");
                gotoxy(110,25);
                printf("Contact_No. ");
                gotoxy(128,25);
                printf("Join_Date");
                printf("\n=========================================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",n.Id);
                gotoxy(25,row);
                printf("%s %s",n.First_Name, n.Last_Name);
                gotoxy(45,row);
                printf("%s",n.Age);
                gotoxy(60,row);
                printf("%s",n.Gender);
                gotoxy(75,row);
                printf("%s",n.Address);
                gotoxy(90,row);
                printf("%s",n.Department);
                gotoxy(110,row);
                printf("%s",n.Contact_Number);
                gotoxy(128,row);
                printf("%s",n.Join_Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",n.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",n.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",n.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",n.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",n.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",n.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",n.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",n.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",n.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("sex_N_record.txt");
        rename("sex_N_temp.txt", "sex_N_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        nurse();
}

void ear_N_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("ear_N_temp.txt","w+");
	   fptr=fopen("ear_N_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Nurse : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
        {
            if(strcmp(n.Id,Id)==0)
            {
                valid =1;
                printf("\n\t\t\t\t\t\t\t***Existing Record***\n");
                gotoxy(10,25);
                printf("ID");
                gotoxy(25,25);
                printf("Full Name");
                gotoxy(45,25);
                printf("Age");
                gotoxy(60,25);
                printf("Gender");
                gotoxy(75,25);
                printf("Address");
                gotoxy(90,25);
                printf("Department");
                gotoxy(110,25);
                printf("Contact_No. ");
                gotoxy(128,25);
                printf("Join_Date");
                printf("\n=========================================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",n.Id);
                gotoxy(25,row);
                printf("%s %s",n.First_Name, n.Last_Name);
                gotoxy(45,row);
                printf("%s",n.Age);
                gotoxy(60,row);
                printf("%s",n.Gender);
                gotoxy(75,row);
                printf("%s",n.Address);
                gotoxy(90,row);
                printf("%s",n.Department);
                gotoxy(110,row);
                printf("%s",n.Contact_Number);
                gotoxy(128,row);
                printf("%s",n.Join_Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",n.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",n.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",n.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",n.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",n.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",n.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",n.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",n.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",n.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("ear_N_record.txt");
        rename("ear_N_temp.txt", "ear_N_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        nurse();
}

void N_Edit_rec()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " NURSE RECORD  ";
    char ch, user[10], pass[10];
    int i = 0, j;
    gotoxy(60, 20);
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    for (j = 0; j < 16; j++){
        delay(50);
        printf("%c", d[j]);
    }
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    printf("\n\n\t\t1. Edit General Surgeon Nurse\n\t\t2. Edit Psychologist Nurse\n\t\t3. Edit Pediatrician Nurse\n\t\t4. Edit Dentist Nurse\n\t\t5. Edit Cardiologist Nurse\n\t\t6. Edit Gynecologist Nurse\n\t\t7. Edit Sexologist Nurse\n\t\t8. Edit Ear And Nose Nurse\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-6): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:general_N_edit();break;
    case 2:phy_N_edit();break;
    case 3:ped_N_edit();break;
    case 4:den_N_edit();break;
    case 5:car_N_edit();break;
    case 6:gyn_N_edit();break;
    case 7:sex_N_edit();break;
    case 8:ear_N_edit();break;
    case 9:nurse();break;
    }
}

void general_N_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("G_N_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		nurse();
		//patient();
        }

        fptr2 = fopen(temp, "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        //file input
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("G_N_record.txt");  		// remove the original file
        rename(temp, "G_N_record.txt"); 	// rename the temporary file to original name
   fptr1=fopen("G_N_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","N_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            nurse();
            //patient();
        fclose(fptr1);
}

void phy_N_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("phy_N_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		nurse();
		//patient();
        }

        fptr2 = fopen(temp, "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        //file input
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("phy_N_record.txt");  		// remove the original file
        rename(temp, "phy_N_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("phy_N_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","N_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            nurse();
            //patient();
        fclose(fptr1);
}

void ped_N_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("ped_N_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		nurse();
		//patient();
        }

        fptr2 = fopen(temp, "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        //file input
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("ped_N_record.txt");  		// remove the original file
        rename(temp, "ped_N_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("ped_N_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","N_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            nurse();
            //patient();
        fclose(fptr1);
}

void den_N_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("den_N_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		nurse();
		//patient();
        }

        fptr2 = fopen(temp, "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        //file input
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("den_N_record.txt");  		// remove the original file
        rename(temp, "den_N_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("den_N_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","N_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            nurse();
            //patient();
        fclose(fptr1);
}

void car_N_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("car_N_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		nurse();
		//patient();
        }

        fptr2 = fopen(temp, "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        //file input
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("car_N_record.txt");  		// remove the original file
        rename(temp, "car_N_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("car_N_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","N_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            nurse();
            //patient();
        fclose(fptr1);
}

void gyn_N_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("gyn_N_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		nurse();
		//patient();
        }

        fptr2 = fopen(temp, "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        //file input
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("gyn_N_record.txt");  		// remove the original file
        rename(temp, "gyn_N_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("gyn_N_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","N_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            nurse();
            //patient();
        fclose(fptr1);
}

void sex_N_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("sex_N_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		nurse();
		//patient();
        }

        fptr2 = fopen(temp, "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        //file input
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("sex_N_record.txt");  		// remove the original file
        rename(temp, "sex_N_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("sex_N_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","N_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            nurse();
            //patient();
        fclose(fptr1);
}

void ear_N_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("ear_N_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		nurse();
		//patient();
        }

        fptr2 = fopen(temp, "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        //file input
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("ear_N_record.txt");  		// remove the original file
        rename(temp, "ear_N_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("ear_N_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","N_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            nurse();
            //patient();
        fclose(fptr1);
}

void N_delt_rec()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " NURSE RECORD  ";
    char ch, user[10], pass[10];
    int i = 0, j;
    gotoxy(60, 20);
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    for (j = 0; j < 16; j++){
        delay(50);
        printf("%c", d[j]);
    }
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    printf("\n\n\t\t1. Delete General Surgeon Nurse\n\t\t2. Delete Psychologist Nurse\n\t\t3. Delete Pediatrician Nurse\n\t\t4. Delete Dentist Nurse\n\t\t5. Delete Cardiologist Nurse\n\t\t6. Delete Gynecologist Nurse\n\t\t7. Delete Sexologist Nurse\n\t\t8. Delete Ear And Nose Nurse\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-6): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:general_N_delt();break;
    case 2:phy_N_delt();break;
    case 3:ped_N_delt();break;
    case 4:den_N_delt();break;
    case 5:car_N_delt();break;
    case 6:gyn_N_delt();break;
    case 7:sex_N_delt();break;
    case 8:ear_N_delt();break;
    case 9:nurse();break;
    }
}

void N_exit(void)
{
    system("cls");
    //Title();
    wellcomeScreen();
    timeScreen();
    printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :):)\n");
    printf("\n\n\t\t\t\tPress Any key for continue...:):)");
    getch();
    adminMenu();
    //patient();

}



void nurse(){
    system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " NURSE RECORD  ";
    char ch, user[10], pass[10];
    int i = 0, j;
    gotoxy(60, 20);
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    for (j = 0; j < 16; j++){
        delay(50);
        printf("%c", d[j]);
    }
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    printf("\n\n\t\t1. Add Nurse Record\n\t\t2. List Nurse Record\n\t\t3. Search Nurse Record\n\t\t4. Edit Nurse Record\n\t\t5. Delete Nurse Record\n\t\t6. Exit\n");
    printf("\n\tEnter your choice(1-6): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:N_add_rec();
        break;
    case 2:
        N_list_rec();
        break;
    case 3:
        N_Search_rec();break;
    case 4:
        N_Edit_rec();break;
    case 5:
        N_delt_rec();break;
    case 6:
        N_exit();break;

    }
}

/*--------------------------------------User-----------------------------------------------*/

void user_general_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("G_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_nurse();
}

void user_phy_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("phy_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_nurse();
}

void user_ped_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ped_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_nurse();
}

void user_den_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("den_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_nurse();
}

void user_car_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("car_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_nurse();
}

void user_gyn_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("gyn_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_nurse();
}

void user_sex_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("sex_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_nurse();
}

void user_ear_N_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ear_N_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Gender");
		gotoxy(75,25);
		printf("Address");
		gotoxy(90,25);
		printf("Department");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Join_Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_nurse();
}

void user_N_list_rec()
{
   system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " NURSE RECORD  ";
    char ch, user[10], pass[10];
    int i = 0, j;
    gotoxy(60, 20);
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    for (j = 0; j < 16; j++){
        delay(50);
        printf("%c", d[j]);
    }
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    printf("\n\n\t\t1. List General Surgeon Nurse\n\t\t2. List Psychologist Nurse\n\t\t3. List Pediatrician Nurse\n\t\t4. List Dentist Nurse\n\t\t5. List Cardiologist Nurse\n\t\t6. List Gynecologist Nurse\n\t\t7. List Sexologist Nurse\n\t\t8. List Ear And Nose Nurse\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-6): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:user_general_N_list();break;
    case 2:user_phy_N_list();break;
    case 3:user_ped_N_list();break;
    case 4:user_den_N_list();break;
    case 5:user_car_N_list();break;
    case 6:user_gyn_N_list();break;
    case 7:user_sex_N_list();break;
    case 8:user_ear_N_list();break;
    case 9:user_nurse();break;
    }
}

void user_general_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("G_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        user_N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_nurse();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void user_phy_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("phy_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	//L:
	//getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        user_N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_nurse();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void user_ped_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ped_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        user_N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_nurse();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void user_den_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("den_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(d.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        user_N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_nurse();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void user_car_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("car_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(d.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        user_N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_nurse();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void user_gyn_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("gyn_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s", n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        user_N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_nurse();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void user_sex_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("sex_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        user_N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_nurse();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void user_ear_N_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ear_N_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Nurse Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Nurse ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", n.Id, n.First_Name, n.Last_Name, n.Age, n.Gender, n.Address, n.Department, n.Contact_Number, n.Join_Date)!=EOF)
	{
		if(strcmp(n.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Gender");
            gotoxy(75,25);
            printf("Address");
            gotoxy(90,25);
            printf("Department");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Join_Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",n.Id);
			gotoxy(25,row);
			printf("%s %s",n.First_Name, n.Last_Name);
			gotoxy(45,row);
			printf("%s",n.Age);
			gotoxy(60,row);
			printf("%s",n.Gender);
			gotoxy(75,row);
			printf("%s",n.Address);
			gotoxy(90,row);
			printf("%s",n.Department);
			gotoxy(110,row);
			printf("%s",n.Contact_Number);
			gotoxy(128,row);
			printf("%s",n.Join_Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(n.Id,b)!=0)
	   {
		gotoxy(25,25);
		printf("Record not found!");
        gotoxy(32,28);
        printf("Press any key to continue.....:)>");
		getch();
	   }
	fclose(fptr);
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (ans=='Y')
    {
        user_N_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_nurse();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void user_N_Search_rec()
{
	system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " NURSE RECORD  ";
    char ch, user[10], pass[10];
    int i = 0, j;
    gotoxy(60, 20);
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    for (j = 0; j < 16; j++){
        delay(50);
        printf("%c", d[j]);
    }
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    printf("\n\n\t\t1. Search General Surgeon Nurse\n\t\t2. Search Psychologist Nurse\n\t\t3. Search Pediatrician Nurse\n\t\t4. Search Dentist Nurse\n\t\t5. Search Cardiologist Nurse\n\t\t6. Search Gynecologist Nurse\n\t\t7. Search Sexologist Nurse\n\t\t8. Search Ear And Nose Nurse\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-6): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:user_general_N_search();break;
    case 2:user_phy_N_search();break;
    case 3:user_ped_N_search();break;
    case 4:user_den_N_search();break;
    case 5:user_car_N_search();break;
    case 6:user_gyn_N_search();break;
    case 7:user_sex_N_search();break;
    case 8:user_ear_N_search();break;
    case 9:user_nurse();break;
    }
}

/*void Userexit(void)
{
    system("cls");
    //Title();
    wellcomeScreen();
    timeScreen();
    printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :):)\n");
    printf("\n\n\t\t\t\tPress Any key for continue...:):)");
    getch();
    userMenu();
    //patient();

}*/

void user_nurse()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " NURSE RECORD  ";
    char ch, user[10], pass[10];
    int i = 0, j;
    gotoxy(60, 20);
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    for (j = 0; j < 16; j++){
        delay(50);
        printf("%c", d[j]);
    }
    for (j = 0; j < 20; j++){
        delay(50);
        printf("\xB2");
    }
    printf("\n\n\t\t1. List Nurse Record\n\t\t2. Search Nurse Record\n\t\t3. Exit\n");
    printf("\n\tEnter your choice(1-3): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:
        user_N_list_rec();break;
    case 2:
       user_N_Search_rec();break;
    case 3:
        Userexit();break;
    default:
        printf("\t\t\t\nInvalid Input\n");

    }
}
