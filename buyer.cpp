#include "buyer.h"
#include <cstring>
buyer::buyer()
{
    strcpy(buyerName, "");
    buyerNo = 0;
    strcpy(buyerAddress, "");
}
buyer::buyer(const char bName[20],const char bAddress[20])
{
}

void buyer::setbuyerNo(int bNo)
{
}
int buyer::getbuyerNo()
{
    
}
void buyer:: displaybuyerDetails()
{
}
buyer::~buyer()
{
    //Destructor
}
