#include "Registered_Customer.h"
#include <cstring>
Registered_Customer::Registered_Customer()
{
	strcpy(Customer_Username, "");
	strcpy(Customer_Password, "");
}
Registered_Customer::Registered_Customer(const char pcsUserName[10],const char pcsPassword[10])
{

}
void Registered_Customer::Display_Details()
{
}
void Registered_Customer::login()
{
}
void Registered_Customer::logout()
{
}
char Registered_Customer::Check_Login_Details()
{
return 0;
}
Registered_Customer::~Registered_Customer()
{
//Destructor 
}


