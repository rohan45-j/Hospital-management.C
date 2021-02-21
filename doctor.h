#define MAX 256
int choice,row;
char ans,Id[20],Age[20],Gender[15],First_Name[15], Last_Name[15],Department[50],Contact_Number[15],Address[15],Join_Date[15];
struct doctor
{
    char ans;
    int Age[20];
    char Gender[15],Id[20],First_Name[15], Last_Name[15],Department[50],Contact_Number[15],Address[15],Join_Date[15];
};
struct doctor d, d_temp;

void general_D_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("G_D_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Doctor Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Doctor Id: ");
    scanf("%s", d.Id);
    printf("\n\t\tEnter Doctor First Name: ");
    scanf("%s", d.First_Name);
    printf("\n\t\tEnter Doctor Last Name: ");
    scanf("%s", d.Last_Name);
    printf("\n\t\tEnter Doctor Age: ");
    scanf("%s", d.Age);
    printf("\n\t\tEnter Doctor Gender: ");
    scanf("%s", d.Gender);
    printf("\n\t\tEnter Doctor Address: ");
    scanf("%s", d.Address);
    printf("\n\t\tEnter Doctor Department: ");
    scanf("%s", d.Department);
    printf("\n\t\tEnter Doctor Contact Number: ");
    scanf("%s", d.Contact_Number);
    printf("\n\t\tEnter Doctor Join Date: ");
    scanf("%s",d.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        D_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        doctor();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void phy_D_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("phy_D_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Doctor Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Doctor Id: ");
    scanf("%s", d.Id);
    printf("\n\t\tEnter Doctor First Name: ");
    scanf("%s", d.First_Name);
    printf("\n\t\tEnter Doctor Last Name: ");
    scanf("%s", d.Last_Name);
    printf("\n\t\tEnter Doctor Age: ");
    scanf("%s", d.Age);
    printf("\n\t\tEnter Doctor Gender: ");
    scanf("%s", d.Gender);
    printf("\n\t\tEnter Doctor Address: ");
    scanf("%s", d.Address);
    printf("\n\t\tEnter Doctor Department: ");
    scanf("%s", d.Department);
    printf("\n\t\tEnter Doctor Contact Number: ");
    scanf("%s", d.Contact_Number);
    printf("\n\t\tEnter Doctor Join Date: ");
    scanf("%s",d.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        D_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        doctor();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void ped_D_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("ped_D_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Doctor Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Doctor Id: ");
    scanf("%s", d.Id);
    printf("\n\t\tEnter Doctor First Name: ");
    scanf("%s", d.First_Name);
    printf("\n\t\tEnter Doctor Last Name: ");
    scanf("%s", d.Last_Name);
    printf("\n\t\tEnter Doctor Age: ");
    scanf("%s", d.Age);
    printf("\n\t\tEnter Doctor Gender: ");
    scanf("%s", d.Gender);
    printf("\n\t\tEnter Doctor Address: ");
    scanf("%s", d.Address);
    printf("\n\t\tEnter Doctor Department: ");
    scanf("%s", d.Department);
    printf("\n\t\tEnter Doctor Contact Number: ");
    scanf("%s", d.Contact_Number);
    printf("\n\t\tEnter Doctor Join Date: ");
    scanf("%s",d.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        D_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        doctor();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void den_D_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("den_D_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Doctor Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Doctor Id: ");
    scanf("%s", d.Id);
    printf("\n\t\tEnter Doctor First Name: ");
    scanf("%s", d.First_Name);
    printf("\n\t\tEnter Doctor Last Name: ");
    scanf("%s", d.Last_Name);
    printf("\n\t\tEnter Doctor Age: ");
    scanf("%s", d.Age);
    printf("\n\t\tEnter Doctor Gender: ");
    scanf("%s", d.Gender);
    printf("\n\t\tEnter Doctor Address: ");
    scanf("%s", d.Address);
    printf("\n\t\tEnter Doctor Department: ");
    scanf("%s", d.Department);
    printf("\n\t\tEnter Doctor Contact Number: ");
    scanf("%s", d.Contact_Number);
    printf("\n\t\tEnter Doctor Join Date: ");
    scanf("%s",d.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        D_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        doctor();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void car_D_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("car_D_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Doctor Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Doctor Id: ");
    scanf("%s", d.Id);
    printf("\n\t\tEnter Doctor First Name: ");
    scanf("%s", d.First_Name);
    printf("\n\t\tEnter Doctor Last Name: ");
    scanf("%s", d.Last_Name);
    printf("\n\t\tEnter Doctor Age: ");
    scanf("%s", d.Age);
    printf("\n\t\tEnter Doctor Gender: ");
    scanf("%s", d.Gender);
    printf("\n\t\tEnter Doctor Address: ");
    scanf("%s", d.Address);
    printf("\n\t\tEnter Doctor Department: ");
    scanf("%s", d.Department);
    printf("\n\t\tEnter Doctor Contact Number: ");
    scanf("%s", d.Contact_Number);
    printf("\n\t\tEnter Doctor Join Date: ");
    scanf("%s",d.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        D_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        doctor();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void gyn_D_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("gyn_D_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Doctor Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Doctor Id: ");
    scanf("%s", d.Id);
    printf("\n\t\tEnter Doctor First Name: ");
    scanf("%s", d.First_Name);
    printf("\n\t\tEnter Doctor Last Name: ");
    scanf("%s", d.Last_Name);
    printf("\n\t\tEnter Doctor Age: ");
    scanf("%s", d.Age);
    printf("\n\t\tEnter Doctor Gender: ");
    scanf("%s", d.Gender);
    printf("\n\t\tEnter Doctor Address: ");
    scanf("%s", d.Address);
    printf("\n\t\tEnter Doctor Department: ");
    scanf("%s", d.Department);
    printf("\n\t\tEnter Doctor Contact Number: ");
    scanf("%s", d.Contact_Number);
    printf("\n\t\tEnter Doctor Join Date: ");
    scanf("%s",d.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        D_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        doctor();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void sex_D_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("sex_D_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Doctor Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Doctor Id: ");
    scanf("%s", d.Id);
    printf("\n\t\tEnter Doctor First Name: ");
    scanf("%s", d.First_Name);
    printf("\n\t\tEnter Doctor Last Name: ");
    scanf("%s", d.Last_Name);
    printf("\n\t\tEnter Doctor Age: ");
    scanf("%s", d.Age);
    printf("\n\t\tEnter Doctor Gender: ");
    scanf("%s", d.Gender);
    printf("\n\t\tEnter Doctor Address: ");
    scanf("%s", d.Address);
    printf("\n\t\tEnter Doctor Department: ");
    scanf("%s", d.Department);
    printf("\n\t\tEnter Doctor Contact Number: ");
    scanf("%s", d.Contact_Number);
    printf("\n\t\tEnter Doctor Join Date: ");
    scanf("%s",d.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        D_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        doctor();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void ear_D_add()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("ear_D_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Doctor Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Doctor Id: ");
    scanf("%s", d.Id);
    printf("\n\t\tEnter Doctor First Name: ");
    scanf("%s", d.First_Name);
    printf("\n\t\tEnter Doctor Last Name: ");
    scanf("%s", d.Last_Name);
    printf("\n\t\tEnter Doctor Age: ");
    scanf("%s", d.Age);
    printf("\n\t\tEnter Doctor Gender: ");
    scanf("%s", d.Gender);
    printf("\n\t\tEnter Doctor Address: ");
    scanf("%s", d.Address);
    printf("\n\t\tEnter Doctor Department: ");
    scanf("%s", d.Department);
    printf("\n\t\tEnter Doctor Contact Number: ");
    scanf("%s", d.Contact_Number);
    printf("\n\t\tEnter Doctor Join Date: ");
    scanf("%s",d.Join_Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        D_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        //patient();
        doctor();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void D_add_rec()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " DOCTOR RECORD  ";
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
    printf("\n\n\t\t1. Add General Surgeon Doctor's\n\t\t2. Add Psychologist Doctor's\n\t\t3. Add Pediatrician Doctor's\n\t\t4. Add Dentist Doctor's\n\t\t5. Add Cardiologist Doctor's\n\t\t6. Add Gynecologist Doctor's\n\t\t7. Add Sexologist Doctor's\n\t\t8. Add Ear And Nose Doctor's\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:general_D_add();break;
    case 2:phy_D_add();break;
    case 3:ped_D_add();break;
    case 4:den_D_add();break;
    case 5:car_D_add();break;
    case 6:gyn_D_add();break;
    case 7:sex_D_add();break;
    case 8:ear_D_add();break;
    case 9:doctor();break;
    }
}

void general_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("G_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		doctor();
}

void phy_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("phy_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		doctor();
}

void ped_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ped_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		doctor();
}

void den_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("den_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		doctor();
}

void car_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("car_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		doctor();
}

void gyn_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("gyn_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		doctor();
}

void sex_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("sex_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		doctor();
}

void ear_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ear_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		doctor();
}

void D_list_rec()
{
   system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " DOCTOR RECORD  ";
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
    printf("\n\n\t\t1. List General Surgeon Doctor's\n\t\t2. List Psychologist Doctor's\n\t\t3. List Pediatrician Doctor's\n\t\t4. List Dentist Doctor's\n\t\t5. List Cardiologist Doctor's\n\t\t6. List Gynecologist Doctor's\n\t\t7. List Sexologist Doctor's\n\t\t8. List Ear And Nose Doctor's\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:general_D_list();break;
    case 2:phy_D_list();break;
    case 3:ped_D_list();break;
    case 4:den_D_list();break;
    case 5:car_D_list();break;
    case 6:gyn_D_list();break;
    case 7:sex_D_list();break;
    case 8:ear_D_list();break;
    case 9:doctor();break;
    }
}

void general_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("G_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
	   if(strcmp(d.Id,b)!=0)
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
        D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	doctor();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	//goto L;
    }
}

void phy_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("phy_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
	   if(strcmp(d.Id,b)!=0)
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
        D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	doctor();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void ped_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ped_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	doctor();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void den_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("den_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	doctor();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void car_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("car_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	doctor();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void gyn_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("gyn_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	doctor();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void sex_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("sex_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	doctor();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void ear_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ear_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	doctor();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void D_Search_rec()
{
	system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " DOCTOR RECORD  ";
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
    printf("\n\n\t\t1. Search General Surgeon Doctor's\n\t\t2. Search Psychologist Doctor's\n\t\t3. Search Pediatrician Doctor's\n\t\t4. Search Dentist Doctor's\n\t\t5. Search Cardiologist Doctor's\n\t\t6. Search Gynecologist Doctor's\n\t\t7. Search Sexologist Doctor's\n\t\t8. Search Ear And Nose Doctor's\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:general_D_search();break;
    case 2:phy_D_search();break;
    case 3:ped_D_search();break;
    case 4:den_D_search();break;
    case 5:car_D_search();break;
    case 6:gyn_D_search();break;
    case 7:sex_D_search();break;
    case 8:ear_D_search();break;
    case 9:doctor();break;
    }
}

void general_D_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("G_D_temp.txt","w+");
	   fptr=fopen("G_D_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Doctor's Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Doctor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
        {
            if(strcmp(d.Id,Id)==0)
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
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",d.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",d.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",d.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",d.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",d.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",d.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",d.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",d.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",d.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("G_D_record.txt");
        rename("G_D_temp.txt", "G_D_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        doctor();
}

void phy_D_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("phy_D_temp.txt","w+");
	   fptr=fopen("phy_D_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Doctor's Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Doctor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
        {
            if(strcmp(d.Id,Id)==0)
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
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",d.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",d.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",d.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",d.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",d.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",d.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",d.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",d.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",d.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("phy_D_record.txt");
        rename("phy_D_temp.txt", "phy_D_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        doctor();
}

void ped_D_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("ped_D_temp.txt","w+");
	   fptr=fopen("ped_D_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Doctor's Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Doctor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
        {
            if(strcmp(d.Id,Id)==0)
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
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",d.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",d.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",d.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",d.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",d.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",d.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",d.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",d.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",d.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("ped_D_record.txt");
        rename("ped_D_temp.txt", "ped_D_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        doctor();
}

void den_D_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("den_D_temp.txt","w+");
	   fptr=fopen("den_D_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Doctor's Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Doctor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
        {
            if(strcmp(d.Id,Id)==0)
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
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",d.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",d.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",d.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",d.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",d.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",d.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",d.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",d.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",d.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("den_D_record.txt");
        rename("den_D_temp.txt", "den_D_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        doctor();
}

void car_D_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("car_D_temp.txt","w+");
	   fptr=fopen("car_D_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Doctor's Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Doctor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
        {
            if(strcmp(d.Id,Id)==0)
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
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",d.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",d.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",d.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",d.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",d.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",d.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",d.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",d.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",d.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("car_D_record.txt");
        rename("car_D_temp.txt", "car_D_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        doctor();
}

void gyn_D_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("gyn_D_temp.txt","w+");
	   fptr=fopen("gyn_D_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Doctor's Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Doctor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
        {
            if(strcmp(d.Id,Id)==0)
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
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",d.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",d.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",d.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",d.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",d.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",d.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",d.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",d.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",d.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("gyn_D_record.txt");
        rename("gyn_D_temp.txt", "gyn_D_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        doctor();
}

void sex_D_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("sex_D_temp.txt","w+");
	   fptr=fopen("sex_D_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Doctor's Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Doctor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
        {
            if(strcmp(d.Id,Id)==0)
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
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",d.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",d.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",d.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",d.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",d.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",d.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",d.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",d.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",d.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("sex_D_record.txt");
        rename("sex_D_temp.txt", "sex_D_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        doctor();
}

void ear_D_edit()
{
    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    wellcomeScreen();
    timeScreen();
 		ft=fopen("ear_D_temp.txt","w+");
	   fptr=fopen("ear_D_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Doctor's Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Doctor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
        {
            if(strcmp(d.Id,Id)==0)
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
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",d.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",d.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",d.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",d.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",d.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",d.Address);
                printf("\n\t\t\t\t\tEnter New Department: ");
                scanf("%s",d.Department);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",d.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Join_Date: ");
                scanf("%s",d.Join_Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("ear_D_record.txt");
        rename("ear_D_temp.txt", "ear_D_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        doctor();
}

void D_Edit_rec()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " DOCTOR RECORD  ";
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
    printf("\n\n\t\t1. Edit General Surgeon Doctor's\n\t\t2. Edit Psychologist Doctor's\n\t\t3. Edit Pediatrician Doctor's\n\t\t4. Edit Dentist Doctor's\n\t\t5. Edit Cardiologist Doctor's\n\t\t6. Edit Gynecologist Doctor's\n\t\t7. Edit Sexologist Doctor's\n\t\t8. Edit Ear And Nose Doctor's\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:general_D_edit();break;
    case 2:phy_D_edit();break;
    case 3:ped_D_edit();break;
    case 4:den_D_edit();break;
    case 5:car_D_edit();break;
    case 6:gyn_D_edit();break;
    case 7:sex_D_edit();break;
    case 8:ear_D_edit();break;
    case 9:doctor();break;
    }
}

void general_D_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("G_D_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		doctor();
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
        remove("G_D_record.txt");  		// remove the original file
        rename(temp, "G_D_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("G_D_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","D_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            doctor();
            //patient();
        fclose(fptr1);
}

void phy_D_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("phy_D_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		doctor();
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
        remove("phy_D_record.txt");  		// remove the original file
        rename(temp, "phy_D_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("phy_D_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","D_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            doctor();
            //patient();
        fclose(fptr1);
}

void ped_D_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("ped_D_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		doctor();
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
        remove("ped_D_record.txt");  		// remove the original file
        rename(temp, "ped_D_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("ped_D_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","D_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            doctor();
            //patient();
        fclose(fptr1);
}

void den_D_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("den_D_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		doctor();
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
        remove("den_D_record.txt");  		// remove the original file
        rename(temp, "den_D_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("den_D_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","D_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            doctor();
            //patient();
        fclose(fptr1);
}

void car_D_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("car_D_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		doctor();
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
        remove("car_D_record.txt");  		// remove the original file
        rename(temp, "car_D_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("car_D_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","D_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            doctor();
            //patient();
        fclose(fptr1);
}

void gyn_D_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("gyn_D_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		doctor();
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
        remove("gyn_D_record.txt");  		// remove the original file
        rename(temp, "gyn_D_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("gyn_D_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","D_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            doctor();
            //patient();
        fclose(fptr1);
}

void sex_D_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("sex_D_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		doctor();
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
        remove("sex_D_record.txt");  		// remove the original file
        rename(temp, "sex_D_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("sex_D_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","D_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            doctor();
            //patient();
        fclose(fptr1);
}

void ear_D_delt()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("ear_D_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		doctor();
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
        remove("ear_D_record.txt");  		// remove the original file
        rename(temp, "ear_D_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("ear_D_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","D_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            doctor();
            //patient();
        fclose(fptr1);
}

void D_delt_rec()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " DOCTOR RECORD  ";
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
    printf("\n\n\t\t1. Delete General Surgeon Doctor's\n\t\t2. Delete Psychologist Doctor's\n\t\t3. Delete Pediatrician Doctor's\n\t\t4. Delete Dentist Doctor's\n\t\t5. Delete Cardiologist Doctor's\n\t\t6. Delete Gynecologist Doctor's\n\t\t7. Delete Sexologist Doctor's\n\t\t8. Delete Ear And Nose Doctor's\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:general_D_delt();break;
    case 2:phy_D_delt();break;
    case 3:ped_D_delt();break;
    case 4:den_D_delt();break;
    case 5:car_D_delt();break;
    case 6:gyn_D_delt();break;
    case 7:sex_D_delt();break;
    case 8:ear_D_delt();break;
    case 9:doctor();break;
    }
}

void D_exit(void)
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



void doctor(){
    system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " DOCTOR RECORD  ";
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
    printf("\n\n\t\t1. Add Doctor's Record\n\t\t2. List Doctor's Record\n\t\t3. Search Doctor's Record\n\t\t4. Edit Doctor's Record\n\t\t5. Delete Doctor's Record\n\t\t6. Exit\n");
    printf("\n\tEnter your choice(1-6): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:
        D_add_rec();
        break;
    case 2:
        D_list_rec();
        break;
    case 3:
        D_Search_rec();break;
    case 4:
        D_Edit_rec();break;
    case 5:
        D_delt_rec();break;
    case 6:
        D_exit();break;

    }
}

/*--------------------------------------User-----------------------------------------------*/

void user_general_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("G_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		user_doctor();
}

void user_phy_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("phy_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		user_doctor();
}

void user_ped_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ped_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		user_doctor();
}

void user_den_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("den_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		user_doctor();
}

void user_car_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("car_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		user_doctor();
}

void user_gyn_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("gyn_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		user_doctor();
}

void user_sex_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("sex_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		user_doctor();
}

void user_ear_D_list()
{
    int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ear_D_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
		{
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
			row++;
		}
		fclose(fptr);
		getch();
		user_doctor();
}

void user_D_list_rec()
{
   system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " DOCTOR RECORD  ";
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
    printf("\n\n\t\t1. List General Surgeon Doctor's\n\t\t2. List Psychologist Doctor's\n\t\t3. List Pediatrician Doctor's\n\t\t4. List Dentist Doctor's\n\t\t5. List Cardiologist Doctor's\n\t\t6. List Gynecologist Doctor's\n\t\t7. List Sexologist Doctor's\n\t\t8. List Ear And Nose Doctor's\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:user_general_D_list();break;
    case 2:user_phy_D_list();break;
    case 3:user_ped_D_list();break;
    case 4:user_den_D_list();break;
    case 5:user_car_D_list();break;
    case 6:user_gyn_D_list();break;
    case 7:user_sex_D_list();break;
    case 8:user_ear_D_list();break;
    case 9:user_doctor();break;
    }
}

void user_general_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("G_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        user_D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_doctor();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void user_phy_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("phy_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
	   if(strcmp(d.Id,b)!=0)
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
        user_D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_doctor();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void user_ped_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ped_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        user_D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_doctor();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void user_den_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("den_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        user_D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_doctor();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void user_car_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("car_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        user_D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_doctor();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void user_gyn_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("gyn_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        user_D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_doctor();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void user_sex_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("sex_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        user_D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_doctor();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void user_ear_D_search()
{
    char b[20]; int row;
	system("cls");
	wellcomeScreen();
	timeScreen();
	FILE *fptr;
	fptr=fopen("ear_D_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Doctor Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Doctor ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", d.Id, d.First_Name, d.Last_Name, d.Age, d.Gender, d.Address, d.Department, d.Contact_Number, d.Join_Date)!=EOF)
	{
		if(strcmp(d.Id,b)==0)
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
        user_D_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_doctor();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

void user_D_Search_rec()
{
	system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " DOCTOR RECORD  ";
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
    printf("\n\n\t\t1. Search General Surgeon Doctor's\n\t\t2. Search Psychologist Doctor's\n\t\t3. Search Pediatrician Doctor's\n\t\t4. Search Dentist Doctor's\n\t\t5. Search Cardiologist Doctor's\n\t\t6. Search Gynecologist Doctor's\n\t\t7. Search Sexologist Doctor's\n\t\t8. Search Ear And Nose Doctor's\n\t\t9. Exit\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:user_general_D_search();break;
    case 2:user_phy_D_search();break;
    case 3:user_ped_D_search();break;
    case 4:user_den_D_search();break;
    case 5:user_car_D_search();break;
    case 6:user_gyn_D_search();break;
    case 7:user_sex_D_search();break;
    case 8:user_ear_D_search();break;
    case 9:user_doctor();break;
    }
}

void Userexit(void)
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

}

void user_doctor()
{
    system("cls");
    wellcomeScreen();
    timeScreen();
    char d[25] = " DOCTOR RECORD  ";
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
    printf("\n\n\t\t1. List Doctor's Record\n\t\t2. Search Doctor's Record\n\t\t3. Exit\n");
    printf("\n\tEnter your choice(1-3): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:
        user_D_list_rec();break;
    case 2:
       user_D_Search_rec();break;
    case 3:
        Userexit();break;
    default:
        printf("\t\t\t\nInvalid Input\n");

    }
}
