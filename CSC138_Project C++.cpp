using namespace std;
#include <iostream>
#include <string.h>
#include <iomanip>
#include <conio.h>

struct ticketRec
{
	char custName[20];
	//int numTicket;
	char date[20];
	char seat[10];
	int age;
	char movie;
	char movieName[50];
	char type[10];
	char hall[10];
	
}customer[10];



void inputData(ticketRec customer[],int u,int &numTicket) // input the data for each customer based on the number of ticket that have been booked
{
	for (int i=0; i<numTicket; i++)
	{
 	cout<<"\n\nCustomer's name  : ";
	cin>>ws;
	cin.getline(customer[i].custName,50);
	//cout << endl;
	cout<<"Customer's age : ";
	cin>>customer[i].age;
	//cout << endl;
	cout<<"Date  (Ex: 12/5/19)  : ";
	cin>>ws;
	cin.getline(customer[i].date,20);
	//cout << endl;
	cout<<"\n______________________________________________________________________________________________";
    }
	
}
void movieAge (ticketRec customer[],int u, int & price,int numTicket, int time) // display all the movies based on age

{ char movie[50];
  char movieName[40];
  char hall;
	for ( int i =0 ; i<numTicket ;i++)
	{
		if ( customer[i].age <18 ) //display all movies available for the customer's age that below than 18
		{
		    cout <<"\b\n********************************************************************************************************************" <<endl;
	       cout<<"\n\n__________________MOVIES_____________________________________________________________________________________________"<<endl;
           cout<<"\n\tMOVIES"<<setw(40)<<"RUNNING TIME "<<setw(45)<<"TICKET PRICE"<<endl;
	       cout<<"\n\n A X-MEN: DARK PHOENIX"<<setw(32)<<"114 minutes"<<setw(45)<<"RM : 17.00 ";
	       cout<<"\n\n B TOY STORY 4"<<setw(40)<<"112 minutes"<<setw(45)<<"RM : 11.00 ";       
           cout<<"\n\n E SPIDER-MAN : FAR FROM HOME"<<setw(25)<<"141 minutes"<<setw(45)<<"RM : 15.00 ";
	       cout<<"\n\n F ALADDIN"<<setw(45)<<"151 minutes "<<setw(44)<<"RM : 14.00 ";
	       cout<<"\n\n G GODZILLA :KING OF THE MONSTER"<<setw(24)<<"98 minutes  "<<setw(43)<<"RM : 16.00 ";
	       cout<<"\n_______________________________________________________________________________________________________________________";
	       cout<<"\nChoose movie: (A/B/E/F/G): ";// let the customer choose the movie by input the movie code
	       cin>>ws;
	       cin>>customer[i].movie;
	       
	    	if(toupper(customer[i].movie)=='A')
		 	{
	 	        cout<<"\nYou have chose movie : X-MEN: DARK PHOENIX"<<endl;
	 	    	cout<<"\nTime : (1) 12:30 (2) 14:40 (3) 15:40 (4)20:46"<<endl;
	 	    	cin>>time;
	 	    	price = 17;
	 	    	strcpy(customer[i].hall,"A1");
	 	        strcpy(customer[i].movieName,"X-MEN: DARK PHOENIX");
	      	}
	    	else if (toupper (customer[i].movie)=='B')
	      	{
	    		cout<<"\nYou have chose movie : TOY STORY 4"<<endl;
	 	    	cout<<"\nTime : (1) 10:40 (2) 14:40 (3) 16:15 (4)22:46"<<endl;
	 	    	cin>>time;
	 	    	price = 11;
	 	    	strcpy(customer[i].hall,"B2");
	 	        strcpy(customer[i].movieName,"TOY STORY 4");
     	  	}
    	
          	else if (toupper (customer[i].movie)=='E')
	     	{
		  		cout<<"\nYou have chose movie : SPIDER-MAN : FAR FROM HOME "<<endl;
	 	  		cout<<"\nTime : (1) 08:45 (2) 12:45 (3) 16:15 (4)20:30"<<endl;
	 	  		cin>>time;
	 	  		price = 15;
	 	  		strcpy(customer[i].hall,"E5");
	 	  		strcpy(customer[i].movieName,"SPIDER-MAN : FAR FROM HOMEX");
	      	}
	      	else if (toupper (customer[i].movie)=='F')
	      	{
		 		cout<<"\nYou have chose movie : ALADDIN"<<endl;
	 	 		cout<<"\nTime : (1) 10:40 (2)13:25  (3)17:45 (4)20:00"<<endl;
	 	 		cin>>time;
	 	 		price = 14;
	 	 		strcpy(customer[i].hall,"F6");
	 	 		strcpy(customer[i].movieName,"ALADDIN");
	 	
	     	}	
	     	else if (toupper (customer[i].movie)=='G')
	     	{
		  		cout<<"\nYou have chose movie : GODZILLA : KING OF THE MONSTER"<<endl;
	 	  		cout<<"\nTime : (1) 10:40 (2) 14:40 (3) 16:15 (4)22:46";
	 	  		cin>>time;
	 	  		price = 16;
	 	  		strcpy(customer[i].hall,"G7");
	 	  		strcpy(customer[i].movieName,"GODZILLA : KING OF THE MONSTER");
	     	}
	    	else 
     	 	{   
		 		cout<<"\ninvalid code"<<endl;
		 		price = 0;
	     	}
	     strcpy(customer[i].type,"Child"); // to set the type of customer's age that below than 18 are Child
	    }
		else if (customer[i].age >= 18) // to display all the available movied for age more or equal to 18
     	{
     	 
			cout <<"\b\n********************************************************************************************************************" <<endl;
	        cout<<"\n\n__________________MOVIES_____________________________________________________________________________________________"<<endl;
            cout<<"\n\tMOVIES"<<setw(40)<<"RUNNING TIME "<<setw(45)<<"TICKET PRICE"<<endl;
	        cout<<"\n\n A X-MEN: DARK PHOENIX"<<setw(32)<<"114 minutes"<<setw(45)<<"RM : 17.00 ";
	        cout<<"\n\n B TOY STORY 4"<<setw(40)<<"112 minutes"<<setw(45)<<"RM : 11.00 ";         
	        cout<<"\n\n C CHILD'S PLAY"<<setw(39)<<"99 minutes"<<setw(45)<<"RM : 14.00 ";
	        cout<<"\n\n D ANNABELLE COMES HOME"<<setw(31)<<"134 minutes"<<setw(45)<<"RM : 16.00 ";
	        cout<<"\n\n E SPIDER-MAN : FAR FROM HOME"<<setw(25)<<"141 minutes"<<setw(45)<<"RM : 15.00 ";
	        cout<<"\n\n F ALADDIN"<<setw(45)<<"151 minutes "<<setw(44)<<"RM : 14.00 ";
	        cout<<"\n\n G GODZILLA :KING OF THE MONSTER"<<setw(24)<<"98 minutes  "<<setw(43)<<"RM : 16.00 ";
	        cout<<"\n_______________________________________________________________________________________________________________________";
	        cout<<"\nChoose movie: (A/B/C/D/E/F/G): ";	 // let the customer choose the movie by input the movie code
	        cin>>ws;
		    cin>>customer[i].movie;
	
	    	cout << endl;
	
	
	     	if (toupper (customer[i].movie)=='A')
	   		{
	 			cout<<"\nYou have chose movie : X-MEN: DARK PHOENIX"<<endl;
	 			cout<<"\nTime : (1) 12:30 (2) 14:40 (3) 15:40 (4)20:46"<<endl;
	 			cin>>time;
	 			price = 17;
	 			strcpy(customer[i].hall,"A4");
	 			strcpy(customer[i].movieName,"X-MEN: DARK PHOENIX");
	   		}
	    	else if (toupper (customer[i].movie)=='B')
	    	{
				cout<<"\nYou have chose movie : TOY STORY 4"<<endl;
	 			cout<<"\nTime : (1) 10:40 (2) 14:40 (3) 16:15 (4)22:46"<<endl;
	 			cin>>time;
	 			price = 11;
	 			strcpy(customer[i].hall,"B2");
	 			strcpy(customer[i].movieName,"TOY STORY 4");
	    	}
	    	else if (toupper (customer[i].movie)=='C')
	    	{
				cout<<"\nYou have chose movie : CHILD'S PLAY"<<endl;
	 			cout<<"\nTime : (1) 10:40 (2) 14:40 (3) 16:15 (4)22:46"<<endl;
	 			cin>>time;
	 			price = 14;
	 			strcpy(customer[i].hall,"C3");
	 			strcpy(customer[i].movieName,"CHILD'S PLAY");
	    	}	
	    	else if (toupper (customer[i].movie)=='D')
	    	{
	  			cout<<"\nYou have chose movie : ANNABELLE COMES HOME"<<endl;
	 			cout<<"\nTime : (1) 10:30 (2) 12:35 (3) 16:20 (4)22:00"<<endl;
	 			cin>>time;
	 			price = 16;
	 			strcpy(customer[i].hall,"D4");
	 			strcpy(customer[i].movieName,"ANNABELLE COMES HOME");
	 		}
	    	else if (toupper (customer[i].movie)=='E')
	    	{
				cout<<"\nYou have chose movie : SPIDER-MAN : FAR FROM HOME "<<endl;
	 			cout<<"\nTime : (1) 08:45 (2) 12:45 (3) 16:15 (4)20:30"<<endl;
	 			cin>>time;
	 			price = 15;
	 			strcpy(customer[i].hall,"E5");
	 			strcpy(customer[i].movieName,"SPIDER-MAN : FAR FROM HOMEX");
	    	}
	    	else if (toupper (customer[i].movie)=='F')
	    	{
				cout<<"\nYou have chose movie : ALADDIN"<<endl;
	 			cout<<"\nTime : (1) 10:40 (2)13:25  (3)17:45 (4)20:00"<<endl;
	 			cin>>time;
	 			price = 14;
	 			strcpy(customer[i].hall,"F6");
	 			strcpy(customer[i].movieName,"ALADDIN");
	 		}	
    		else if (toupper (customer[i].movie)=='G')
	    	{
				cout<<"\nYou have chose movie : GODZILLA : KING OF THE MONSTER"<<endl;
	 			cout<<"\nTime : (1) 10:40 (2) 14:40 (3) 16:15 (4)22:46"<<endl;
	 			cin>>time;
	 			price = 16;
	 			strcpy(customer[i].hall,"G7");
	 			strcpy(customer[i].movieName,"GODZILLA : KING OF THE MONSTER");
	    	}
	   		else 
	   		 {
				cout<<"\ninvalid code"<<endl;
				price = 0;
	   		 }	
	   		 strcpy(customer[i].type,"Adult"); // to set the type of customer's age that more or equal to 18 are Adult
      	}
	}
}
void calcPrice(ticketRec customer[],int u,int &numTicket, int &totalPrice, int &totalPayment, char &movie,int price) // to calculate the price 
{
	
	totalPrice = numTicket*price; // calculate the price 
	

	totalPayment=totalPayment+totalPrice; // count the total price

	
}

