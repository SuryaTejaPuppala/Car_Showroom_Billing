//Malik KIA Show room billing
#include<stdio.h>
#include<string.h>
void seltoscars();
void sonetcars();
void carenscars();
void carnivalcars();
void main()
{
   int n;
   do{
   
   
   printf("\n=====================================================================================\n");
   printf("\t\t\t\tWELCOME TO MALIK KIA\n");
   printf("=====================================================================================\n");


   printf("\nFor KIA sonet enter 1");
   printf("\nFor KIA seltos enter 2");
   printf("\nFor KIA carens enter 3");
   printf("\nFor KIA carnival enter 4");
   printf("\nTo exit enter 5");
   printf("\nEnter your choice:");
   scanf("%d",&n);
   
   switch(n)
   {
   	case 1:
   	     sonetcars();
	 break;
	 case 2:
	 	 seltoscars();
	 break;
	 
	case 3:
   	    carenscars();
	 break;
	 case 4:
       carnivalcars();
	 break;
	 case 5:
	 	{
		  printf("\n=====================================================================================\n");
          printf("\t\t\t\t\tTHANK YOU\n");
          printf("=====================================================================================\n");
	   }
     }
	printf("\nDo you want to continue then Press 1:");
    scanf("%d",&n);
     }while(n==1);
}
    
	   
   void sonetcars()
   {
   	printf("\n----THE SONET PRICE LIST----");
   	    
   		char name[20];
   		int c,Cont,ExSP,SC,RC,TRC,HC,In,FT,EW,AK,ORP,TP;
   		

    printf("\nFor Sonet HTE Petrol Enter 1");
    printf("\nFor Sonet HTK Petrol Enter 2");
    printf("\nFor Sonet HTK+ Petrol Enter 3");
    printf("\nFor Sonet HTX Petrol Enter 4");
    printf("\nFor Sonet HTX+ Petrol Enter 5");
    printf("\nFor Sonet GTX+ Petrol Enter 6");
    printf("\nFor Sonet HTX AE Enter 7");
    printf("\nFor Sonet HTE Diesel Enter 8");
    printf("\nFor Sonet HTK Diesel Enter 9");
    printf("\nFor Sonet HTK+ Diesel Enter 10");
    printf("\nFor Sonet HTX Diesel Enter 11");
    printf("\nFor Sonet HTX+ Diesel Enter 12");
    printf("\nFor Sonet GTX+ Diesel Enter 13");
   
    printf("\nEnter Your Model of your Car:");
    scanf("%d",&c);
    
    if(c==1)
     {
    	ExSP=695000;
    	RC=97300;
    	SC=11250;
    	TRC=1635;
    	HC=1500;
    	In=30974;
    	FT=500;
    	ORP=838159;
    	EW=19771;
    	AK=20094;
    	TP=878024;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
		scanf("%[^\n]",name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet HTE Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
    	
    	
	}
	else if(c==2)
	{
		
    	ExSP=795000;
    	RC=111300;
    	SC=11900;
    	TRC=1635;
    	HC=1500;
    	In=33657;
    	FT=500;
    	ORP=955492;
    	EW=19771;
    	AK=20094;
    	TP=995357;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
        scanf("%[^\n]",name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet HTK Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax  %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
    	
		
	}
	else if(c==3)
	{
	
    	ExSP=879000;
    	RC=123060;
    	SC=12150;
    	TRC=1635;
    	HC=1500;
    	In=35911;
    	FT=500;
    	EW=19771;
    	AK=20094;
    	ORP=1041606;
    	TP=1081471;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet HTK+ Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
    	
	}
	else if(c==4)
	{
		
    	ExSP=1109000;
    	RC=155260;
    	SC=13325;
    	TRC=1635;
    	HC=1500;
    	In=35651;
    	FT=500;
    	EW=19771;
    	AK=20094;
    	ORP=1316871;
    	TP=1356736;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet HTX Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
	}
	else if(c==5)
	{
		ExSP=1199000;
    	RC=167860;
    	SC=14650;
    	TRC=1635;
    	HC=1500;
    	In=37951;
    	FT=500;
    	EW=19771;
    	AK=20094;
    	ORP=11423096;
    	TP=11462961;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet HTX+ Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
	}
     else if(c==6)
     {
     	ExSP=1245000;
    	RC=174300;
    	TRC=1635;
    	HC=1500;
    	In=38973;
    	FT=500;
    	EW=19771;
    	AK=20094;
    	ORP=1577856;
    	TP=1309000;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet GTX+ Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
	 }
	 else if(c==7)
	 {
	 	ExSP=1089000;
    	RC=152460;
    	SC=15200;
    	TRC=1635;
    	HC=1500;
    	In=35140;
    	FT=500;
    	EW=19771;
    	AK=20094;
    	ORP=1279735;
    	TP=1319600;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
		scanf("%[^\n]",name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet HTX AE--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
	 	
	 }
   	else if(c==8)
    {
    	ExSP=865000;
    	RC=121100;
    	SC=12250;
    	TRC=1635;
    	HC=1500;
    	In=35535;
    	FT=500;
    	ORP=1037520;
    	EW=20072;
    	AK=20094;
    	TP=1077686;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
		gets(name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet HTE Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
    	
    	
	}
	else if(c==9)
	{
		
    	ExSP=959000;
    	RC=134260;
    	SC=13500;
    	TRC=1635;
    	HC=1500;
    	In=38057;
    	FT=500;
    	ORP=955492;
    	EW=20072;
    	AK=20094;
    	TP=995,357;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet HTK Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax  %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
    	
		
	}
	else if(c==10)
	{
	
    	ExSP=1009000;
    	RC=141260;
    	SC=14650;
    	TRC=1635;
    	HC=1500;
    	In=39398;
    	FT=500;
    	EW=20072;
    	AK=20094;
    	ORP=1041606;
    	TP=1081471;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet HTK+ Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
    	
	}
	else if(c==11)
	{
		
    	ExSP=1089000;
    	RC=155260;
    	SC=15225;
    	TRC=1635;
    	HC=1500;
    	In=41545;
    	FT=500;
    	EW=20072;
    	AK=20094;
    	ORP=1316871;
    	TP=1356736;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet HTX Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
	}
	else if(c==12)
	{
		ExSP=1239000;
    	RC=173460;
    	SC=16150;
    	TRC=1635;
    	HC=1500;
    	In=45569;
    	FT=500;
    	EW=20072;
    	AK=20094;
    	ORP=1477814;
    	TP=1517980;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet HTX+ Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
	}
     else if(c==13)
     {
     	ExSP=1295000;
    	RC=181300;
    	SC=17000;
    	TRC=1635;
    	HC=1500;
    	In=47071;
    	FT=500;
    	EW=20072;
    	AK=20094;
    	ORP=1544006;
    	TP=1582172;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
        scanf("%[^\n]",name);
    	printf("Mobile number:");
    	scanf("%d",&Cont);
    	
    	
    	printf("\n--Sonet GTX+ Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP);
    	printf("\nService charge:%d",SC);
    	printf("\nRegistration Charges Life Tax %d",RC);
    	printf("\nTemporary Registration Charges:%d",TRC);
    	printf("\nHypothecation Charges:%d",HC);
    	printf("\nInsurance:%d",In);
    	printf("\nFastTag:%d",FT);
    	printf("\nTotal On Road Price %d",ORP);
    	printf("\nExtended Warranty:%d",EW);
    	printf("\nAccessory Kit:%d",AK);
    	printf("\nThe Total Price = %d",TP);
	 }
   }
   void seltoscars()
   {
   	 printf("\n----KIA SELTOS PRICE LIST----");
   	    
   		char name2[20];
   		int s,Cont2,ExSP1,SC1,RC1,TRC1,HC1,In1,FT1,EW1,AK1,ORP1,TP1;
   		

	printf("\nFor Seltos HTE Petrol Enter 1");
    printf("\nFor Seltos HTK Petrol Enter 2");
    printf("\nFor Seltos HTK+ Petrol Enter 3");
    printf("\nFor Seltos HTX Petrol Enter 4");
    printf("\nFor Seltos HTX+ Petrol Enter 5");
    printf("\nFor Seltos GTX+ Petrol Enter 6");
    printf("\nFor Seltos HTE Diesel Enter 7");
    printf("\nFor Seltos HTK Diesel Enter 8");
    printf("\nFor Seltos HTK+ Diesel Enter 9");
    printf("\nFor Seltos HTX Diesel Enter 10");
    printf("\nFor Seltos HTX+ Diesel Enter 11");
    printf("\nFor Seltos GTX+ Diesel Enter 12");
    printf("\nFor Seltos X LINE Diesel Enter 13");
   
    printf("\nEnter Your Model of your Car:");
    scanf("%d",&s);
    
    if(s==1)
    {
    	ExSP1=995000;
    	RC1=139300;
    	SC1=11330;
    	TRC1=1635;
    	HC1=1500;
    	In1=40802;
    	FT1=500;
    	EW1=23877;
    	AK1=27203;
    	ORP1=1190067;
    	TP1=1241147;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	scanf("%s",&name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n-- Seltos HTE Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
    	
	}
	else if(s==2)
	{
		
    	ExSP1=1095000;
    	RC1=139300;
    	SC1=12050;
    	TRC1=1635;
    	HC1=1500;
    	In1=40802;
    	FT1=500;
    	EW1=23877;
    	AK1=26569;
    	ORP1=1318599;
    	TP1=1369045;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n--Seltos HTK Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
		
	}
	else if(s==3)
	{
	
    	ExSP1=1199000;
    	RC1=167860;
    	SC1=13205;
    	TRC1=1635;
    	HC1=1500;
    	In1=46640;
    	FT1=500;
    	EW1=23877;
    	AK1=26569;
    	ORP1=1479571;
    	TP1=1492776;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n--Seltos HTK+ Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
	}
	else if(s==4)
	{
		
    	ExSP1=1385000;
    	RC1=193900;
    	SC1=14200;
    	TRC1=1635;
    	HC1=1500;
    	In1=51963;
    	FT1=500;
    	EW1=23877;
    	AK1=17856;
    	ORP1=1648698;
    	TP1=1690431;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n--Seltos HTX Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
	}
	else if(s==5)
	{
		ExSP1=1485000;
    	RC1=207900;
    	SC1=15480;
    	TRC1=1635;
    	HC1=1500;
    	In1=54825;
    	FT1=500;
    	EW1=23877;
    	AK1=17856;
    	ORP1=1766840;
    	TP1=1808573;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n--Seltos HTX+ Petrol--");
    printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
	}
     else if(s==6)
     {
     	ExSP1=1555000;
    	RC1=217700;
    	SC1=16800;
    	TRC1=1635;
    	HC1=1500;
    	In1=56828;
    	FT1=500;
    	EW1=23877;
    	AK1=17856;
    	ORP1=1849963;
    	TP1=1891696;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n--Seltos GTX+ Petrol--");
     printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
	 }
	else if(s==7)
    {
    	ExSP1=1075000;
    	RC1=150500;
    	SC1=12200;
    	TRC1=1635;
    	HC1=1500;
    	In1=43092;
    	FT1=500;
    	EW1=26532;
    	AK1=27203;
    	ORP1=1284427;
    	TP1=1338162;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	scanf("%s",&name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n-- Seltos HTE Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
    	
	}
	else if(s==8)
	{
		
    	ExSP1=1209000;
    	RC1=169260;
    	SC1=13050;
    	TRC1=1635;
    	HC1=1500;
    	In1=46926;
    	FT1=500;
    	EW1=26532;
    	AK1=26569;
    	ORP1=1441871;
    	TP1=1494972;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n--Seltos HTK Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
		
	}
	else if(s==9)
	{
	
    	ExSP1=1329000;
    	RC1=186060;
    	SC1=14680;
    	TRC1=1635;
    	HC1=1500;
    	In1=53108;
    	FT1=500;
    	EW1=26532;
    	AK1=26569;
    	ORP1=1586483;
    	TP1=1639584;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n--Seltos HTK+ Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
	}
	else if(s==10)
	{
		
    	ExSP1=1505000;
    	RC1=150500;
    	SC1=15760;
    	TRC1=1635;
    	HC1=1500;
    	In1=55397;
    	FT1=500;
    	EW1=26532;
    	AK1=17856;
    	ORP1=1730292;
    	TP1=1774680;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n--Seltos HTX Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
	}
	else if(s==11)
	{
		ExSP1=1609000;
    	RC1=225260;
    	SC1=16880;
    	TRC1=1635;
    	HC1=1500;
    	In1=58373;
    	FT1=500;
    	EW1=26532;
    	AK1=17856;
    	ORP1=1913148;
    	TP1=1957536;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n--Seltos HTX+ Diesel--");
    printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
	}
     else if(s==12)
     {
     	ExSP1=1795000;
    	RC1=251300;
    	SC1=17900;
    	TRC1=1635;
    	HC1=1500;
    	In1=63696;
    	FT1=500;
    	EW1=26532;
    	AK1=17856;
    	ORP1=2131031;
    	TP1=2175419;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n--Seltos GTX+ Diesel--");
    printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
	 }
	  else if(s==13)
     {
     	ExSP1=1819000;
    	RC1=254660;
    	SC1=18000;
    	TRC1=1635;
    	HC1=1500;
    	In1=64268;
    	FT1=500;
    	EW1=26532;
    	AK1=17856;
    	ORP1=2159563;
    	TP1=2203951;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name2);
    	printf("Mobile number:");
    	scanf("%d",&Cont2);
    	
    	
    	printf("\n--Seltos X LINE--");
        printf("\nEx Showroom Price:%d",ExSP1);
    	printf("\nService charge:%d",SC1);
    	printf("\nRegistration Charges Life Tax %d",RC1);
    	printf("\nTemporary Registration Charges:%d",TRC1);
    	printf("\nHypothecation Charges:%d",HC1);
    	printf("\nInsurance:%d",In1);
    	printf("\nFastTag:%d",FT1);
    	printf("\nTotal On Road Price %d",ORP1);
    	printf("\nExtended Warranty:%d",EW1);
    	printf("\nAccessory Kit:%d",AK1);
    	printf("\nThe Total Price = %d",TP1);
	 }
   }
   void carenscars()
   {
   	 printf("\n----THE CARENS PRICE LIST----");
   	    
   		char name3[20];
   		int p,Cont3,ExSP2,SC2,RC2,TRC2,HC2,In2,FT2,EW2,AK2,ORP2,TP2;
   		

    printf("\nFor CARENS Premium 7 Petrol Enter 1");
    printf("\nFor CARENS Prestige 7 Petrol Enter 2");
    printf("\nFor CARENS Prestige Plus 7 Petrol Enter 3");
    printf("\nFor CARENS Luxury7 Petrol Enter 4");
    printf("\nFor CARENS Luxury Plus 6 Petrol Enter 5");
    printf("\nFor CARENS Luxury Plus 7 Petrol Enter 6");
    printf("\nFor CARENS Premium 7 Diesel Enter 7");
    printf("\nFor CARENS Prestige 7 Diesel Enter 8");
    printf("\nFor CARENS Prestige Plus 7 Diesel Enter 9");
    printf("\nFor CARENS Luxury7 Diesel Enter 10");
    printf("\nFor CARENS Luxury Plus 6 Diesel Enter 11");
    printf("\nFor CARENS Luxury Plus 7 Diesel Enter 12");
   
    printf("\nEnter Your Model of your Car:");
    scanf("%d",&p);	
    
    if(p==1)
    {
    	ExSP2=899000;
    	RC2=139844;
    	SC2=9990;
    	TRC2=1635;
    	HC2=1500;
    	In2=36685;
    	FT2=500;
    	EW2=23877;
    	AK2=19047;
    	ORP2=1089154;
    	TP2=1132078;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name3);
    	printf("Mobile number:");
    	scanf("%d",&Cont3);
    	
    	
    	printf("\n-- CARENS Premium 7 Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP2);
    	printf("\nService charge:%d",SC2);
    	printf("\nRegistration Charges Life Tax %d",RC2);
    	printf("\nTemporary Registration Charges:%d",TRC2);
    	printf("\nHypothecation Charges:%d",HC2);
    	printf("\nInsurance:%d",In2);
    	printf("\nFastTag:%d",FT2);
    	printf("\nTotal On Road Price %d",ORP2);
    	printf("\nExtended Warranty:%d",EW2);
    	printf("\nAccessory Kit:%d",AK2);
    	printf("\nThe Total Price = %d",TP2);
    	
	}
	else if(p==2)
	{
		
    	ExSP2=999000;
    	RC2=155384;
    	SC2=10990;
    	TRC2=1635;
    	HC2=1500;
    	In2=39372;
    	FT2=500;
    	EW2=23877;
    	AK2=19047;
    	ORP2=1205694;
    	TP2=1248618;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name3);
    	printf("Mobile number:");
    	scanf("%d",&Cont3);
    	
    	
    	printf("\n-- CARENS Prestige 7 Petrol --");
    	printf("\nEx Showroom Price:%d",ExSP2);
    	printf("\nService charge:%d",SC2);
    	printf("\nRegistration Charges Life Tax %d",RC2);
    	printf("\nTemporary Registration Charges:%d",TRC2);
    	printf("\nHypothecation Charges:%d",HC2);
    	printf("\nInsurance:%d",In2);
    	printf("\nFastTag:%d",FT2);
    	printf("\nTotal On Road Price %d",ORP2);
    	printf("\nExtended Warranty:%d",EW2);
    	printf("\nAccessory Kit:%d",AK2);
    	printf("\nThe Total Price = %d",TP2);
		
	}
	else if(p==3)
	{
	
    	ExSP2=1349000;
    	RC2=139844;
    	SC2=11550;
    	TRC2=1635;
    	HC2=1500;
    	In2=48775;
    	FT2=500;
    	EW2=23877;
    	AK2=19047;
    	ORP2=1552844;
    	TP2=1595768;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name3);
    	printf("Mobile number:");
    	scanf("%d",&Cont3);
    	
    	
    	printf("\n-- CARENS Prestige Plus 7 Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP2);
    	printf("\nService charge:%d",SC2);
    	printf("\nRegistration Charges Life Tax %d",RC2);
    	printf("\nTemporary Registration Charges:%d",TRC2);
    	printf("\nHypothecation Charges:%d",HC2);
    	printf("\nInsurance:%d",In2);
    	printf("\nFastTag:%d",FT2);
    	printf("\nTotal On Road Price %d",ORP2);
    	printf("\nExtended Warranty:%d",EW2);
    	printf("\nAccessory Kit:%d",AK2);
    	printf("\nThe Total Price = %d",TP2);
	}
	else if(p==4)
	{
		
    	ExSP2=1499000;
    	RC2=254726;
    	SC2=12690;
    	TRC2=1635;
    	HC2=1500;
    	In2=52805;
    	FT2=500;
    	EW2=23877;
    	AK2=19047;
    	ORP2=1822856;
    	TP2=1865780;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name3);
    	printf("Mobile number:");
    	scanf("%d",&Cont3);
    	
    	
    	printf("\n-- CARENS Luxury7 Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP2);
    	printf("\nService charge:%d",SC2);
    	printf("\nRegistration Charges Life Tax %d",RC2);
    	printf("\nTemporary Registration Charges:%d",TRC2);
    	printf("\nHypothecation Charges:%d",HC2);
    	printf("\nInsurance:%d",In2);
    	printf("\nFastTag:%d",FT2);
    	printf("\nTotal On Road Price %d",ORP2);
    	printf("\nExtended Warranty:%d",EW2);
    	printf("\nAccessory Kit:%d",AK2);
    	printf("\nThe Total Price = %d",TP2);
	}
	else if(p==5)
	{
		ExSP2=1619000;
    	RC2=320771;
    	SC2=13499;
    	TRC2=1635;
    	HC2=1500;
    	In2=58178;
    	FT2=500;
    	EW2=23877;
    	AK2=19047;
    	ORP2=2015083;
    	TP2=2058007;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name3);
    	printf("Mobile number:");
    	scanf("%d",&Cont3);
    	
    	
    	printf("\n-- CARENS Luxury Plus 6 Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP2);
    	printf("\nService charge:%d",SC2);
    	printf("\nRegistration Charges Life Tax %d",RC2);
    	printf("\nTemporary Registration Charges:%d",TRC2);
    	printf("\nHypothecation Charges:%d",HC2);
    	printf("\nInsurance:%d",In2);
    	printf("\nFastTag:%d",FT2);
    	printf("\nTotal On Road Price %d",ORP2);
    	printf("\nExtended Warranty:%d",EW2);
    	printf("\nAccessory Kit:%d",AK2);
    	printf("\nThe Total Price = %d",TP2);;
	}
     else if(p==6)
     {
     	ExSP2=1619000;
    	RC2=320771;
    	SC2=13499;
    	TRC2=1635;
    	HC2=1500;
    	In2=58178;
    	FT2=500;
    	EW2=23877;
    	AK2=19047;
    	ORP2=2015083;
    	TP2=2058007;
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name3);
    	printf("Mobile number:");
    	scanf("%d",&Cont3);
    	
    	
    	printf("\n-- CARENS Luxury Plus 7 Petrol--");
    	printf("\nEx Showroom Price:%d",ExSP2);
    	printf("\nService charge:%d",SC2);
    	printf("\nRegistration Charges Life Tax %d",RC2);
    	printf("\nTemporary Registration Charges:%d",TRC2);
    	printf("\nHypothecation Charges:%d",HC2);
    	printf("\nInsurance:%d",In2);
    	printf("\nFastTag:%d",FT2);
    	printf("\nTotal On Road Price %d",ORP2);
    	printf("\nExtended Warranty:%d",EW2);
    	printf("\nAccessory Kit:%d",AK2);
    	printf("\nThe Total Price = %d",TP2);
	 }
	else if(p==7)
    {
    	ExSP2=1099000;
    	RC2=207551;
    	SC2=10990;
    	TRC2=1635;
    	HC2=1500;
    	In2=42058;
    	FT2=500;
    	EW2=23877;
    	AK2=19047;
    	ORP2=1363234;
    	TP2=1406158;
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name3);
    	printf("Mobile number:");
    	scanf("%d",&Cont3);
    	
    	
    	printf("\n-- CARENS Premium 7 Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP2);
    	printf("\nService charge:%d",SC2);
    	printf("\nRegistration Charges Life Tax %d",RC2);
    	printf("\nTemporary Registration Charges:%d",TRC2);
    	printf("\nHypothecation Charges:%d",HC2);
    	printf("\nInsurance:%d",In2);
    	printf("\nFastTag:%d",FT2);
    	printf("\nTotal On Road Price %d",ORP2);
    	printf("\nExtended Warranty:%d",EW2);
    	printf("\nAccessory Kit:%d",AK2);
    	printf("\nThe Total Price = %d",TP2);
    	
	}
	else if(p==8)
	{
		
    	ExSP2=1199000;
    	RC2=226421;
    	SC2=11560;
    	TRC2=1635;
    	HC2=1500;
    	In2=44745;
    	FT2=500;
    	EW2=23877;
    	AK2=19047;
    	ORP2=1466491;
    	TP2=1509415;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name3);
    	printf("Mobile number:");
    	scanf("%d",&Cont3);
    	
    	
    	printf("\n-- CARENS Prestige 7 Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP2);
    	printf("\nService charge:%d",SC2);
    	printf("\nRegistration Charges Life Tax %d",RC2);
    	printf("\nTemporary Registration Charges:%d",TRC2);
    	printf("\nHypothecation Charges:%d",HC2);
    	printf("\nInsurance:%d",In2);
    	printf("\nFastTag:%d",FT2);
    	printf("\nTotal On Road Price %d",ORP2);
    	printf("\nExtended Warranty:%d",EW2);
    	printf("\nAccessory Kit:%d",AK2);
    	printf("\nThe Total Price = %d",TP2);
		
	}
	else if(p==9)
	{
	
    	ExSP2=1349000;
    	RC2=254726 ;
    	SC2=12990;
    	TRC2=1635;
    	HC2=1500;
    	In2=48775;
    	FT2=500;
    	EW2=23877;
    	AK2=19047;
    	ORP2=1621951;
    	TP2=1664875;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name3);
    	printf("Mobile number:");
    	scanf("%d",&Cont3);
    	
    	
    	printf("\n-- CARENS Prestige Plus 7 Diesel--");
    	printf("\nEx Showroom Price:%d",ExSP2);
    	printf("\nService charge:%d",SC2);
    	printf("\nRegistration Charges Life Tax %d",RC2);
    	printf("\nTemporary Registration Charges:%d",TRC2);
    	printf("\nHypothecation Charges:%d",HC2);
    	printf("\nInsurance:%d",In2);
    	printf("\nFastTag:%d",FT2);
    	printf("\nTotal On Road Price %d",ORP2);
    	printf("\nExtended Warranty:%d",EW2);
    	printf("\nAccessory Kit:%d",AK2);
    	printf("\nThe Total Price = %d",TP2);
	}
	else if(p==10)
	{
		
    	ExSP2=1499000;
    	RC2=283031;
    	SC2=13550;
    	TRC2=1635;
    	HC2=1500;
    	In2=52805;
    	FT2=500;
    	EW2=23877;
    	AK2=19047;
    	ORP2=1852021;
    	TP2=1894945;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name3);
    	printf("Mobile number:");
    	scanf("%d",&Cont3);
    	
    	
    	printf("\n-- CARENS Luxury7 Diesel --");
    	printf("\nEx Showroom Price:%d",ExSP2);
    	printf("\nService charge:%d",SC2);
    	printf("\nRegistration Charges Life Tax %d",RC2);
    	printf("\nTemporary Registration Charges:%d",TRC2);
    	printf("\nHypothecation Charges:%d",HC2);
    	printf("\nInsurance:%d",In2);
    	printf("\nFastTag:%d",FT2);
    	printf("\nTotal On Road Price %d",ORP2);
    	printf("\nExtended Warranty:%d",EW2);
    	printf("\nAccessory Kit:%d",AK2);
    	printf("\nThe Total Price = %d",TP2);
	}
	else if(p==11)
	{
		ExSP2=1699000;
    	RC2=139844;
    	SC2=14890;
    	TRC2=1635;
    	HC2=1500;
    	In2=58178;
    	FT2=500;
    	EW2=23877;
    	AK2=19047;
    	ORP2=1915547;
    	TP2=1958471;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name3);
    	printf("Mobile number:");
    	scanf("%d",&Cont3);
    	
    	
    	printf("\n-- CARENS Luxury Plus 6 Diesel --");
    	printf("\nEx Showroom Price:%d",ExSP2);
    	printf("\nService charge:%d",SC2);
    	printf("\nRegistration Charges Life Tax %d",RC2);
    	printf("\nTemporary Registration Charges:%d",TRC2);
    	printf("\nHypothecation Charges:%d",HC2);
    	printf("\nInsurance:%d",In2);
    	printf("\nFastTag:%d",FT2);
    	printf("\nTotal On Road Price %d",ORP2);
    	printf("\nExtended Warranty:%d",EW2);
    	printf("\nAccessory Kit:%d",AK2);
    	printf("\nThe Total Price = %d",TP2);
	}
     else if(p==12)
    {
        ExSP2=1699000;
    	RC2=139844;
    	SC2=14890;
    	TRC2=1635;
    	HC2=1500;
    	In2=58178;
    	FT2=500;
    	EW2=23877;
    	AK2=19047;
    	ORP2=1915547;
    	TP2=1958471;
    	
   	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name3);
    	printf("Mobile number:");
    	scanf("%d",&Cont3);
    	
    	
    	printf("\n-- CARENS Luxury Plus 7 Diesel --");
    	printf("\nEx Showroom Price:%d",ExSP2);
    	printf("\nService charge:%d",SC2);
    	printf("\nRegistration Charges Life Tax %d",RC2);
    	printf("\nTemporary Registration Charges:%d",TRC2);
    	printf("\nHypothecation Charges:%d",HC2);
    	printf("\nInsurance:%d",In2);
    	printf("\nFastTag:%d",FT2);
    	printf("\nTotal On Road Price %d",ORP2);
    	printf("\nExtended Warranty:%d",EW2);
    	printf("\nAccessory Kit:%d",AK2);
    	printf("\nThe Total Price = %d",TP2);
	 }
   }
   void carnivalcars()

   {
     printf("\n----KIA CARNIVAL PRICE LIST----");
   	    
   		char name4[20];
   		int t,Cont4,ExSP3,SC3,RC3,TRC3,HC3,In3,FT3,EW3,AK3,ORP3,TP3;
   		
   	
   	printf("\n For KIA CARNIVAL PREMIUM 7 Enter 1:");
   	printf("\n For KIA CARNIVAL PRESTIGE 6 Enter 2:");
   	printf("\n For KIA CARNIVAL PRESTIGE 7 Enter 3:");
   	printf("\n For KIA CARNIVAL LIMOUSINE 7 Enter 4:");
   	printf("\n For KIA CARNIVAL LIMOUSINE Plus 7 Enter 5:");
   	
   	printf("\nEnter Your Model of your Car:");
    scanf("%d",&t);
	
	if(t==1)
	{
		ExSP3=2549000;
		SC3=20999;
    	RC3=356860;
    	TRC3=1635;
    	HC3=1500;
    	In3=106178;
    	FT3=500;
    	EW3=61950;
    	AK3=37543;
    	ORP3=3036672;
    	TP3=3136165;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name4);
    	printf("Mobile number:");
    	scanf("%d",&Cont4);
    	
    	
    	printf("\n--KIA CARNIVAL PREMIUM 7--");
    	printf("\nEx Showroom Price:%d",ExSP3);
    	printf("\nService charge:%d",SC3);
    	printf("\nRegistration Charges Life Tax %d",RC3);
    	printf("\nTemporary Registration Charges:%d",TRC3);
    	printf("\nHypothecation Charges:%d",HC3);
    	printf("\nInsurance:%d",In3);
    	printf("\nFastTag:%d",FT3);
    	printf("\nTotal On Road Price %d",ORP3);
    	printf("\nExtended Warranty:%d",EW3);
    	printf("\nAccessory Kit:%d",AK3);
    	printf("\nThe Total Price = %d",TP3);
		
		}
		else if(t==2)
		{
		ExSP3=2949000;
		SC3=24000;
    	RC3=412860;
    	TRC3=1635;
    	HC3=1500;
    	In3=118170;
    	FT3=500;
    	EW3=61950;
    	AK3=31483;
    	ORP3=3507665;
    	TP3=3601098;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name4);
    	printf("Mobile number:");
    	scanf("%d",&Cont4);
    	
    	
    	printf("\n--KIA CARNIVAL PRESTIGE 6 --");
    	printf("\nColor: Metallic ");
    	printf("\nEx Showroom Price:%d",ExSP3);
    	printf("\nService charge:%d",SC3);
    	printf("\nRegistration Charges Life Tax %d",RC3);
    	printf("\nTemporary Registration Charges:%d",TRC3);
    	printf("\nHypothecation Charges:%d",HC3);
    	printf("\nInsurance:%d",In3);
    	printf("\nFastTag:%d",FT3);
    	printf("\nTotal On Road Price %d",ORP3);
    	printf("\nExtended Warranty:%d",EW3);
    	printf("\nAccessory Kit:%d",AK3);
    	printf("\nThe Total Price = %d",TP3);
			
		}
			else if(t==3)
		{
		ExSP3=2999000;
		SC3=26599;
    	RC3=419860;
    	TRC3=1635;
    	HC3=1500;
    	In3=119669;
    	FT3=500;
    	EW3=61950;
    	AK3=37543;
    	ORP3=3568763;
    	TP3=3668256;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name4);
    	printf("Mobile number:");
    	scanf("%d",&Cont4);
    	
    	
    	printf("\n--KIA CARNIVAL PRESTIGE 7 --");
    	printf("\nColor: Metallic ");
    	printf("\nEx Showroom Price:%d",ExSP3);
    	printf("\nService charge:%d",SC3);
    	printf("\nRegistration Charges Life Tax %d",RC3);
    	printf("\nTemporary Registration Charges:%d",TRC3);
    	printf("\nHypothecation Charges:%d",HC3);
    	printf("\nInsurance:%d",In3);
    	printf("\nFastTag:%d",FT3);
    	printf("\nTotal On Road Price %d",ORP3);
    	printf("\nExtended Warranty:%d",EW3);
    	printf("\nAccessory Kit:%d",AK3);
    	printf("\nThe Total Price = %d",TP3);
			
		}
		else if(t==4)
		{
		ExSP3=3249000;
		SC3=30000;
    	RC3=454860;
    	TRC3=1635;
    	HC3=1500;
    	In3=126164;
    	FT3=500;
    	EW3=61950;
    	AK3=38444;
    	ORP3=3863659;
    	TP3=3964053;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name4);
    	printf("Mobile number:");
    	scanf("%d",&Cont4);
    	
    	
    	printf("\n--KIA CARNIVAL LIMOUSINE 7--");
    	printf("\nColor: Metallic ");
    	printf("\nEx Showroom Price:%d",ExSP3);
    	printf("\nService charge:%d",SC3);
    	printf("\nRegistration Charges Life Tax %d",RC3);
    	printf("\nTemporary Registration Charges:%d",TRC3);
    	printf("\nHypothecation Charges:%d",HC3);
    	printf("\nInsurance:%d",In3);
    	printf("\nFastTag:%d",FT3);
    	printf("\nTotal On Road Price %d",ORP3);
    	printf("\nExtended Warranty:%d",EW3);
    	printf("\nAccessory Kit:%d",AK3);
    	printf("\nThe Total Price = %d",TP3);
			}	
	 else if(t==5)
	 {
	 	ExSP3=3449000;
	 	SC3=33000;
    	RC3=482860;
    	TRC3=1635;
    	HC3=1500;
    	In3=133160;
    	FT3=500;
    	EW3=61950;
    	AK3=38444;
    	ORP3=4101655;
    	TP3=4202049;
    	
    	printf("\n--------MALIK KIA            Cont:8886646227-----------");
    	printf("\nEnter the Customer Name:");
    	fflush(stdin);
scanf("%[^\n]",name4);
    	printf("Mobile number:");
    	scanf("%d",&Cont4);
    	
    	printf("\n--KIA CARNIVAL LIMOUSINE Plus 7--");
    	printf("\nColor: Metallic ");
    	printf("\nEx Showroom Price:%d",ExSP3);
    	printf("\nService charge:%d",SC3);
    	printf("\nRegistration Charges Life Tax %d",RC3);
    	printf("\nTemporary Registration Charges:%d",TRC3);
    	printf("\nHypothecation Charges:%d",HC3);
    	printf("\nInsurance:%d",In3);
    	printf("\nFastTag:%d",FT3);
    	printf("\nTotal On Road Price %d",ORP3);
    	printf("\nExtended Warranty:%d",EW3);
    	printf("\nAccessory Kit:%d",AK3);
    	printf("\nThe Total Price = %d",TP3);
	 } 	  
}
