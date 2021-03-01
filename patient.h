#define MAX 256
int choice,row;
char ans,Id[20],Age[20],Gender[15],First_Name[15], Last_Name[15],Problem[50],Contact_Number[15],Address[15],Date[15];
struct patient
{
    char ans;
    int Age[20];
    char Gender[15],Id[20],First_Name[15], Last_Name[15],Problem[50],Contact_Number[15],Address[15],Date[15];
};
struct patient p, P_temp;
void P_add_rec(){
    system("cls");
    fixed();
    gotoxy(30, 15);
    FILE *fptr;
    fptr = fopen("P_record.txt", "a");

    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Add Patient Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\n\t\tEnter Patient Id: ");
    scanf("%s", p.Id);
    printf("\n\t\tEnter Patient First Name: ");
    scanf("%s", p.First_Name);
    printf("\n\t\tEnter Patient Last Name: ");
    scanf("%s", p.Last_Name);
    printf("\n\t\tEnter Patient Age: ");
    scanf("%s", p.Age);
    printf("\n\t\tEnter Patient Problem: ");
    scanf("%s", p.Problem);
    printf("\n\t\tEnter Patient Gender: ");
    scanf("%s", p.Gender);
    printf("\n\t\tEnter the Address: ");
    scanf("%s", p.Address);
    printf("\n\t\tEnter Patient Contact Number: ");
    scanf("%s", p.Contact_Number);
    printf("\n\t\tEnter Date: ");
    scanf("%s", p.Date);
    fprintf(fptr,"%s %s %s %s %s %s %s %s %s \n", p.Id, p.First_Name, p.Last_Name, p.Age, p.Problem, p.Gender, p.Address, p.Contact_Number, p.Date);
    fclose(fptr);
    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        P_add_rec();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        patient();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}

void P_list_rec()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("P_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Patient Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Problem");
		gotoxy(75,25);
		printf("Gender");
		gotoxy(90,25);
		printf("Address");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",p.Id, p.First_Name, p.Last_Name, p.Age, p.Problem, p.Gender, p.Address, p.Contact_Number, p.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",p.Id);
			gotoxy(25,row);
			printf("%s %s",p.First_Name, p.Last_Name);
			gotoxy(45,row);
			printf("%s",p.Age);
			gotoxy(60,row);
			printf("%s",p.Problem);
			gotoxy(75,row);
			printf("%s",p.Gender);
			gotoxy(90,row);
			printf("%s",p.Address);
			gotoxy(110,row);
			printf("%s",p.Contact_Number);
			gotoxy(128,row);
			printf("%s",p.Date);
			row++;
		}
		fclose(fptr);
		getch();
		patient();
		//MainMenu();
}

