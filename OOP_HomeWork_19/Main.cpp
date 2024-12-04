#include<iostream>
#include"Shapes.hpp"

int main() {
	setlocale(LC_ALL, "RU");
	// Создадим объект квадрата с параметрами, выведем его в консоль и сохраним его параметры:
	std::cout << "Объекты класса квадрат:\n";
	Square s1;
	s1.setParam(45, 25, 9.88);
	s1.show();
	s1.save();
	std::cout << "*  *  *\n";
	// Создадим пустой объект квадрата, загрузим в него параметры из файла и выведем его в консоль:
	Square s2;
	s2.show();
	std::cout << "*  *  *\n";
	s2.load();
	s2.show();
	// Всё тоже самое повторяем с объектами прямоугольника:
	std::cout << "\nОбъекты класса прямоугольник:\n";
	Rectangle r1;
	r1.setParam(3, 5, 65.5, 14.9);
	r1.show();
	r1.save();
	std::cout << "*  *  *\n";
	Rectangle r2;
	r2.show();
	std::cout << "*  *  *\n";
	r2.load();
	r2.show();
	// Всё тоже самое повторяем с объектами окружность:
	std::cout << "\nОбъекты класса окружность:\n";
	Circle c1;
	c1.setParam(14, 7, 55.5);
	c1.show();
	c1.save();
	std::cout << "*  *  *\n";
	Circle c2;
	c2.show();
	std::cout << "*  *  *\n";
	c2.load();
	c2.show();
	// Всё тоже самое повторяем с объектами эллипс:
	std::cout << "\nОбъекты класса эллипс:\n";
	Ellipse e1;
	e1.setParam(5, 5, 78., 45.3);
	e1.show();
	//e1.save();	// не будем сохранять объект в файл
	std::cout << "*  *  *\n";
	Ellipse e2;
	e2.show();
	std::cout << "*  *  *\n";
	e2.load();	// при загрузке будет ошибка, т.к. файл не существует.
	e2.show();

	return 0;
}