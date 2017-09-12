#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define SZ 1000
struct date{
	int day;
	int month;
	int year;
};
struct inoutcome{
	char source[20];
	int value;
	struct date d;
	int t;
};
char month[10];
struct inoutcome Data[SZ];
int ind=0;
void main(){
	
	char passapp[10];
	
	strcpy(passapp,"1");
	
	char pass[10];
	int i=0;
	
	printf("\n\n\n\n\n\n\n\n\t\t\t\tEnter your pass \n");
	char ph;
	printf("\t\t\t\t");	
	do{
		ph=getch();
		if(ph!='\r'){
			pass[i]=ph;
	printf("*");//for hide password
		i++;	
			
		}

		
	}while(ph!='\r');
	
	
	
	if(strcmp(pass,passapp)==0){
			system("cls");

			printmain();

	}else{
		printf("Error Password please try again ");
	}
	
	
	
	
	
}
void Mtoc(){
		if(Data[ind].d.month==1){
		printf("Jan.");
	}else if(Data[ind].d.month==2){
		printf("Feb.");
	}else if(Data[ind].d.month==3){
		printf("Mar.");
	}else if(Data[ind].d.month==4){
		printf("Apr.");
	}else if(Data[ind].d.month==5){
		printf("May.");
	}else if(Data[ind].d.month==6){
		printf("Jun.");
	}else if(Data[ind].d.month==7){
		printf("Jluy.");
	}else if(Data[ind].d.month==8){
		printf("Aug.");
	}else if(Data[ind].d.month==9){
		printf("Sep.");
	}else if(Data[ind].d.month==10){
		printf("Oct.");
	}else if(Data[ind].d.month==11){
		printf("Nov.");
	}else if(Data[ind].d.month==12){
		printf("Dec.");

	}
}
void MforRe(int i){
		if(i==1){
		printf("Jan.");
	}else if(i==2){
		printf("Feb.");
	}else if(i==3){
		printf("Mar.");
	}else if(i==4){
		printf("Apr.");
	}else if(i==5){
		printf("May.");
	}else if(i==6){
		printf("Jun.");
	}else if(i==7){
		printf("Jluy.");
	}else if(i==8){
		printf("Aug.");
	}else if(i==9){
		printf("Sep.");
	}else if(i==10){
		printf("Oct.");
	}else if(i==11){
		printf("Nov.");
	}else if(i==12){
		printf("Dec.");

	}
}
void addIncome(){
	
	system("cls");
	char ch ; 
	int i;
	printf("------:Enter a New Income \n");

	
	
	printf("Enter Income source : ");
	scanf("%s",&Data[ind].source);
	
	printf("Enter Income value : ");
	scanf("%d",&Data[ind].value);
	
	printf("Enter Income date <year> : ");
	scanf("%d",&Data[ind].d.year);
	
	printf("Enter Income date <month> : ");
	scanf("%d",&Data[ind].d.month);
	
	printf("Enter Income date <day> : ");
	scanf("%d",&Data[ind].d.day);
	
	Data[ind].t=1;
	char month[20];
	SF(ind);
		for(i=0;i<80;i++){
			printf("-");

	}
    printf("Income : %s  %d  %d/",Data[ind].source,Data[ind].value,Data[ind].d.day);
    Mtoc();
	printf("/%d\n",Data[ind].d.year);
	for(i=0;i<80;i++){
			printf("-");

	}
	ind++;
      printf("\nEnter to confirm or ESC to cancel ... \n");
      ch=getch();
      if(ch == 13 ) addIncome() ; // Enter
      else if(ch == 27 ){
     	system("cls");
 		return 0;
      }else {
               printf("\nWorng Choice");
              }	
		
	
}
void addOutcome(){
	system("cls");
		char ch ; 
	int i;



	printf("________:Enter a New Outcome \n");

		
	printf("Enter Outcome source : \n");
	scanf("%s",&Data[ind].source);
	
	printf("Enter Outcome value : \n");
	scanf("%d",&Data[ind].value);
	
	printf("Enter Outcome date <year> : \n");
	scanf("%d",&Data[ind].d.year);
	
	printf("Enter Outcome date <month> : \n");
	scanf("%d",&Data[ind].d.month);
	
	printf("Enter Outcome date <day> : \n");
	scanf("%d",&Data[ind].d.day);
	
	Data[ind].t=2;
		for(i=0;i<80;i++){
			printf("-");

	}
    printf("Outcome : %s  %d  %d/",Data[ind].source,Data[ind].value,Data[ind].d.day);
    Mtoc();
	SF(ind);

	printf("/%d\n",Data[ind].d.year);
			for(i=0;i<80;i++){
			printf("-");

	}
	ind++;
	    printf("\nEnter to confirm or ESC to cancel ... \n");
      ch=getch();
      if(ch == 13 ) addOutcome() ; // Enter
      else if(ch == 27 ){
     	system("cls");
 		return 0;
      }else {
               printf("\nWorng Choice");
              }	
		
	
}
void ViewIncome(){
	system("cls");

	int i=0;
	
		printf("\t\tIncome source\tIncome Value\tIncome Date\n");
	for(i=0;i<ind;i++){
		if(Data[i].t==1){
		
	printf("\t\t%s\t\t%d\t\t%d/%d/%d\n",Data[i].source,Data[i].value,Data[i].d.day,Data[i].d.month,Data[i].d.year);
}
	
}
	
	
}
void ViewOutcome(){
	system("cls");

	int i=0;
	
		printf("\t\tOutcome source\tOutcome Value\tOutcome Date\n");
	for(i=0;i<ind;i++){
		if(Data[i].t==2){
		
	printf("\t\t%s\t\t%d\t\t%d/%d/%d\n",Data[i].source,Data[i].value,Data[i].d.day,Data[i].d.month,Data[i].d.year);
}
	
}
	
	
}
void SearchIncome(){
	system("cls");

		char a[10];
    	char b[10];
    	int ch;
    	int i=0;
    	int y;
    	int flag=0;

	printf("Search for Income \n");
	
	printf("Enter Income source : \n");
	scanf("%s",&b);
		printf("1.All years \n2.Sp year\n");
		scanf("%d",&ch);
		if(ch==1)
	{
			for(i=0;i<ind;i++){
	   	if(Data[i].t==1){
		
		if(strcmp(Data[i].source,b)==0){
	
		printf("found @ index %d  %s   %d  %d/%d/%d\n",i,Data[i].source,Data[i].value,Data[i].d.day,Data[i].d.month,Data[i].d.year);		
	flag=1;
		}
			}
	
}	

		
		
		
	}
	else if(ch==2){
		
		
		
		
			printf("Enter year");
		scanf("%d",&y);
				for(i=0;i<ind;i++){
	   	if(Data[i].t==1){
		
		if(strcmp(Data[i].source,b)==0&&Data[i].d.year==y){
		
		printf("found @ index %d  %s   %d  %d/%d/%d\n",i,Data[i].source,Data[i].value,Data[i].d.day,Data[i].d.month,Data[i].d.year);		
		flag=1;
	}
		}
	
}
	}
	
	
	
	
	if(flag==0){
		printf("Nothing was found \2");
	}
	
	
}
void SearchOutcome(){
	system("cls");

		char a[10];
    	char b[10];
    	int ch;
    	int i=0;
    	int y;
    	int flag=0;

	printf("Search for Outcome \n");
	
	printf("Enter Outcome source : \n");
	scanf("%s",&b);
		printf("1.All years \n2.Sp year\n");
		scanf("%d",&ch);
		if(ch==1)
	{
			for(i=0;i<ind;i++){
	   	if(Data[i].t==2){
		
		if(strcmp(Data[i].source,b)==0){
	
		printf("found @ index %d  %s   %d  %d/%d/%d\n",i,Data[i].source,Data[i].value,Data[i].d.day,Data[i].d.month,Data[i].d.year);		
	flag=1;
		}
			}
	
}	

		
		
		
	}
	else if(ch==2){
		
		
		
		
			printf("Enter year");
		scanf("%d",&y);
				for(i=0;i<ind;i++){
	   	if(Data[i].t==2){
		
		if(strcmp(Data[i].source,b)==0&&Data[i].d.year==y){
		
		printf("found @ index %d  %s   %d  %d/%d/%d\n",i,Data[i].source,Data[i].value,Data[i].d.day,Data[i].d.month,Data[i].d.year);		
		flag=1;
	}
		}
	
}
	}
	
	
	
	
	if(flag==0){
		printf("Nothing was found \2");
	}
	
	
}
void EditIncome(){

		int target,editcho,date[3],i;
		printf("---------------:Edit An Income\n");
		printf("Enter the date of Income (day/month/year)\n");
		scanf("%d/%d/%d",&date[0],&date[1],&date[2]);
	
		do{
			

				for(i=0;i<80;i++){
			printf("_");
		}
		printf("\n");
		printf("\t\tIndex\tIncome source\tIncome Value\tIncome Date\n");
		
				int cnt=1;
		for(i=0;i<ind;i++){
			if(Data[i].d.day==date[0]&&Data[i].d.month==date[1]&&Data[i].d.year==date[2]&&Data[i].t==1){
			printf("\t\t %d\t%s\t\t%d\t\t%d/%d/%d\n",cnt,Data[i].source,Data[i].value,Data[i].d.day,Data[i].d.month,Data[i].d.year);	
			cnt++;	
			}
		}
		
		for(i=0;i<80;i++){
			printf("_");
		}
		printf("\n");
	
		printf("Enter the index of target Income to edit or 0 to exit : \n");
		scanf("%d",&target);
		if(target!=0){
			cnt=1;
		for(i=0;i<ind;i++){
			if(Data[i].d.day==date[0]&&Data[i].d.month==date[1]&&Data[i].d.year==date[2]&&Data[i].t==1){
			if(cnt==target){
			printf("Edit the Income : %s Select which info. to edit \n",Data[i].source);	
			printf("1.The Source Name \n2.The Income Value\n3.The Income Date\n4.Back to Income List\n");
			scanf("%d\n",&editcho);
			if(editcho==1){
			printf("Rename %s to : \n",Data[i].source);
			gets(Data[i].source);
			}else if(editcho==2){
			printf("Change value=%d for %s  : \n",Data[i].value,Data[i].source);
			scanf("%d",&Data[i].value);	
			}else if(editcho==3){
			printf("Change Date for %s  : \n",Data[i].source);
			scanf("%d\n%d\n%d",&Data[i].d.day,&Data[i].d.month,&Data[i].d.year);
			}else if(editcho==4){	
				EditIncome();
			}else {	
			printf("Error Enter another schoice\n");	
			}	
			}	
			cnt++;	
			}
		}	
			
			
			
		}
}	while(target!=0);
	
}
void EditOutcome(){

		int target,editcho,date[3],i;
		printf("---------------:Edit An Outcome\n");
		printf("Enter the date of Outcome (day/month/year)\n");
		scanf("%d/%d/%d",&date[0],&date[1],&date[2]);
	
		do{
			

				for(i=0;i<80;i++){
			printf("_");
		}
		printf("\n");
		printf("\t\tIndex\tOutcome source\tOutcome Value\tOutcome Date\n");
		
				int cnt=1;
		for(i=0;i<ind;i++){
			if(Data[i].d.day==date[0]&&Data[i].d.month==date[1]&&Data[i].d.year==date[2]&&Data[i].t==2){
			printf("\t\t %d\t%s\t\t%d\t\t%d/%d/%d\n",cnt,Data[i].source,Data[i].value,Data[i].d.day,Data[i].d.month,Data[i].d.year);	
			cnt++;	
			}
		}
		
		for(i=0;i<80;i++){
			printf("_");
		}
		printf("\n");
	
		printf("Enter the index of target Outcome to edit or 0 to exit : \n");
		scanf("%d",&target);
		if(target!=0){
			cnt=1;
		for(i=0;i<ind;i++){
			if(Data[i].d.day==date[0]&&Data[i].d.month==date[1]&&Data[i].d.year==date[2]&&Data[i].t==2){
			if(cnt==target){
			printf("Edit the Outcome : %s Select which info. to edit \n",Data[i].source);	
			printf("1.The Source Name \n2.The Outcome Value\n3.The Outcome Date\n4.Back to Outcome List\n");
			scanf("%d\n",&editcho);
			if(editcho==1){
			printf("Rename %s to : \n",Data[i].source);
			gets(Data[i].source);
			}else if(editcho==2){
			printf("Change value=%d for %s  : \n",Data[i].value,Data[i].source);
			scanf("%d",&Data[i].value);	
			}else if(editcho==3){
			printf("Change Date for %s  : \n",Data[i].source);
			scanf("%d\n%d\n%d",&Data[i].d.day,&Data[i].d.month,&Data[i].d.year);
			}else if(editcho==4){	
				EditIncome();
			}else {	
			printf("Error Enter another schoice\n");	
			}	
			}	
			cnt++;	
			}
		}	
			
			
			
		}
}	while(target!=0);
	
	

}
void DeletIncome(){
	system("cls");

   		int i;
        int date[3];
        int target;
        int count=1;

		printf(":--------------- Delete An Income\n");
		printf("Enter the date of Income (day/month/year)\n");
		scanf("%d/%d/%d",&date[0],&date[1],&date[2]);
		printf("\t\tIndex\tIncome source\tIncome Value\tIncome Date\n");
		
			
		do{
			
		for(i=0;i<ind;i++){
			if(Data[i].d.day==date[0]&&Data[i].d.month==date[1]&&Data[i].d.year==date[2]&&Data[i].t==1){
			printf("\t\t%d\t%s\t\t%d\t\t%d/%d/%d\n",count,Data[i].source,Data[i].value,Data[i].d.day,Data[i].d.month,Data[i].d.year);	
			count++;	
			}
		}
	
	
		printf("Enter the index of target Income to delete or 0 to exit\n");
		scanf("%d",&target);
		if(target!=0)
		{
			count=1;
		for(i=0;i<ind;i++){
			if(Data[i].d.day==date[0]&&Data[i].d.month==date[1]&&Data[i].d.year==date[2]&&Data[i].t==1){
			if(count==target){

				
   strcpy(Data[i].source,Data[ind-1].source);
	Data[i].value=Data[ind-1].value;
	Data[i].t=Data[ind-1].t;
	Data[i].d.day=Data[ind-1].d.day;
	Data[i].d.month=Data[ind-1].d.month;
	Data[i].d.year=Data[ind-1].d.year;
	ind--;
				
			break;	
			}	
			count++;	
			}
		}	
			
			
			
		}
}	while(target!=0);
	
	

}
void DeletOutcom(){
	system("cls");

   		int i;
        int date[3];
        int target;
       	 int count=1;

		printf(":--------------- Delete An Outcom\n");
		printf("Enter the date of Outcom (day/month/year)\n");
		scanf("%d/%d/%d",&date[0],&date[1],&date[2]);
		printf("\t\tIndex\tIncome source\tIncome Value\tIncome Date\n");
		
			
		do{
			
		for(i=0;i<ind;i++){
			if(Data[i].d.day==date[0]&&Data[i].d.month==date[1]&&Data[i].d.year==date[2]&&Data[i].t==2){
			printf("\t\t%d\t%s\t\t%d\t\t%d/%d/%d\n",count,Data[i].source,Data[i].value,Data[i].d.day,Data[i].d.month,Data[i].d.year);	
			count++;	
			}
		}
	
	
		printf("Enter the index of target Outcom to delete or 0 to exit\n");
		scanf("%d",&target);
		if(target!=0)
		{
			count=1;
		for(i=0;i<ind;i++){
			if(Data[i].d.day==date[0]&&Data[i].d.month==date[1]&&Data[i].d.year==date[2]&&Data[i].t==2){
			if(count==target){
				
   strcpy(Data[i].source,Data[ind-1].source);
	Data[i].value=Data[ind-1].value;
	Data[i].t=Data[ind-1].t;
	Data[i].d.day=Data[ind-1].d.day;
	Data[i].d.month=Data[ind-1].d.month;
	Data[i].d.year=Data[ind-1].d.year;
	ind--;
				
			break;	
			}	
			count++;	
			}
		}	
			
			
			
		}
}	while(target!=0);
	
	

}
void makeReport(){
	system("cls");

	char ar;
	int year;
	int  TIV=0,TOV=0;
	int MI,MIM,MO,MOM ;
    int MII,MIIM,MIO,MIOM ;
	int  IV=0,OV=0,TB=0,TB2=0;
	int MMV=0;
   	int i,j;
do{
	printf("------:Make a Report");
	
	printf("For which year you need a report : ");
	scanf("%d",&year);
	
	printf("Month\t\t Income Value \t\t OutCome Value \t\t Total Balance \n");
	for(i=1;i<=12;i++){
	MforRe(i);
	for(j=0;j<ind;j++){
			if(Data[j].t==1&&Data[j].d.year==year&&Data[j].d.month==i){
				IV+=Data[j].value;
		     	TIV+=Data[j].value;
			
			
			}else	if(Data[j].t==2&&Data[j].d.year==year&&Data[j].d.month==i){
				OV+=Data[j].value;
				TOV+=Data[j].value;
				
			}
		
		
	}
	
	
	
	if(i==1){
		
		MI=IV;
		MIM=i;
		
		MO=OV;
		MOM=i;	
		
		MII=IV;
		MIIM=i;	
		
		MIO=OV;
		MIOM=i;	
		
		
	}else{
		
		if(IV>MI){
	    MI=IV;
		MIM=i;
		}
		
		if(OV>MO){
	  	MO=OV;
		MOM=i;	
		}
		
			if(IV<MII){
		MII=IV;
		MIIM=i;	
	
		}
		
		
			if(OV<MIO){
	  	MIO=OV;
		MIOM=i;	
		}
		
	}

    TB=IV-OV;	
	printf("\t\t\t%d \t\t\t%d \t\t\t%d\n",IV,OV,TB);	
	
}
	TB2=TIV-TOV;
	printf("Total\t\t\t%d \t\t\t %d \t\t %d\n",TIV,TOV,TB2);
	
	
	printf("The Best Incom was in ");
	MforRe(MIM);
	printf("  = %d \n",MI);
	printf("The Best outcome was in ");
	MforRe(MOM);
	printf("  = %d \n",MIO);
	printf("The worst Income was in ");
	MforRe(MIIM);
	printf("  = %d \n",MII);
	printf("The worst outcome was in ");
	MforRe(MIOM);
	printf("  = %d \n",MO);



	char name[10];
	for(j=0;j<ind;j++){
		
			if(Data[j].t==1&&Data[j].d.year==year&&Data[j].d.month==MIM){
				if(Data[i].value>MMV){
					MMV=Data[i].value;
				strcpy(name,Data[i].source);
				}

			}
			}
			Mtoc(MIM);
		
		printf("The Best Income was in %s from project Name = %s with value =%d\n",month,name,MMV);	
	
	
	printf("Do you want to make report for another year (y:yes | n:no)\n");
	scanf("\n%c",&ar);
	
}while(ar=='y');
	
}
void yearReport(){
	system("cls");

	int size=10;
	int report[size][3];
	int j;
	int flag=0;
	int yearcount=0;
	int w=0;
	
	
	
	for(j=0;j<ind;j++){
		
		for(w=0;w<size;w++){
	
		if(report[w][0]==Data[j].d.year){
			flag=1;
			
		}
			
}	if(flag==0){
	report[yearcount][0]=Data[j].d.year;
	yearcount++;
}

	}
	
	printf("%d",yearcount);
	
		for(w=0;w<yearcount;w++){
			report[w][1]=0;
			report[w][2]=0;
			
				for(j=0;j<ind;j++){
				if(Data[j].d.year==report[w][0]&&Data[j].t==1){
					report[w][1]+=Data[j].value;
					printf("AAA");
					
									}else if(Data[j].d.year==report[w][0]&&Data[j].t==2){
					report[w][2]+=Data[j].value;
										printf("BBB");

				}
				
		    	}
	
	}
		
	int	totalBalance=0;
	int totalIncome=0;
	int totalOutcome=0;
	
	for(w=0;w<yearcount;w++){
			
		totalIncome+=report[w][1];
	
}
for(w=0;w<yearcount;w++){
			
		totalOutcome+=report[w][2];
	
}
int choice;

		totalBalance=totalIncome-totalOutcome;
		printf("------------------- Total Balance : \n");
		
		
		
			printf("\t\t\t Total Balance = %d\n",totalBalance);
			
			
		printf("1-view Details\n");
		printf("2-Exit\n");
		printf("Enter your choice : \n");
		scanf("%d",&choice);
		if(choice==1){
			printf("year\t Total Incom \tTotal Outcome\t Total Balance \n");
		for(w=0;w<yearcount;w++){
		printf("%d \t\t\t %d \t\t\t %d \t\t\t  %d \n",report[w][0],report[w][1],report[w][2],report[w][1]-report[w][2]);
		}
		printf("Total \t\t\t %d \t\t\t %d \t\t\t  %d \n",totalIncome,totalOutcome,totalBalance);	
		}	
	
	
}
void printmain(){		
	int i;
	printf("\n");
	printf("\n");
	printf("\n\t\t\tProgramming by:Manar Abo Safia");
	printf("\n");			
	for(i=0;i<80;i++){
		printf("=");
	}	
printf("\n\t\t\t1-Enter a new income\n");
printf("\t\t\t2-Enter a new outcome\n");
printf("\t\t\t3-Edit an existing income\n");
printf("\t\t\t4-Edit an existing outcome\n");
printf("\t\t\t5-Delete an existing income\n");
printf("\t\t\t6-Delete an existing outcome\n");
printf("\t\t\t7-View all income\n");
printf("\t\t\t8-View all outcome\n");
printf("\t\t\t9-View a report\n");
printf("\t\t\t10-Search for income\n");
printf("\t\t\t11-Search for outcome\n");
printf("\t\t\t12-Check the total balance\n");
printf("\t\t\t13-Exit the system\n");
	for(i =0;i<80;i++){	
	printf("=");		
}
GAD();

choice();


}
void choice(){
		int cho;

	do{
	printf("Enter your choice <1-13>: ");
	scanf("%d",&cho);
	
	switch(cho){
		case 1:addIncome();break;
		case 2:addOutcome();break;		
		case 3:EditIncome();break;
		case 4:EditOutcome();break;		
		case 5:DeletIncome();break;			
		case 6:DeletOutcom();break;			
		case 7:ViewIncome();break;			
		case 8:ViewOutcome();break;			
		case 9:makeReport();break;			
		case 10:SearchIncome();break;			
		case 11:SearchOutcome();break;				
		case 12:yearReport();break;				
		case 13:exit(0);break;			
		default :
			printf("\nError in your choice please try again !!\n\n ");
		
	}
	
	printmain();
}while(cho!=13);
	
}
void SF(int i){
		FILE *FI;
	FI=fopen("Data.txt","a");
	
	
	fprintf(FI,"%s   %d   %d/%d/%d %d \r\n",Data[i].source,Data[i].value,Data[i].d.day,Data[i].d.month,Data[i].d.year,Data[i].t);
	
	fclose(FI);
	
}
void GAD(){
		FILE *FI;
	FI=fopen("Data.txt","r");
	while(fscanf(FI,"%s   %d   %d/%d/%d %d \r\n",&Data[ind].source,&Data[ind].value,&Data[ind].d.day,&Data[ind].d.month,&Data[ind].d.year,&Data[ind].t)!=EOF){

ind++;
         }
	
	fclose(FI);
}

