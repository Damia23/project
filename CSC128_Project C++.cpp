#include <iostream>
using namespace std;
// To display  montly budget, saving and balance

void total(int,int,int,int,int,int,int,int,int,int,int,int);
void targetSavings(char,int,int,int,int,int,int,int, int ,int ,int,int,int, int,int,int);
void greeting();
void closing();

int main()
{
	char user, choose,Y,N;
	string add;
	float expenses, balance;
	int utility, food, car, petrol, house, stationery, fees , project,money, values, target, period, monthSaving,newValues;
	greeting();
	cout << "A. Workers     B. Housewives     C. Students"<<endl;
	    cout << "Choose who are you : ";
	    cin >> user;
	    
	    if (toupper (user) == 'A') // monthly budget for workers
	    {
	    	cout << "Enter Salary: RM";
	    	cin >> money;
	    	cout << "\nEnter your utility bill: RM";
 	        cin >> utility;
 	        cout << "\nEnter your food budget: RM";
 	        cin >> food;
 	        cout << "\nEnter car payment: RM";
 	        cin >> car;
 	        cout << "\nEnter house payment: RM";
 	        cin >> house;
 	        cout << "\nEnter petrol monthly budget: RM";
 	        cin >> petrol;
 	        
 	        
	    }
	    else if (toupper (user) == 'B')
	    {
	    	cout << "Enter Salary: RM";
	    	cin >> money;
	    	cout << "\nEnter your utility bill: RM";
 	        cin >> utility;
 	        cout << "\nEnter your food budget: RM";
 	        cin >> food;
 	        cout << "\nEnter car payment: RM";
 	        cin >> car;
 	        cout << "\nEnter house payment: RM";
 	        cin >> house;
 	        cout << "\nEnter petrol monthly budget: RM";
 	        cin >> petrol;
 	        
 	        
	    }
	    else
	    {
	    	cout << "Enter pocket money: RM";
	    	cin >> money;
	    	cout << "\nEnter your stationery: RM";
 	        cin >> stationery;
 	        cout << "\nEnter your food budget: RM";
 	        cin >> food;
 	        cout << "\nEnter fees: RM";
 	        cin >> fees;
 	        cout << "\nEnter project/assignment budget: RM";
 	        cin >> project;
 	        
        } 
		    cout << "\nDo you want add expenses? (Y/N): ";
		    cin >> choose;
		while (toupper(choose)!='N')
		{
			
		    cout << "\nWrite what you want to add : ";
		    cin >> add;
		    cout << "\nAdd expenses is " << add <<endl;
			cout << "\nEnter add expenses total: RM";
		    cin >> values;
		    values = newValues;
		    newValues = values + newValues;
		    cout << "\nDo you want add expenses? (Y/N): ";
		    cin >> choose;
			
     	}
		
		total(expenses, utility,  food, car,  house,  petrol,  values, stationery, fees,  project,balance,money);
		targetSavings(choose, target, period, monthSaving,balance,money,expenses,utility,food ,car ,house,petrol,values, stationery, fees,project);
		closing();
}

void total(int expenses,int utility, int food,int car, int house, int petrol, int newValues,int stationery,int fees, int project,int balance,int money)
{
	
		expenses = utility + food + car + house + petrol + newValues + stationery + fees + project;
		cout << "\nTotal expenses: RM" <<expenses<<endl;
		balance = money - expenses;
	    cout << "Balance of money:RM"<<balance<<endl;
}

void targetSavings(char choose, int target, int period, int monthSaving,int balance,int money,int expenses,int utility, int food ,int car ,int house,int petrol,int values, int stationery,int fees,int project)
{
	cout << "**************************************************"<<endl;
	cout << "\nDo you want calculate money to saving?(Y/N): ";
	cin >> choose;
	while (toupper(choose)!='N')
	{
	cout << "\nSavings period: ";
	cin >> period;
	cout <<"\nEnter your month savings: ";
	cin >> monthSaving;
	expenses = utility + food + car + house + petrol + values + stationery + fees + project;
	target= monthSaving * period;
	balance = money - expenses;
	cout << "Your savings target is RM" <<target<< "." <<endl;
	
	if(balance>monthSaving)
	{
		cout << "Great! Your achieve your month savings target. Keep savings"<<endl;
	}
	else
	{
		cout << "Oh! Your balance for this month not achieve your savings target. Control your expenses."<<endl;
	}
	cout << "\nDo you continue this same process?(Y/N): ";
	cin >> choose;
	}
	
	
}

void greeting()
{
	char name[50];
	string month;
	cout << "                             Happy Jimat                        " <<endl;
	cout << "****************************************************************" <<endl;
	cout << "                       WELCOME TO YOUR PROGRAM                  " <<endl;
	cout << "        This program will help you to manage your money         " <<endl;
	cout << "\nEnter name: ";
	cin.getline(name, 50);
	cout << "Enter month: ";
	cin >> month;
	
		
}

void closing()
{

 	cout << "****************************************************************" <<endl;
 	cout << "THANK YOU" <<endl;
 	
}


