#include<iostream>
using namespace std;
class reverse
{
	private:
		int n;
		int rev=0;
		int rem;
	public:
		void getdetails(void);
		void revnum(void);
		void putdetails(void);
};
void reverse :: getdetails(void)
{
	cout<<"enter the number to be reversed: ";
	cin>>n;
}
void reverse :: revnum(void)
{
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
}
void reverse :: putdetails(void)
{
	cout<<"reversed number"<<rev;
}
int main()
{
	reverse ro;
	ro.getdetails();
	ro.revnum();
	ro.putdetails(); 
	return 0;
}