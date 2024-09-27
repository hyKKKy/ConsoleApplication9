
#include <iostream>
#include <cstring> 
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
#include "String.h"
#include "BitString.h"

int main()
{;

	String str1("hello");
	String str2("bye");
	str1.Show();
	str2.Show();
	str1 = str2;
	str1.Show();

	str1 += str2;
	str1.Show();
	str1.clear();
	str1.Show();

	

	BitString bitstr1("101010");
	BitString bitstr2("101010");
	BitString bitstr3("100010");
	bitstr3 = bitstr2;

	bitstr3 += bitstr1;

	bitstr3.Show();

	bitstr3.Show();

	

	bitstr1.Show();

    std::cout << bitstr1.Checker(bitstr2);

	/*Cat(new char[4] {"Tom"}, 5, new char[11] {"Bengal Cat"});
	Dog(new char[4] {"Bob"}, 3, 10);
	Parrot(new char[5] {"Jack"}, 8, new char[6] {"Green"});*/
}