void P_Search_rec()
{
	char b[20]; int row;
	system("cls");
	fixed();
	//Title();// call Title function
	FILE *fptr;
	fptr=fopen("P_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Patient Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Patient ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", p.Id, p.First_Name, p.Last_Name, p.Age, p.Problem, p.Gender, p.Address, p.Contact_Number, p.Date)!=EOF)
	{
		if(strcmp(p.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Problem");
            gotoxy(75,25);
            printf("Gender");
            gotoxy(90,25);
            printf("Address");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",p.Id);
			gotoxy(25,row);
			printf("%s %s",p.First_Name, p.Last_Name);
			gotoxy(45,row);
			printf("%s",p.Age);
			gotoxy(60,row);
			printf("%s",p.Problem);
			gotoxy(75,row);
			printf("%s",p.Gender);
			gotoxy(90,row);
			printf("%s",p.Address);
			gotoxy(110,row);
			printf("%s",p.Contact_Number);
			gotoxy(128,row);
			printf("%s",p.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(p.Id,b)!=0)
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
        P_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	patient();
		//MainMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	//goto L;
    }
}

void P_Edit_rec()
{

    FILE *fptr;
    FILE *ft;
    int i,b, valid=0;
    char ch;
    char Id[20];

    system("cls");
    fixed();
  	//Title();// call Title window
 		ft=fopen("P_temp.txt","w+");
	   fptr=fopen("P_record.txt","r");
	   if(fptr==NULL)
	   {
	       printf("\n\t Can not open file!! ");
           getch();
           adminMenu();
	   }
       	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Patient Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
       	printf("\n\t\tEnter ID of the Patient : ");
       	scanf("%s", Id);
       	fflush(stdin);
       	Id[0]=(Id[0]);

       	 if(ft==NULL)
	   {
	       printf("\n\t Can not open file!! ");
	       getch();
	       adminMenu();
	   }
	   	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", p.Id, p.First_Name, p.Last_Name, p.Age, p.Problem, p.Gender, p.Address, p.Contact_Number, p.Date)!=EOF)
        {
            if(strcmp(p.Id,Id)==0)
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
                printf("Problem");
                gotoxy(75,25);
                printf("Gender");
                gotoxy(90,25);
                printf("Address");
                gotoxy(110,25);
                printf("Contact_No. ");
                gotoxy(128,25);
                printf("Date");
                printf("\n=========================================================================================================================================\n");
                row=30;
                gotoxy(10,row);
                printf("%s",p.Id);
                gotoxy(25,row);
                printf("%s %s",p.First_Name, p.Last_Name);
                gotoxy(45,row);
                printf("%s",p.Age);
                gotoxy(60,row);
                printf("%s",p.Problem);
                gotoxy(75,row);
                printf("%s",p.Gender);
                gotoxy(90,row);
                printf("%s",p.Address);
                gotoxy(110,row);
                printf("%s",p.Contact_Number);
                gotoxy(128,row);
                printf("%s",p.Date);
                printf("\n\n\n");
                //break;
                printf("\t\t\t\t\tEnter New ID: ");
                scanf("%s",p.Id);
                printf("\n\t\t\t\t\tEnter New First Name: ");
                scanf("%s",p.First_Name);
                printf("\n\t\t\t\t\tEnter New Last Name: ");
                scanf("%s",p.Last_Name);
                printf("\n\t\t\t\t\tEnter New Age: ");
                scanf("%s",p.Age);
                printf("\n\t\t\t\t\tEnter New problem: ");
                scanf("%s",p.Problem);
                printf("\n\t\t\t\t\tEnter New Gender: ");
                scanf("%s",p.Gender);
                printf("\n\t\t\t\t\tEnter New Address: ");
                scanf("%s",p.Address);
                printf("\n\t\t\t\t\tEnter New Contact_No.: ");
                scanf("%s",p.Contact_Number);
                printf("\n\t\t\t\t\tEnter New Date: ");
                scanf("%s",p.Date);
                printf("\n\n\t\t\t\t\tPress U Character for the Updating Operation: ");
                ch=getche();
                if(ch=='u' || 'U')
                {
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", p.Id, p.First_Name, p.Last_Name, p.Age, p.Problem, p.Gender, p.Address, p.Contact_Number, p.Date);
                    printf("\n\n\t\t\t.... Information Record Updated Successfully ...");
                }
            }
                else
                    fprintf(ft,"%s %s %s %s %s %s %s %s %s \n", p.Id, p.First_Name, p.Last_Name, p.Age, p.Problem, p.Gender, p.Address, p.Contact_Number, p.Date);

        }
        if(!valid) printf("\n\n\n\t\tNO RECORD FOUND...:)");

        fclose(ft);
        fclose(fptr);
        remove("P_record.txt");
        rename("P_temp.txt", "P_record.txt");
        printf("\n\n\t\t\t\tPress Any key...:):)");
        getch();
        patient();
        //MainMenu();
}
void P_delt_rec()
{

    system("cls");
    fixed();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Delete Patient Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        fptr1 = fopen("P_record.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                //return 0;
		getch();
		patient();
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
        remove("P_record.txt");  		// remove the original file
        rename(temp, "P_record.txt"); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen("P_record.txt","r");
            ch=fgetc(fptr1);
           printf(" \n\n\n\t\t\t\t\t\t\t**!!! After Deleting file !!!**\n\n","P_record.txt");
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
                 //getch();
                 //patient();
            }
            getch();
            patient();
        fclose(fptr1);
/*------- End of reading ---------------*/
        return 0;
}

void P_exit(void)
{
    system("cls");
    //Title();
    fixed();
    printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :):)\n");
    printf("\n\n\t\t\t\tPress Any key for continue...:):)");
    getch();
    adminMenu();
    //patient();

}



void patient(){
    system("cls");
    fixed();
    char d[25] = " PATIENT RECORD  ";
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
    printf("\n\n\t\t1. Add Patients Record\n\t\t2. List Patient Record\n\t\t3. Search Patient Record\n\t\t4. Edit Patients Record\n\t\t5. Delete Patients Record\n\t\t6. Exit\n");
    printf("\n\tEnter your choice(1-6): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:
        P_add_rec();
        break;
    case 2:
        P_list_rec();
        break;
    case 3:
        P_Search_rec();break;
    case 4:
        P_Edit_rec();break;
    case 5:
        P_delt_rec();break;
    case 6:
        P_exit();break;

    }
}


