/*
Project Name : Persona or Persona Prank
Developper : Houssam Elouafi
Version : v50.0.0.0
Version Type : alpha in beta version
*/

//Coding With Language C

//Libraries

#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

//Functions


void InputCheck (int q,int chor){
if(chor==0){

	while(q!=1 && q!=2 && q!=3 && q!=4){

		printf("ERROR! Please enter a valid number! (1 or 2 or 3 or 4)\n");
		scanf("%d",&q);

}
}
else if(chor==1){
	while(q!=1 && q!=2 && q!=3 && q!=4 && q!=5){

		printf("ERROR! Please enter a valid number! (1 or 2 or 3 or 4 or 5)\n");
		scanf("%d",&q);

}
}
else
	printf("ERROR! CHOR_EQ_VOID\n");
}

int Points(int q){
scanf("%d",&q);//2nd entry confirmater + magic key supporter
switch(q){
	case 1:
		q=10;
		break;
	case 2:
		q=20;
		break;
	case 3:
		q=30;
	case 4:
		q=40;
		break;
	case 5://magic key
		q=999;//MAGIC KEY VALUE
		break;
	default:
		//q=9999 //out of range ERR_OUTRANGE_NOTMGKRY
		printf("ERROR! Please enter a valid number!  (1 or 2 or 3 or 4)\n");
	break;
}
return q;
}
/*void pcmdf(int pcmd){

	/*
	0-no
	1-yes
	2-pcmd list
	3-help
	4-code
	5-magic key
	6-magic key settings
	7-help
	8-contact me
	9-cmd mode

	//0-no\n1-yes\n2-pcmd list\n3-help\n4-code\n5-magic key\n6-magic key settings\n7-help\n8-contact me\n9-cmd mode\n

	int stop;
	int key;
	int xcmd;


}
*/
int main(){



//Declaration
int load;
int main_process;
int p[10];
int total;
int yn;
int q;
int i;
int chor;
char version[999]="v50.0.0.0";
char per='%';
char xtemp='x';
char extemp;
int confirm;
/*
int pcmd;
*/
//Logic


	//Intro
printf("enter F11 for full screen\n");
printf("Persona %s by Houssam Elouafi\n\n\nAlways enter for 1 line or any keyword for 2 lines to continue\n",version);
scanf("%c",&xtemp);
printf("WARNING: choosing number 5 is causing bugs, non-numbred entries causes bugs in the software!\n\n");
scanf("%c",&xtemp);
printf("Welcome to Persona %s by Houssam Elouafi \n\n",version);
scanf("%c",&xtemp);
printf("If you want to descover what kind of personality you are, you're in the right place\n\n");
scanf("%c",&xtemp);
printf("THE RULES: You'll see each time a diffrent question with 4 diffrent answers, just choose the answer's number, and by the end of the questions, you'll find the real you\n\n");
scanf("%c",&xtemp);
printf("You have 2 entries for each question, to confirme your choice\n\n");
scanf("%c",&xtemp);
/*printf("pcmd? (type 0 for  the best experince, this feature is not available yet)\n");
scanf("%s",&pcmd);
pcmdf(pcmd);*/

do{

//surprise

/*if(xtemp!='x'){
	printf("You are a rules follower\nso...\n YOU'RE FAILED!, annyway let's move on!\n\n");
	//printf("You are a rebel \nsend us this code P-PBV-GET0X000-HE to get newer version (beta) before everyone and you won this HGOH4898G-DGHH5S8-SHS5594 serial key for FiCh to activate it\nthe software is not up yet so you can get it before everyone\n\n\n");
}
else
	printf("You are a rules follower\nso...\n YOU'RE FAILED!, annyway let's move on!\n\n");
	//printf("You are a rebel \nsend us this code P-PBV-GET0X000-HE to get newer version (beta) before everyone and you won this HGOH4898G-DGHH5S8-SHS5594 serial key for FiCh to activate it\nthe software is not up yet so you can get it before everyone\n\n\n");

	extemp=xtemp;

	printf("your last keyword before the surprise is %c \n",extemp);
	scanf("%c",&xtemp);
*/
	//Entering

printf("Looding...\n\n");

for(load=1;load<=10;load++){
	main_process=load*10;
	printf("......\n");
	printf("Loading...(%d %c) \n\n" ,main_process,per);
}
printf("Checking if everything is ready!\n");
if(main_process==100){
	printf("Ready\nSet\nGo!\n");
}

//Questionologie

	//1
	chor=0;
printf("The 1st Question\n");
printf("What element that represnts you most: \n 1-Air \n 2-Earth \n 3-Water \n 4-Fire \n");
scanf("%d",&q);

InputCheck(q,chor);
p[1]=Points(q);

	//2
printf("The 2nd Question\n");
printf("What season you prefer? \n 1-Winter \n 2-Fall \n 3-Spring \n 4-Summer \n");
scanf("%d",&q);

InputCheck(q,chor);
p[2]=Points(q);

	//3
printf("The 3rd Question\n");
printf("What animal you prefer? \n 1-Lesard \n 2-Fish \n 3-Dog \n 4-Cat \n");
scanf("%d",&q);

InputCheck(q,chor);
p[3]=Points(q);

	//4
printf("The 4th Question\n");
printf("What kind of music you like? \n 1-Pop Music \n 2-Classic \n 3-Modern \n 4-Only the successful songs \n");
scanf("%d",&q);

InputCheck(q,chor);
p[4]=Points(q);

	//5
printf("The 5th Question\n");
printf("What is your hair color? \n 1-Red \n 2-Black \n 3-Brown \n 4-Blonde \n");
scanf("%d",&q);

InputCheck(q,chor);
p[5]=Points(q);

	//6
printf("The 6th Question\n");
printf("What do you do in your free time? \n 1-Playing video games \n 2-Preparing for exams \n 3-Volunteering \n 4-Shopping \n");
scanf("%d",&q);

InputCheck(q,chor);
p[6]=Points(q);
	//7
printf("The 7th Question\n");
printf("What kind of books you like? \n 1-Sci-Fi \n 2-Culture \n 3-All kinds \n 4-Romance \n");
scanf("%d",&q);

InputCheck(q,chor);
p[7]=Points(q);
	//8
printf("The 8th Question\n");
printf("If you want to watch a movie, what would you choose? \n 1-Godzilla \n 2-Action \n 3-Any movie \n 4-Comedy \n");
scanf("%d",&q);

InputCheck(q,chor);
p[8]=Points(q);
	//9
printf("The 9th Question\n");
printf("What do you prefer? \n 1-Going to games store \n 2-Going to the library \n 3-Helping others \n 4-Going to the barber \n");
scanf("%d",&q);

InputCheck(q,chor);
p[9]=Points(q);
	//10
	//chor=1;
printf("The 10th Question\n");
printf("Do you care about politics? \n 1-Kind of \n 2-No \n 3-Yes \n 4-I love it so much\n");
scanf("%d",&q);

InputCheck(q,chor);
p[10]=Points(q);

//All Points
printf("Proccessing the inforamtions...\n");
printf("Loading (75 %c)\n",per);
total=0;
for(i=1;i<=10;i++){
	total=total+p[i];
}
printf("Loading (100 %c)\n",per);

//Persona Kinds
printf("proccessing....\n\n\n\n\n\n");

if(0<=total && total<=160){
	printf("You are GEEK \n\nYou're a geek but in a good way, you are creative and you don't fear from showing your personality \n");
}
if (160<total && total<=240){
	printf("You are SERIOUS \n\nYou're smart, You got a high concentration,and in some day you'll be successfull \n");
}
if(240<total && total<=320){
	printf("You are KIND \n\nYou're a good man, and you easly get in touch with others and you have fun when helping them \n");
}
if(320<total && total<=400){
	printf("You are ATRACTIVE \n\nYou are a human who got his own style on everything and you love life so much \n");
}
if(400<total && total<=14000){

	printf("You are one of 1%c of the world that is special!, you've got something, you are dangereuse, deep and genius\n",per);
}
/*	else
		printf("You are one of 1%c of the world that is special!, you've got something, you are dangereuse, deep and genius\n",per);
		*/
printf("\n\nYour session is finished!, hope you found yourself \n \n \n \n");
/*//printf("you can start");*/
printf("\nDo you want to try again? \n\n 1-YES 2-NO \n \n");
scanf("%d",&yn);

while( yn!=1 && yn!=2){


	printf("PLEASE ENTER 1 OR 2 \n");
	scanf("%d",&yn);
}

/*if(yn==2){
	printf("are you sure you want to exit? type 2 to confirm or 1 to try again\n");

	scanf("%d",&confirm);
	if(confirm==2){
		yn=2;
	}
	else if(confirm==1){
		yn=1;
	}

}
	else if(confirm==1){
		yn=1;
	}
*/
}while(yn!=2);
/*
if(yn==2){
printf("pcmd?\n");
scanf("%s",&pcmd);
pcmdf(pcmd);*/
printf("Thanks! hope you enjoyed the session!\n");
scanf("%s",&xtemp);
printf("This is just a Demo, Purchse myPersona for full features:\n1-Contiens All Personas types(xPersona,PPersona,Persona prnk,Persona Lite,Persona PCMD,Persona HKR)\n2-One-Time purchase from Houssam Elouafi\n3-no IAPs\n4-No Ads\n5-Full Version in Coonsole Mode(v2.0.50.0.0.0 is coming soon)\n6-Customise questions number\n5-Random Questions by yourselves(you have to type a random number to get your order)\n6-Duo Play\n7-PCMD List is full\n8-Modes switcher\n9-Persona settings\n10-Enter by a password after purchasing and a name(each realease got it's owwn touch by the buyers)\n11-And More\n");
scanf("%s",&xtemp);
printf("only 2.5$ if sent this code 'MPHE0x00' (only for the 1st 10) and for 10$ (25/50off it's randomly but discount is guaranteed) if sent this code 'mphe0x00' and if both and in the10ths for free if not with the10ths 75off");
printf("go to HoussamElouafi.WixSite.com/HoussamElouafi to Purchase it\n");
int ytemp;
scanf("%d",&ytemp);
if(ytemp<0){
	printf("YOU ARE SO LUCKY! YOU HAVE 250$ TO SPENT ON MY SITE, THE CONFIRMATION CODE IS'MPHET5NDCH0X00'\n");
}
else
	printf("BYE!\n");
	char ret[999];
	scanf("%s",&ret);

getch();

return ret;
}
