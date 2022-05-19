#include "payment.h"
#define SIZE 2

class selling
{
private:
    int sellingId;
	double sellingAmount;
	char sellingPaytype[20];
	int sellingDate;
	int count;
	
public:
	selling();
    selling(const double sAmount, const char sPaytype[20],int sDate );
	void setsellingId(int sId);
	int getsellingId();
	void displaysellingDetails();
	~selling();	
};