void chooseSeat(ticketRec customer[],int u,int numTicket) // display the seat 
{
	char seat[100];
	
	cout << endl;
	cout<<"seat:";
	cout<<"\n      A | 1 | 2 | 3 | 4 | 5 | 6 | 7 |";
	cout<<"\n      B | 1 | 2 | 3 | 4 | 5 | 6 | 7 |";
	cout<<"\n      C | 1 | 2 | 3 | 4 | 5 | 6 | 7 |";
	cout<<"\n      D | 1 | 2 | 3 | 4 | 5 | 6 | 7 |";
	cout<<"\n______________________________________________________________________________________________";
	cout<<"\n\nChoose seat: (ex: A1) :"<<endl; // let the customer input the seat
	for ( int i = 0 ; i <numTicket ; i++)
	 {
	    cin>>ws;
	    cin.getline(customer[i].seat, 100);
	    
     }
     cout <<"YOUR SEAT : " <<endl;
	for (int i=0; i<numTicket; i++)
	cout <<i+1<<"."<<customer[i].seat<<endl; // display the customer's seat
	cout<<"\n___________________________________________________________________________________________________";
    


}
void DisplayTicket( ticketRec customer[],int numTicket) // display ticket for each customer 
{ char custName , movieName , type ;
  int age, Price;

	for (int i = 0 ; i <numTicket ; i++)
	{
		cout<<"\n______________________________________________________________________________________________";
		cout<<"\nCINEMA TICKET_____________________________________|********************************************";
		cout<<"\nMOVIE:"<<customer[i].movieName;
		cout<<"\nCustomer's Name :"<<customer[i].custName;
		cout<<"\nAge :"<<customer[i].age<<setw(44)<<"|"<<"\tDate:"<<customer[i].date;
		cout<<"\nType:"<<customer[i].type<<setw(41)<<"|"<< "\tSeat:"<<customer[i].seat;
		cout<<"\nDate :"<<customer[i].date<<setw(38)<<"|"<<"\tHall:"<<customer[i].hall;
		cout<<"\n**************************************************|********************************************";
		cout<<"\n__________________________________________________|_____________________________________________";
		
		
		
	}
	
}

