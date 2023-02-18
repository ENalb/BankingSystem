#include <iostream>
#include "tester.h"

void Tester::testSetName()
{
	Person p;
	p.set_name("Varduhi");
	if(p.get_name() == "Varduhi")
	{
		std::cout << "set_name test passed" << std::endl;
	}
	else
	{
		std::cout << "set_name test failed" << std::endl;
	}
}
void Tester::testSetAge()
{
	Person p;
	p.set_age(22);
	if(p.get_age() == 22)
	{
		std::cout << "set_age test passed" << std::endl;
	}
	else
	{
		std::cout << "set_age test failed" << std::endl;
	}
}
void Tester::testSetPassport()
{
	Person p;
	p.set_passport("AR12456");
	if(p.get_passport() == "AR12456")
	{
		std::cout << "set_passport test passed" << std::endl;
	}
	else
	{
		std::cout << "set_passport test failed" << std::endl;
	}
}
void Tester::testGetName()
{
	Person p;
	p.set_name("Vardan");
	if(p.get_name() == "Vardan")
	{
		std::cout << "get_name test passed" << std::endl;
	}
	else
	{
		std::cout << "get_name test failed" << std::endl;
	}
}
void Tester::testGetAge()
{
	Person p;
	p.set_age(25);
	if(p.get_age() == 25)
	{
		std::cout << "get_age test passed" << std::endl;
	}
	else
	{
		std::cout << "get_age test failed" << std::endl;
	}
}
void Tester::testGetPassport()
{
	Person p;
	p.set_passport("AM12147");
	if(p.get_passport() == "AM12147")
	{
		std::cout << "set_passport test passed" << std::endl;
	}
	else
	{
		std::cout << "set_passport test failed" << std::endl;
	}
}
void Tester::testGet_id()
{
	Person p("Artur", 26, "AM1789");
	Account ac;
	ac.set_id(1);
	if(ac.get_id() == 1)
	{
		std::cout << "get_id test passed" << std::endl;
	}
	else
	{
		std::cout << "get_id test failed" << std::endl;
	}
}
void Tester::testSet_id()
{
	Person p("Artur", 26, "AM1789");
	Account ac;
	ac.set_id(1);
	if(ac.get_id() == 1)
	{
		std::cout << "set_id test passed" << std::endl;
	}
	else
	{
		std::cout << "set_id test failed" << std::endl;
	}
}
void Tester::testGet_person()
{
	Person p("Artur", 26, "AM1789");
	Account ac(2, p, 14780);
	if(ac.get_person().get_name() == p.get_name())
	{
		std::cout << "get_person test passed" << std::endl;
	}
	else
	{
		std::cout << "get_person test passed" << std::endl;
	}
}
void Tester::testSet_person()
{
	Person p("Artashes", 28, "AM1789");
	Account ac;
	ac.set_person(p);
	if(ac.get_person().get_age() == p.get_age())
	{
		std::cout << "set_person test passed" << std::endl;
	}
	else
	{
		std::cout << "set_person test passed" << std::endl;
	}
}
void Tester::testDeposit()
{
	Person p("Artashes", 28, "AM1789");
	Account ac(4, p, 125000);
	double new_money = 10000;
	ac.deposit(new_money);
	if(ac.get_money() == 135000)
	{
		std::cout << "deposit test passed" << std::endl;
	}
	else
	{
		std::cout << "deposit test passed" << std::endl;
	}
}
void Tester::testWithdrow()
{
	Person p("Artashes", 28, "AM1789");
	Account ac(4, p, 125000);
	double get_money = 10000;
	ac.withdrow(get_money);
	if(ac.get_money() == 115000)
	{
		std::cout << "withdrow test passed" << std::endl;
	}
	else
	{
		std::cout << "withdrow test passed" << std::endl;
	}
}
void Tester::testAddAccount()
{
	BankingSystem bank("HSBC");
	Person p("Artashes", 28, "AM1789");
	Account ac(3, p, 104000);
	int ac_count = bank.getSize();
	bank.add_account(ac);
	if(bank.getSize() == ac_count + 1)
	{
		std::cout << "addAccount test passed" << std::endl;
	}
	else
	{
		std::cout << "addAccount test passed" << std::endl;
	}
}