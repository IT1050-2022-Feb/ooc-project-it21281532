#include "Property.h"
#define SIZE 5
class Admin
{
private:
	int AdminId;
	char AdminName[30];
	char AdminEmail[30];
	int AdminNumber;
	char AdminUsername[30];
	char AdminPassword[30];

	Property* pro[SIZE];

public:
	Admin();
    Admin(int AId,char AName[30],char AEmail[30],int ANumber,char AUsername[30],char APassword[30]);
	void Login(char pAdminUsername[20],char pAdminPassword[20]);
	void ConfirmPropertyDetails();
	void ManagePropertyDetails();
	void UpdatePropertyDetails();
	~Admin();
};


