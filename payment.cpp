#include "payment.h"
#include<cstring>

payment::payment()
{
  paymentID  = 0;
  strcpy (paymentType,"");
  paymentAmount = 0;
}


payment::payment(int PID, const char PType[20], double PAmount)
{
    paymentID = PID;
    strcpy(paymentType,PType);
    paymentAmount =PAmount;
}
void payment::checkPayment()
{
}
void payment::confirmPayment()
{
}
void payment::displayPaymentDetails()
{
}
payment::~payment()
{
//Destructor
}
