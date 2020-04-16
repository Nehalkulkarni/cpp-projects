/* **************parking project**************
 *
 * there are three types of vehicles to be parked in the parking .
 * 1)Rickshaw having amount 100rs
 * 2)cars having amount 200rs
 * 3)buses having amount 300rs
 * max numbers of vehicles to be parked is 100 if it exceeds say"parking is full!!!"
 * the user should be able to see the records( i.e. total amount +number of vehicles parked
 * in the parking)
 * the user shall be able to delete the record for vehicles
 */
#include <iostream>
using namespace std;

class parking
{
private:
	int amount;
	int count;
public:
	int rickshaws;
	int cars;
	int buses;
	parking();
	void rickshaw();
	void car();
	void bus();
	void show();
	void remove();
};
parking::parking()
{
	amount=0;
	count=0;
	cars=0;
	rickshaws=0;
	buses=0;
}
void parking::rickshaw()
{
	if(count<=100)
	{
	      count++;
		amount=amount+100;
		rickshaws++;
	}
	else
	{
		cout<<"parking for rickshaw is full"<<endl;
	}
}
void parking::car()
{
	if(count<=100)
	{
		count++;
		amount=amount+200;
		cars++;
	}
	else
	{
		cout<<"parking for car is full"<<endl;
	}
}
void parking::bus()
{
	if(count<=100)
	{
		count++;
		amount=amount+300;
		buses++;
	}
	else
	{
		cout<<"parking for bus is full"<<endl;
	}
}
void parking::show()
{
cout<<"total collection is"<<" "<<amount<<" "<<"and"<<" "<<"total vehicles parked"<<" "<<count<<endl;
cout<<"total rickshaw parked"<<" "<<rickshaws<<endl;
cout<<"total cars parked"<<" "<<cars<<endl;
cout<<"total buses parked"<<" "<<buses<<endl;
}
void parking::remove()
{
	cout<<"enter which vehicle is moving out"<<endl;
	int vehicle;
	cout<<"****menu*****\n"<<"1)rickshaw\n"<<"2)car\n"<<"3)bus\n";
	cin>>vehicle;
			switch(vehicle)
			{
			case 1:
				if(rickshaws>=0)
				{
			    rickshaws--;
				count--;
				break;
				}
			case 2:
				if(cars>=0)
				{
		        cars--;
				count--;
				break;
				}
			case 3:
				if(buses>=0)
				{
				buses--;
				count--;
				break;
				}
			}
}


int main() {
	parking p;
	int i;
	while(1)
	{
	cout<<"****menu*******\n"<<"0)exit\n"<<"1)rickshaw\n"<<"2)car\n"<<"3)bus\n"<<"4)total vehicles parked and amount\n";
	cout<<"5)delete record"<<endl;
	cin>>i;
	{
		switch(i)
		{
		case 0:
			break;
		case 1:
			p.rickshaw();
			break;
		case 2:
			p.car();
			break;
		case 3:
			p.bus();
			break;
		case 4:
			p.show();
			break;
		case 5:
			p.remove();
			break;
		}
	}
	}
	return 0;
}
