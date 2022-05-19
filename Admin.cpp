#include "Admin.h"
#include<cstring>

Admin::Admin()
{
	AdminId = 0;
	strcpy(AdminName, "");
	strcpy(AdminEmail, "");
	AdminNumber=0;
	strcpy(AdminUsername, "");
	strcpy(AdminPassword, "");
}

Admin::Admin(int AId,char AName[30],char AEmail[30],int ANumber,char AUsername[30],char APassword[30])
{
    
}
void Admin::Login(char pAdminUsername[20], char pAdminPassword[20])
{

}

void Admin::ConfirmPropertyDetails()
{

}

void Admin::ManagePropertyDetails()
{

}

void Admin::UpdatePropertyDetails()
{

}
Admin::~Admin()
{
	//Destructor 
}

