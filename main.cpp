#include "user.h"
#include "Registered_Customer.h"
#include "buyer.h"
#include "Property.h"
#include "Admin.h"
#include "selling.h"
#include "payment.h"
#include "report.h"

#include <iostream>
using namespace std;
int main()
{
    //---- Object creation ------

    user* rg = new Registered_Customer(); // Object - RegisteredCustomer class
    Registered_Customer* buy = new buyer(); // Object - buyer class
    Property* pPro = new Property(); // Object - Property class
    selling* sell = new selling(); // Object - Selling class
    Admin* adm = new Admin(); // Object - Admin class
    payment* payme = new payment(); // Object - payment class
    report* rep = new report(); // Object - report class

     //----Method Calling------

    rg->Register_User();
    rg->Display_Details();

    buy->login();
    buy->Display_Details();
    
    pPro->checkAvailability();
    pPro->displayPropertyDetails();

    sell->getsellingId();
    sell->displaysellingDetails();
    
    adm->ManagePropertyDetails();
    adm->UpdatePropertyDetails();
    
    payme->checkPayment();;
    payme->confirmPayment();;

    rep->sellingDetailsReport();
    rep->paymentDetailsReport();
    
    //----Delete Dynamic objects------
    delete rg;
    delete buy;
    delete pPro;
    delete sell;
    delete adm;
    delete payme;
    delete rep;

    return 0;
}
