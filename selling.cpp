#include "selling.h"
#include <cstring>

selling::selling()
{
    sellingId = 0;
    sellingAmount = 0;
    strcpy(sellingPaytype, "");
    sellingDate = 0;
    count = 0;
}
selling::selling(const double sAmount, const char sPaytype[20],int sDate )
{

}
void selling::setsellingId(int sId)
{
}
int selling::getsellingId()
{
    return 0;
}
void selling::displaysellingDetails()
{
}
selling::~selling()
{
    //Destructor 
}
