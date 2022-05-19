#include"selling.h"
#include"payment.h"
#define SIZE1 5
#define SIZE2 5

class report

{
private:
	selling* sell[SIZE1];
    payment* paym[SIZE2];
public:
    report();
    report(selling* psell[SIZE1], payment* ppaym[SIZE2]);
	void sellingDetailsReport();
	void paymentDetailsReport();
	~report();
};

