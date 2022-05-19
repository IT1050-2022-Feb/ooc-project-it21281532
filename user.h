#include "Property.h"
class user
{
private:
	int Customer_Id;
	char Customer_Name[20];
	char Customer_Address[30];
	int Customer_Mobile_No;
	char Customer_Email[30];
public:
	user();
	user(int pcsId, const char pcsName[20], const char pcsAdd[30], int pcsMNo, const char pcsEmail[30]);
	void Search_Property(Property* pPro);
    void Register_User();
    void Display_Details();
	~user();
};



