#define MAX 256
int choice,row;
char ans,Id[20],Age[20],Gender[15],First_Name[15], Last_Name[15],Contact_Number[15],Address[15],Date[15];
struct blood
{
    char ans;
    int Age[20];
    char Gender[15],Id[20],First_Name[15], Last_Name[15],Contact_Number[15],Address[15],Date[15];
};
struct blood b, b_temp;

void AP_add()
{
    system("cls");
    fixed();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("Blood_A+_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return 0;
    }
    printf("\n\n\n\t\tEnter Donor Id: ");
    scanf("%s", b.Id);
    printf("\n\t\tEnter Donor First Name: ");
    scanf("%s", b.First_Name);
    printf("\n\t\tEnter Donor Last Name: ");
    scanf("%s", b.Last_Name);
    printf("\n\t\tEnter Donor Age: ");
    scanf("%s", b.Age);
    printf("\n\t\tEnter Donor Gender: ");
    scanf("%s", b.Gender);
    printf("\n\t\tEnter Donor Address: ");
    scanf("%s", b.Address);
    printf("\n\t\tEnter Donor Contact Number: ");
    scanf("%s", b.Contact_Number);
    printf("\n\t\tEnter Date: ");
    scanf("%s",b.Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        blood_add();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        blood();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void AN_add()
{
    system("cls");
    fixed();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("Blood_A-_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Donor Id: ");
    scanf("%s", b.Id);
    printf("\n\t\tEnter Donor First Name: ");
    scanf("%s", b.First_Name);
    printf("\n\t\tEnter Donor Last Name: ");
    scanf("%s", b.Last_Name);
    printf("\n\t\tEnter Donor Age: ");
    scanf("%s", b.Age);
    printf("\n\t\tEnter Donor Gender: ");
    scanf("%s", b.Gender);
    printf("\n\t\tEnter Donor Address: ");
    scanf("%s", b.Address);
    printf("\n\t\tEnter Donor Contact Number: ");
    scanf("%s", b.Contact_Number);
    printf("\n\t\tEnter Date: ");
    scanf("%s",b.Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        blood_add();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        blood();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void BP_add()
{
    system("cls");
    fixed();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("Blood_B+_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Donor Id: ");
    scanf("%s", b.Id);
    printf("\n\t\tEnter Donor First Name: ");
    scanf("%s", b.First_Name);
    printf("\n\t\tEnter Donor Last Name: ");
    scanf("%s", b.Last_Name);
    printf("\n\t\tEnter Donor Age: ");
    scanf("%s", b.Age);
    printf("\n\t\tEnter Donor Gender: ");
    scanf("%s", b.Gender);
    printf("\n\t\tEnter Donor Address: ");
    scanf("%s", b.Address);
    printf("\n\t\tEnter Donor Contact Number: ");
    scanf("%s", b.Contact_Number);
    printf("\n\t\tEnter Date: ");
    scanf("%s",b.Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        blood_add();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        blood();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void BN_add()
{
    system("cls");
    fixed();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("Blood_B-_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Donor Id: ");
    scanf("%s", b.Id);
    printf("\n\t\tEnter Donor First Name: ");
    scanf("%s", b.First_Name);
    printf("\n\t\tEnter Donor Last Name: ");
    scanf("%s", b.Last_Name);
    printf("\n\t\tEnter Donor Age: ");
    scanf("%s", b.Age);
    printf("\n\t\tEnter Donor Gender: ");
    scanf("%s", b.Gender);
    printf("\n\t\tEnter Donor Address: ");
    scanf("%s", b.Address);
    printf("\n\t\tEnter Donor Contact Number: ");
    scanf("%s", b.Contact_Number);
    printf("\n\t\tEnter Date: ");
    scanf("%s",b.Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        blood_add();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        blood();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void ABP_add()
{
    system("cls");
    fixed();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("Blood_AB+_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Donor Id: ");
    scanf("%s", b.Id);
    printf("\n\t\tEnter Donor First Name: ");
    scanf("%s", b.First_Name);
    printf("\n\t\tEnter Donor Last Name: ");
    scanf("%s", b.Last_Name);
    printf("\n\t\tEnter Donor Age: ");
    scanf("%s", b.Age);
    printf("\n\t\tEnter Donor Gender: ");
    scanf("%s", b.Gender);
    printf("\n\t\tEnter Donor Address: ");
    scanf("%s", b.Address);
    printf("\n\t\tEnter Donor Contact Number: ");
    scanf("%s", b.Contact_Number);
    printf("\n\t\tEnter Date: ");
    scanf("%s",b.Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        blood_add();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        blood();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void ABN_add()
{
    system("cls");
    fixed();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("Blood_AB-_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Donor Id: ");
    scanf("%s", b.Id);
    printf("\n\t\tEnter Donor First Name: ");
    scanf("%s", b.First_Name);
    printf("\n\t\tEnter Donor Last Name: ");
    scanf("%s", b.Last_Name);
    printf("\n\t\tEnter Donor Age: ");
    scanf("%s", b.Age);
    printf("\n\t\tEnter Donor Gender: ");
    scanf("%s", b.Gender);
    printf("\n\t\tEnter Donor Address: ");
    scanf("%s", b.Address);
    printf("\n\t\tEnter Donor Contact Number: ");
    scanf("%s", b.Contact_Number);
    printf("\n\t\tEnter Date: ");
    scanf("%s",b.Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        blood_add();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        blood();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void OP_add()
{
    system("cls");
    fixed();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("Blood_O+_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Donor Id: ");
    scanf("%s", b.Id);
    printf("\n\t\tEnter Donor First Name: ");
    scanf("%s", b.First_Name);
    printf("\n\t\tEnter Donor Last Name: ");
    scanf("%s", b.Last_Name);
    printf("\n\t\tEnter Donor Age: ");
    scanf("%s", b.Age);
    printf("\n\t\tEnter Donor Gender: ");
    scanf("%s", b.Gender);
    printf("\n\t\tEnter Donor Address: ");
    scanf("%s", b.Address);
    printf("\n\t\tEnter Donor Contact Number: ");
    scanf("%s", b.Contact_Number);
    printf("\n\t\tEnter Date: ");
    scanf("%s",b.Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        blood_add();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        blood();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void ON_add()
{
    system("cls");
    fixed();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("Blood_O-_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Add Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Donor Id: ");
    scanf("%s", b.Id);
    printf("\n\t\tEnter Donor First Name: ");
    scanf("%s", b.First_Name);
    printf("\n\t\tEnter Donor Last Name: ");
    scanf("%s", b.Last_Name);
    printf("\n\t\tEnter Donor Age: ");
    scanf("%s", b.Age);
    printf("\n\t\tEnter Donor Gender: ");
    scanf("%s", b.Gender);
    printf("\n\t\tEnter Donor Address: ");
    scanf("%s", b.Address);
    printf("\n\t\tEnter Donor Contact Number: ");
    scanf("%s", b.Contact_Number);
    printf("\n\t\tEnter Date: ");
    scanf("%s",b.Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        blood_add();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        blood();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void blood_add()
{
    system("cls");
    fixed();
    char d[25] = " BLOOD ADD RECORD  ";
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

    printf("\n\n\t\t1. Add A+ Blood\n\t\t2. Add A- Blood\n\t\t3. Add B+ Blood\n\t\t4. Add B- Blood\n\t\t5. Add AB+ Blood\n\t\t6. Add AB- Blood\n\t\t7. Add O+ Blood\n\t\t8. Add O- Blood\n\t\t9. Exit\n\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:AP_add();break;
    case 2:AN_add();break;
    case 3:BP_add();break;
    case 4:BN_add();break;
    case 5:ABP_add();break;
    case 6:ABN_add();break;
    case 7:OP_add();break;
    case 8:ON_add();break;
    case 9:blood();break;
    }

}

void AP_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_A+_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		blood();
}

void AN_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_A-_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		blood();
}

void BP_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_B+_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		blood();
}

void BN_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_B-_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		blood();
}

void ABP_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_AB+_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		blood();
}

void ABN_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_AB-_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		blood();
}

void OP_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_O+_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		blood();
}

void ON_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_O-_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		blood();
}

void blood_list()
{
    system("cls");
    fixed();
    char d[25] = " BLOOD RECORD  ";
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

    printf("\n\n\t\t1. A+ Blood List\n\t\t2. A- Blood List\n\t\t3. B+ Blood List\n\t\t4. B- Blood List\n\t\t5. AB+ Blood List\n\t\t6. AB- Blood List\n\t\t7. O+ Blood List\n\t\t8. O- Blood List\n\t\t9. Exit\n\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:AP_list();break;
    case 2:AN_list();break;
    case 3:BP_list();break;
    case 4:BN_list();break;
    case 5:ABP_list();break;
    case 6:ABN_list();break;
    case 7:OP_list();break;
    case 8:ON_list();break;
    case 9:blood();break;
    }

}

void AP_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_A+_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        blood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void AN_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_A-_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        blood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void BP_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_B+_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        blood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void BN_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_B-_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        blood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void ABP_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_AB+_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        blood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}
void ABN_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_AB-_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        blood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void OP_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_O+_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        blood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void ON_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_O-_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        blood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void blood_Search()
{
    system("cls");
    fixed();
    char d[25] = " BLOOD RECORD  ";
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

    printf("\n\n\t\t1. Search A+ Blood\n\t\t2. Search A- Blood\n\t\t3. Search B+ Blood\n\t\t4. Search B- Blood\n\t\t5. Search AB+ Blood\n\t\t6. Search AB- Blood\n\t\t7. Search O+ Blood\n\t\t8. Search O- Blood\n\t\t9. Exit\n\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:AP_search();break;
    case 2:AN_search();break;
    case 3:BP_search();break;
    case 4:BN_search();break;
    case 5:ABP_search();break;
    case 6:ABN_search();break;
    case 7:OP_search();break;
    case 8:ON_search();break;
    case 9:blood();break;
    }

}

void AP_edit()
{
    FILE *fptr;
    FILE *ft;
    int i, valid=0;
    char ch;
    char Id[20];

    system("cls");
    fixed();
 		ft=fopen("Blood_A+_temp.txt","w+");
	   fptr=fopen("Blood_A+_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Blood Donor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
        {
            if(strcmp(b.Id,Id)==0)
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
                printf("Contact_No. ");
                gotoxy(110,25);
                printf("Date");
                printf("\n===============================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",b.Id);
                gotoxy(25,row);
                printf("%s %s",b.First_Name, b.Last_Name);
                gotoxy(45,row);
                printf("%s",b.Age);
                gotoxy(60,row);
                printf("%s",b.Gender);
                gotoxy(75,row);
                printf("%s",b.Address);
                gotoxy(90,row);
                printf("%s",b.Contact_Number);
                gotoxy(110,row);
                printf("%s",b.Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",b.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",b.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",b.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",b.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",b.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",b.Address);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",b.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Date: ");
                scanf("%s",b.Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("Blood_A+_record.txt");
        rename("Blood_A+_temp.txt", "Blood_A+_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        blood();
}

void AN_edit()
{
    FILE *fptr;
    FILE *ft;
    int i, valid=0;
    char ch;
    char Id[20];

    system("cls");
    fixed();
 		ft=fopen("Blood_A-_temp.txt","w+");
	   fptr=fopen("Blood_A-_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Blood Donor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
        {
            if(strcmp(b.Id,Id)==0)
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
                printf("Contact_No. ");
                gotoxy(110,25);
                printf("Date");
                printf("\n===============================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",b.Id);
                gotoxy(25,row);
                printf("%s %s",b.First_Name, b.Last_Name);
                gotoxy(45,row);
                printf("%s",b.Age);
                gotoxy(60,row);
                printf("%s",b.Gender);
                gotoxy(75,row);
                printf("%s",b.Address);
                gotoxy(90,row);
                printf("%s",b.Contact_Number);
                gotoxy(110,row);
                printf("%s",b.Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",b.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",b.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",b.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",b.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",b.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",b.Address);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",b.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Date: ");
                scanf("%s",b.Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("Blood_A-_record.txt");
        rename("Blood_A-_temp.txt", "Blood_A-_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        blood();
}

void BP_edit()
{
    FILE *fptr;
    FILE *ft;
    int i, valid=0;
    char ch;
    char Id[20];

    system("cls");
    fixed();
 		ft=fopen("Blood_B+_temp.txt","w+");
	   fptr=fopen("Blood_B+_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Blood Donor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
        {
            if(strcmp(b.Id,Id)==0)
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
                printf("Contact_No. ");
                gotoxy(110,25);
                printf("Date");
                printf("\n===============================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",b.Id);
                gotoxy(25,row);
                printf("%s %s",b.First_Name, b.Last_Name);
                gotoxy(45,row);
                printf("%s",b.Age);
                gotoxy(60,row);
                printf("%s",b.Gender);
                gotoxy(75,row);
                printf("%s",b.Address);
                gotoxy(90,row);
                printf("%s",b.Contact_Number);
                gotoxy(110,row);
                printf("%s",b.Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",b.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",b.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",b.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",b.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",b.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",b.Address);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",b.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Date: ");
                scanf("%s",b.Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("Blood_B+_record.txt");
        rename("Blood_B+_temp.txt", "Blood_B+_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        blood();
}

void BN_edit()
{
    FILE *fptr;
    FILE *ft;
    int i, valid=0;
    char ch;
    char Id[20];

    system("cls");
    fixed();
 		ft=fopen("Blood_B-_temp.txt","w+");
	   fptr=fopen("Blood_B-_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Blood Donor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
        {
            if(strcmp(b.Id,Id)==0)
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
                printf("Contact_No. ");
                gotoxy(110,25);
                printf("Date");
                printf("\n===============================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",b.Id);
                gotoxy(25,row);
                printf("%s %s",b.First_Name, b.Last_Name);
                gotoxy(45,row);
                printf("%s",b.Age);
                gotoxy(60,row);
                printf("%s",b.Gender);
                gotoxy(75,row);
                printf("%s",b.Address);
                gotoxy(90,row);
                printf("%s",b.Contact_Number);
                gotoxy(110,row);
                printf("%s",b.Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",b.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",b.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",b.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",b.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",b.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",b.Address);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",b.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Date: ");
                scanf("%s",b.Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("Blood_B-_record.txt");
        rename("Blood_B-_temp.txt", "Blood_B-_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        blood();
}

void ABP_edit()
{
    FILE *fptr;
    FILE *ft;
    int i, valid=0;
    char ch;
    char Id[20];

    system("cls");
    fixed();
 		ft=fopen("Blood_AB+_temp.txt","w+");
	   fptr=fopen("Blood_AB+_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Blood Donor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
        {
            if(strcmp(b.Id,Id)==0)
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
                printf("Contact_No. ");
                gotoxy(110,25);
                printf("Date");
                printf("\n===============================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",b.Id);
                gotoxy(25,row);
                printf("%s %s",b.First_Name, b.Last_Name);
                gotoxy(45,row);
                printf("%s",b.Age);
                gotoxy(60,row);
                printf("%s",b.Gender);
                gotoxy(75,row);
                printf("%s",b.Address);
                gotoxy(90,row);
                printf("%s",b.Contact_Number);
                gotoxy(110,row);
                printf("%s",b.Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",b.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",b.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",b.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",b.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",b.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",b.Address);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",b.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Date: ");
                scanf("%s",b.Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("Blood_AB+_record.txt");
        rename("Blood_AB+_temp.txt", "Blood_AB+_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        blood();
}

void ABN_edit()
{
    FILE *fptr;
    FILE *ft;
    int i, valid=0;
    char ch;
    char Id[20];

    system("cls");
    fixed();
 		ft=fopen("Blood_AB-_temp.txt","w+");
	   fptr=fopen("Blood_AB-_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Blood Donor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
        {
            if(strcmp(b.Id,Id)==0)
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
                printf("Contact_No. ");
                gotoxy(110,25);
                printf("Date");
                printf("\n===============================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",b.Id);
                gotoxy(25,row);
                printf("%s %s",b.First_Name, b.Last_Name);
                gotoxy(45,row);
                printf("%s",b.Age);
                gotoxy(60,row);
                printf("%s",b.Gender);
                gotoxy(75,row);
                printf("%s",b.Address);
                gotoxy(90,row);
                printf("%s",b.Contact_Number);
                gotoxy(110,row);
                printf("%s",b.Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",b.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",b.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",b.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",b.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",b.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",b.Address);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",b.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Date: ");
                scanf("%s",b.Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("Blood_AB-_record.txt");
        rename("Blood_AB-_temp.txt", "Blood_AB-_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        blood();
}

void OP_edit()
{
    FILE *fptr;
    FILE *ft;
    int i, valid=0;
    char ch;
    char Id[20];

    system("cls");
    fixed();
 		ft=fopen("Blood_O+_temp.txt","w+");
	   fptr=fopen("Blood_O+_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Blood Donor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
        {
            if(strcmp(b.Id,Id)==0)
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
                printf("Contact_No. ");
                gotoxy(110,25);
                printf("Date");
                printf("\n===============================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",b.Id);
                gotoxy(25,row);
                printf("%s %s",b.First_Name, b.Last_Name);
                gotoxy(45,row);
                printf("%s",b.Age);
                gotoxy(60,row);
                printf("%s",b.Gender);
                gotoxy(75,row);
                printf("%s",b.Address);
                gotoxy(90,row);
                printf("%s",b.Contact_Number);
                gotoxy(110,row);
                printf("%s",b.Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",b.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",b.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",b.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",b.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",b.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",b.Address);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",b.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Date: ");
                scanf("%s",b.Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("Blood_O+_record.txt");
        rename("Blood_O+_temp.txt", "Blood_O+_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        blood();
}

void ON_edit()
{
    FILE *fptr;
    FILE *ft;
    int i, valid=0;
    char ch;
    char Id[20];

    system("cls");
    fixed();
 		ft=fopen("Blood_O-_temp.txt","w+");
	   fptr=fopen("Blood_O-_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Blood Donor : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
        {
            if(strcmp(b.Id,Id)==0)
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
                printf("Contact_No. ");
                gotoxy(110,25);
                printf("Date");
                printf("\n===============================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",b.Id);
                gotoxy(25,row);
                printf("%s %s",b.First_Name, b.Last_Name);
                gotoxy(45,row);
                printf("%s",b.Age);
                gotoxy(60,row);
                printf("%s",b.Gender);
                gotoxy(75,row);
                printf("%s",b.Address);
                gotoxy(90,row);
                printf("%s",b.Contact_Number);
                gotoxy(110,row);
                printf("%s",b.Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",b.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",b.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",b.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",b.Age);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",b.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",b.Address);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",b.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Date: ");
                scanf("%s",b.Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("Blood_O-_record.txt");
        rename("Blood_O-_temp.txt", "Blood_O-_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        blood();
}

void blood_edit()
{
    system("cls");
    fixed();
    char d[25] = " BLOOD RECORD  ";
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

    printf("\n\n\t\t1. Edit A+ Blood\n\t\t2. Edit A- Blood\n\t\t3. Edit B+ Blood\n\t\t4. Edit B- Blood\n\t\t5. Edit AB+ Blood\n\t\t6. Edit AB- Blood\n\t\t7. Edit O+ Blood\n\t\t8. Edit O- Blood\n\t\t9. Exit\n\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:AP_edit();break;
    case 2:AN_edit();break;
    case 3:BP_edit();break;
    case 4:BN_edit();break;
    case 5:ABP_edit();break;
    case 6:ABN_edit();break;
    case 7:OP_edit();break;
    case 8:ON_edit();break;
    case 9:blood();break;
    }

}

void AP_delt()
{
    system("cls");
    fixed();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("Blood_A+_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		blood();
        }

        fptr2 = fopen(temp, "w");
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("Blood_A+_record.txt");
        rename(temp, "Blood_A+_record.txt");

   fptr1=fopen("Blood_AP_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","A+_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
            getch();
            blood();
        fclose(fptr1);
}

void AN_delt()
{
    system("cls");
    fixed();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("Blood_A-_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		blood();
        }

        fptr2 = fopen(temp, "w");
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("Blood_A-_record.txt");
        rename(temp, "Blood_A-_record.txt");

   fptr1=fopen("Blood_AN_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","Blood_A-_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
            getch();
            blood();
        fclose(fptr1);
}

void BP_delt()
{
    system("cls");
    fixed();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("Blood_B+_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		blood();
        }

        fptr2 = fopen(temp, "w");
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("Blood_B+_record.txt");
        rename(temp, "Blood_B+_record.txt");

   fptr1=fopen("Blood_B+_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","Blood_B+_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
            getch();
            blood();
        fclose(fptr1);
}

void BN_delt()
{
    system("cls");
    fixed();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("Blood_B-_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		blood();
        }

        fptr2 = fopen(temp, "w");
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("Blood_B-_record.txt");
        rename(temp, "Blood_B-_record.txt");

   fptr1=fopen("Blood_B-_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","Blood_B-_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
            getch();
            blood();
        fclose(fptr1);
}

void ABP_delt()
{
    system("cls");
    fixed();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("Blood_AB+_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		blood();
        }

        fptr2 = fopen(temp, "w");
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("Blood_AB+_record.txt");
        rename(temp, "Blood_AB+_record.txt");

   fptr1=fopen("Blood_AB+_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","Blood_AB+_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
            getch();
            blood();
        fclose(fptr1);
}

void ABN_delt()
{
    system("cls");
    fixed();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("Blood_AB-_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		blood();
        }

        fptr2 = fopen(temp, "w");
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("Blood_AB-_record.txt");
        rename(temp, "Blood_AB-_record.txt");

   fptr1=fopen("Blood_AB-_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","Blood_AB-_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
            getch();
            blood();
        fclose(fptr1);
}

void OP_delt()
{
    system("cls");
    fixed();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("Blood_O+_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		blood();
        }

        fptr2 = fopen(temp, "w");
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("Blood_O+_record.txt");
        rename(temp, "Blood_O+_record.txt");

   fptr1=fopen("Blood_O+_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","Blood_O+_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
            getch();
            blood();
        fclose(fptr1);
}

void ON_delt()
{
    system("cls");
    fixed();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("Blood_O-_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		blood();
        }

        fptr2 = fopen(temp, "w");
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf("\n\n\t\t\ Input Id Number Do You Want To Remove : ");
        scanf("%d", &lno);
		lno++;
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("Blood_O-_record.txt");
        rename(temp, "Blood_O-_record.txt");

   fptr1=fopen("Blood_O-_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","Blood_O-_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
            getch();
            blood();
        fclose(fptr1);
}

void blood_delt()
{
    system("cls");
    fixed();
    char d[25] = " BLOOD RECORD  ";
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

    printf("\n\n\t\t1. Delete A+ Blood\n\t\t2. Delete A- Blood\n\t\t3. Delete B+ Blood\n\t\t4. Delete B- Blood\n\t\t5. Delete AB+ Blood\n\t\t6. Delete AB- Blood\n\t\t7. Delete O+ Blood\n\t\t8. Delete O- Blood\n\t\t9. Exit\n\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:AP_delt();break;
    case 2:AN_delt();break;
    case 3:BP_delt();break;
    case 4:BN_delt();break;
    case 5:ABP_delt();break;
    case 6:ABN_delt();break;
    case 7:OP_delt();break;
    case 8:ON_delt();break;
    case 9:blood();break;
    }

}

void blood()
{
    system("cls");
    fixed();
    char d[25] = " BLOOD RECORD  ";
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

    printf("\n\n\t\t1. Add Blood Group\n\t\t2. List Blood Group\n\t\t3. Search Blood Group\n\t\t4. Update Blood Group\n\t\t5. Delete Blood Group\n\t\t6. Exit\n\n");
    printf("\n\tEnter your choice(1-6): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:blood_add();break;
    case 2:blood_list();break;
    case 3:blood_Search();break;
    case 4:blood_edit();break;
    case 5:blood_delt();break;
    case 6:D_exit();break;
    }
}



/*----------------------------------------------------user----------------------------------------------------*/


void userAP_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_A+_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_blood();
}

void userAN_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_A-_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_blood();
}

void userBP_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_B+_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_blood();
}

void userBN_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_B-_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_blood();
}

void userABP_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_AB+_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_blood();
}

void userABN_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_AB-_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_blood();
}

void userOP_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_O+_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_blood();
}

void userON_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_O-_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Blood Record List \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
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
		printf("Contact_No. ");
		gotoxy(110,25);
		printf("Date");
		printf("\n=============================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			row++;
		}
		fclose(fptr);
		getch();
		user_blood();
}

void user_blood_list()
{
    system("cls");
    fixed();
    char d[25] = " BLOOD RECORD  ";
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

    printf("\n\n\t\t1. A+ Blood List\n\t\t2. A- Blood List\n\t\t3. B+ Blood List\n\t\t4. B- Blood List\n\t\t5. AB+ Blood List\n\t\t6. AB- Blood List\n\t\t7. O+ Blood List\n\t\t8. O- Blood List\n\t\t9. Exit\n\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:userAP_list();break;
    case 2:userAN_list();break;
    case 3:userBP_list();break;
    case 4:userBN_list();break;
    case 5:userABP_list();break;
    case 6:userABN_list();break;
    case 7:userOP_list();break;
    case 8:userON_list();break;
    case 9:user_blood();break;
    }

}

void userAP_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_A+_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        userblood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void userAN_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_A-_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        userblood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void userBP_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_B+_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        userblood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void userBN_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_B-_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        userblood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void userABP_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_AB+_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        userblood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}
void userABN_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_AB-_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        userblood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void userOP_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_O+_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        userblood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void userON_search()
{
    char a[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("Blood_O-_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Blood Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Donor ID to be viewed: ");
	scanf("%s",a);
	fflush(stdin);
	a[0]=(a[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s \n", b.Id, b.First_Name, b.Last_Name, b.Age, b.Gender, b.Address, b.Contact_Number, b.Date)!=EOF)
	{
		if(strcmp(b.Id,a)==0)
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
            printf("Contact_No. ");
            gotoxy(110,25);
            printf("Date");
            printf("\n=============================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",b.Id);
			gotoxy(25,row);
			printf("%s %s",b.First_Name, b.Last_Name);
			gotoxy(45,row);
			printf("%s",b.Age);
			gotoxy(60,row);
			printf("%s",b.Gender);
			gotoxy(75,row);
			printf("%s",b.Address);
			gotoxy(90,row);
			printf("%s",b.Contact_Number);
			gotoxy(110,row);
			printf("%s",b.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(b.Id,a)!=0)
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
        userblood_Search();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	user_blood();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    }
}

void userblood_Search()
{
    system("cls");
    fixed();
    char d[25] = " BLOOD RECORD  ";
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

    printf("\n\n\t\t1. Search A+ Blood\n\t\t2. Search A- Blood\n\t\t3. Search B+ Blood\n\t\t4. Search B- Blood\n\t\t5. Search AB+ Blood\n\t\t6. Search AB- Blood\n\t\t7. Search O+ Blood\n\t\t8. Search O- Blood\n\t\t9. Exit\n\n");
    printf("\n\tEnter your choice(1-9): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:userAP_search();break;
    case 2:userAN_search();break;
    case 3:userBP_search();break;
    case 4:userBN_search();break;
    case 5:userABP_search();break;
    case 6:userABN_search();break;
    case 7:userOP_search();break;
    case 8:userON_search();break;
    case 9:user_blood();break;
    }

}

void user_blood()
{
    system("cls");
    fixed();
    char d[25] = " BLOOD RECORD  ";
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
    printf("\n\n\t\t1. List Blood Record\n\t\t2. Search Blood Record\n\t\t3. Exit\n");
    printf("\n\tEnter your choice(1-3): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:
        user_blood_list();break;
    case 2:
       userblood_Search();break;
    case 3:
        Userexit();break;
    default:
        printf("\t\t\t\nInvalid Input\n");

    }
}
