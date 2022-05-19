#include"user.h"

class Registered_Customer :public user
{
protected:
	char Customer_Username[10];
	char Customer_Password[10];
public:
	Registered_Customer();
	Registered_Customer(const char pcsUserName[10], const char pcsPassword[10]);
	void Display_Details();
	void login();
	void logout();
	char Check_Login_Details();
	~Registered_Customer();
};
