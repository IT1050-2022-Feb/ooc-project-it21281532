#include "user.h"
#include <cstring>
user::user()
{
	Customer_Id = 0;
	strcpy(Customer_Name, "");
	strcpy(Customer_Address,"");
	Customer_Mobile_No = 0;
	strcpy(Customer_Email, "");

}

user::user(int pcsId, const char pcsName[20], const char pcsAdd[30], int pcsMNo ,const char pcsEmail [30])
{

}
void user::Register_User()
{
}
void user::Search_Property(Property* pPro)
{
}
void user::Display_Details()
{
}
user::~user()
{
//Destructor 
}


