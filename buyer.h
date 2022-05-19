#include"Registered_Customer.h"
#include"Property.h"
#define SIZE 6

using namespace std;
class buyer :public Registered_Customer
{
private:
	char buyerName[20];
	int buyerNo;
	char buyerAddress[20];
	Property* buyPro[SIZE];

public:
	buyer();
	buyer(const char bName[20],const char bAddress[20]);
	void setbuyerNo(int bNo);
	int getbuyerNo();
	void displaybuyerDetails();
	~buyer();

};
