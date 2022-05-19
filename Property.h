#include "selling.h"
#include "buyer.h"
#include "Admin.h"

#define SIZE1 2
#define SIZE2 2

class Property
{
private:
	int propertyId;

public:
    Property();
	Property(int pId);
	void checkAvailability();
	void displayPropertyDetails();
	~Property();

};