/*--------------------------------------User Patient---------------------------------*/

void UserP_list()
{
    int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("P_record.txt","r");
	    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 list Patient Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(10,25);
        printf("ID");
        gotoxy(25,25);
		printf("Full Name");
		gotoxy(45,25);
		printf("Age");
		gotoxy(60,25);
		printf("Problem");
		gotoxy(75,25);
		printf("Gender");
		gotoxy(90,25);
		printf("Address");
		gotoxy(110,25);
		printf("Contact_No. ");
		gotoxy(128,25);
		printf("Date");
		printf("\n=========================================================================================================================================\n");
		row=30;
		while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n",p.Id, p.First_Name, p.Last_Name, p.Age, p.Problem, p.Gender, p.Address, p.Contact_Number, p.Date)!=EOF)
		{
			gotoxy(10,row);
			printf("%s",p.Id);
			gotoxy(25,row);
			printf("%s %s",p.First_Name, p.Last_Name);
			gotoxy(45,row);
			printf("%s",p.Age);
			gotoxy(60,row);
			printf("%s",p.Problem);
			gotoxy(75,row);
			printf("%s",p.Gender);
			gotoxy(90,row);
			printf("%s",p.Address);
			gotoxy(110,row);
			printf("%s",p.Contact_Number);
			gotoxy(128,row);
			printf("%s",p.Date);
			row++;
		}
		fclose(fptr);
		getch();
		//patient();
		userPatient();
}

void userP_search()
{
	char b[20]; int row;
	system("cls");
	fixed();
	FILE *fptr;
	fptr=fopen("P_record.txt","r");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Search Patient Record \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	//gotoxy(12,8);
	printf("\n\n \t\tEnter Patient ID to be viewed: ");
	scanf("%s",b);
	fflush(stdin);
	b[0]=(b[0]);
	while(fscanf(fptr,"%s %s %s %s %s %s %s %s %s \n", p.Id, p.First_Name, p.Last_Name, p.Age, p.Problem, p.Gender, p.Address, p.Contact_Number, p.Date)!=EOF)
	{
		if(strcmp(p.Id,b)==0)
		{
		    gotoxy(10,25);
            printf("ID");
            gotoxy(25,25);
            printf("Full Name");
            gotoxy(45,25);
            printf("Age");
            gotoxy(60,25);
            printf("Problem");
            gotoxy(75,25);
            printf("Gender");
            gotoxy(90,25);
            printf("Address");
            gotoxy(110,25);
            printf("Contact_No. ");
            gotoxy(128,25);
            printf("Date");
            printf("\n=========================================================================================================================================\n");
            row=30;
            gotoxy(10,row);
			printf("%s",p.Id);
			gotoxy(25,row);
			printf("%s %s",p.First_Name, p.Last_Name);
			gotoxy(45,row);
			printf("%s",p.Age);
			gotoxy(60,row);
			printf("%s",p.Problem);
			gotoxy(75,row);
			printf("%s",p.Gender);
			gotoxy(90,row);
			printf("%s",p.Address);
			gotoxy(110,row);
			printf("%s",p.Contact_Number);
			gotoxy(128,row);
			printf("%s",p.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(p.Id,b)!=0)
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
        P_Search_rec();
    }
	else if(ans=='N')
	{
		printf("\n\t\t\t\t Thank you :) :)");
		//gotoxy(38, 32);
        printf("\n\t\t\t\tPress any key to continue.....:)>");
    	getch();
    	//patient();
		userPatient();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    }
}

/*void Userexit()
{
    system("cls");
    fixed();
    printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :):)\n");
    printf("\n\n\t\t\t\tPress Any key for continue...:):)");
    getch();
    userMenu();
    //patient();

*/

void userPatient()
{
    system("cls");
    fixed();
    char d[25] = " PATIENT RECORD  ";
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
    printf("\n\n\t\t1. List Patient Record\n\t\t2. Search Patient Record\n\t\t3. Exit\n");
    printf("\n\tEnter your choice(1-6): ");
    scanf("%d", &choice);
    switch (choice){
    case 1:
        UserP_list();
        break;
    case 2:
       userP_search();
        break;
    case 3:
        Userexit();break;
    case 4:
    default:
        printf("\t\t\t\nInvalid Input\n");

    }
}


