#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    //count is for total  no of vehicles in  parking
int count= 0;
int input_user;
int amount = 0;
    // r is Rickshaw , c is car , b is bike
int r = 0,c = 0 ,b=0;
int totalcars ;
int totalBuses ;
int totalRickshaws;
char decision; // to check yes or no ..if you want to delte then press y else n 
while(true)
{
    

// menu
cout<< " Press 1 : for Riskshaw" <<endl;
cout<< " Press 2 : for Car" <<endl;
cout<< " Press 3 : for Bus" <<endl;
cout<< " Press 4 : to show all Record" <<endl;
cout<< " Press 5 : to delete a record" <<endl;
cout<< " Press 6 : to close the program1" <<endl;
cin >> input_user;
if(input_user == 1 )
{
    // 1 for Riskshaw 
    if(count<50)
    {
      
    r++; // rickshaw added
    count++;
    amount=amount + 100;
      cout<< "\n Riskshaw added \n";
     }
  else
    cout<< "\nParking is already full you can't add any vehicle .\n \n";
}
else if(input_user ==2 )
{ // 2 for car
    if(count<50) // we want to add vechicle according to our place in our garage or parking . the size of our parking is for 50 vechile.
    
    {
    c++; // Car added
    count++; //increment in total vechiles
 amount=amount + 200; // total amount from each veichle 
 cout<< "\n Car added \n" ; // to show car added
    }
    else 
      cout<< "\nParking is already full you can't add any vehicle . \n \n"; // if car parking is full then we can't add any vehicle


}
else if(input_user ==3 )
{ // 3 for bus 
    if(count<50)
    {
        // Bus added
    b++; // added Bus in parking
    count++;
 amount=amount + 300; // so token for each bus is 300  if we add any car so we will add this amount on total to estimate income 

 cout<< "\n Bus added \n" ;
    }
     else 
      cout<< "\nParking is already full you can't add any vehicle . \n \n ";

}
else if(input_user ==4 )
{
     totalcars = c*200; /*  to find total amount from cars  : c is for cars , 200 is fixed price for tixet ,
      we just multiply  no of cars to fixed price to find total income from cars */

     totalBuses = b*300;
      totalRickshaws= r*100;
   cout<< "\n ******************************\n";
   cout<< "\t  cars added " <<c << " total ammount from cars "<<totalcars <<endl;
   cout<< "\t   Rickshaws added " <<r << " total ammount from Rickshaws "<<totalRickshaws <<endl;
    cout<< "\t  Buses added " <<b << " total ammount from  Buses "<<totalBuses <<endl;
    cout << "\t \t  total no of vehichles " << count << endl; // count is show total no of vechicles
    cout << "\t \t  total amount : " << amount <<endl;
      cout<< " ******************************\n "<<endl;

}


else if(input_user ==5)
{  
    cout<< "\n Warning: do you really want to delte the record , once you delte then you could't get whole record ";
    cout<< "Press 'Y' to dete and 'N' to cancel the deletion ";
    cin >> decision;
    if (decision == 'y' ||  decision == 'Y' )
    {
        b = 0; // Buses deleted
        c=0;
        r =0;
        count=0;
        amount=0;
        totalcars = 0;
     totalBuses = 0;
      totalRickshaws= 0;
    }
    else 
    {
        cout << " \n your record is not delted ";
    }
}
else if (input_user==6)
{ cout<< " if you want to close Press 'y'  : " ;
cin >> decision;
if (decision == 'y' || decision == 'Y' )
    exit(1);
    else 
    cout<< " \n you are on Program : \n" ;
}
else 
{
    cout<< "\n you entered wrong number \n ";
}

}
return 0;

}
