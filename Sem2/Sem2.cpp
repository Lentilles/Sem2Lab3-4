#include "VendingCoffee.h"
// реализуем автомат по продаже кофе


// todo: 

// Класс VendingCoffee
// У класса должно быть 2 состояния в нашем случае вкл\выкл в розетку
// У каждого состояния должны быть разные свойства, например у выключенной машины не горит экран.
// 


int main()
{
    std::string YN;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    VendingCoffee Vending1;

	bool p = false;
	while (p != true) {
		std::string YN;
		std::cout << "Вы видите кофейный апарат впереди себя. Вам хочется кофе. Подойти? \n";
		std::cout << "(Д)а/(Н)ет \n";
		std::cin >> YN; 
		if (YN == "Выключить") {
			Vending1.switchPower();
		}else if (YN == "Включить") {
			Vending1.switchPower();
		}else if (YN == "Д" || YN == "д" || YN == "Да" || YN == "да" || YN == "дА" || YN == "ДА") {
			p = true;
			Vending1.pressButton();
		}
		else if (YN == "Н" || YN == "н" || YN == "Нет" || YN == "нет" || YN == "НЕт" || YN == "НЕТ" || YN == "нЕт" || YN == "нЕТ") {
			std::cout << "Вы уходите, но все же может кофе? \n";
			std::cout << "(Д)а / (Д)а / (Д)а \n";
			std::cin >> YN;
			if (YN == "Д" || YN == "д" || YN == "Да" || YN == "да" || YN == "дА" || YN == "ДА") {
				p = true;
				Vending1.pressButton();
			}
			else
			{
				std::cout << "Выбор без выбора! \n";
				p = true;
				Vending1.pressButton();

			}
		}
		else {
			std::cout << "Не понимаю. Давай занаво?";
		}
	}
	Vending1.~VendingCoffee();
}