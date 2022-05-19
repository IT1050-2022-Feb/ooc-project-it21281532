class payment
{
private:
	int paymentID;
	char paymentType[20];
	double paymentAmount;
public:
    payment();
    payment(int PID, const char PType[20], double PAmount);
	void checkPayment();
	void confirmPayment();
	void displayPaymentDetails();
	~payment();
};