int payment() // payment method 
{
	int cardNum , cvv;
	char paymentCode , exDate[15] , username[50] , pass[15];
	cout<<endl;
	cout<<"\n*******************************************************************";
	cout<<"\n-PAYMENT METHOD-";
	cout<<"\nA- Debit card " << endl;
	cout<<"\nB- Credit card " << endl;
	cout<<"\nC- Online banking " << endl;
	cout<<"\Enter code for payment method : ";
	cin>>paymentCode;
	cout<<"\n*********************************************************************";
	cout<<"\nMAKE PAYMENT- " <<endl;
	if (toupper (paymentCode) == 'A' || toupper(paymentCode)=='B')
	{
		cout<<"Enter card number : " ;
		cin>>cardNum;
		cout<<"Enter expiry date : ";
		cin>>ws;
		cin.getline(exDate,15);
		cout<<"Enter CVV : ";
		cin>>cvv;
	}
	else if (toupper (paymentCode) == 'C' )
	{
	cout<<"Enter username : ";
	cin>>ws;
	cin.getline(username,50);
	cout<<"Enter password : ";
	cin>>ws;
	cin.getline(pass,50);
    }
    cout<<"\nYou Have paid sucessfully ;) Thank you , Have a nice day " << endl;
    
}
void proceed(char& ans)
{
	cout << endl;
	cout<<"Do you want to add new ticket? ";
	cout<<" (1) yes";
	cout<<" (2) no";
	cout<<" enter 1 or 2 : ";
	cin>>ans;
	
	
	
	
}
int main ()
{   
    ticketRec customer[10];
	char custName[50], answer, movie, seat[100] , type;
	int numTicket=0, Price=0, Payment=0, time, totalPrice=0, totalPayment=0 , age;
	
	cout<<"\b\n********************************************************************************************************************";
	cout<<"\b\a                                            WELCOME TO THE GRANDE CINEMA" ;
	cout<<"\n                                             STARWAY MALL BATU PAHAT JOHOR";
	cout<<"\b\n********************************************************************************************************************";

	
	do
	{
		cout<<"\nHow many ticket do want booked?  : ";
		cin>>ws;
		cin>>numTicket;
		inputData(customer,10, numTicket); // to call the function of inputData
		movieAge (customer,10, Price,numTicket,time);// to call the function of movieAge
		calcPrice(customer, 10, numTicket,totalPrice, totalPayment, movie,Price); // to vall the function calcPrice
	    chooseSeat(customer,10,numTicket); // to call the function of chooseSeat
	    
		
		
	}
	while (answer=='1');
	cout<<"\n___________________________________________________________________________";
	cout<<"\nTotal payment : RM" <<totalPayment;
    payment();
    cout<<"\nTotal :RM "<<totalPayment;
    
    DisplayTicket(customer, numTicket); // to call the function of DisplayTicket
    
		
	
	cout<<"\nYou have choose movie : " << endl;
     for(int i=0; i<numTicket; i++)
		{
			cout<<i+1<<"."<<customer[i].movieName<<endl; // to display the movie
		}
		
		proceed(answer);
		cout<<"\nTHANK YOU FOR BUYING WITH US . HAVE A NICE DAY :) ";
        cout<<"\nDO ENJOY YOUR MOVIE";
    
    return 0;
}
