#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib> // для ф-ии exit()

class Shape {
public:	
	// вывод на экран информации о фигуре:
	virtual void show() = 0;
	// сохранение фигуры в файл:
	virtual void save() = 0;
	// считывание фигуры из файла:
	virtual void load() = 0;	
};
// класс Квадрат:
class Square : public Shape {
private:
	int coord_x, coord_y;
	double side_length;
public:
	Square() : coord_x(0), coord_y(0), side_length(1) {}
	void setParam(int x, int y, double sideLength);	
	virtual void show() override;
	virtual void save() override;
	virtual void load() override;
};
// класс Прямоугольник:
class Rectangle : public Shape {
private:
	int coord_x, coord_y;
	double length, width;
public:
	Rectangle() : coord_x(0), coord_y(0), length(1.), width(1.){}
	void setParam(int x, int y, double length, double width);
	virtual void show() override;
	virtual void save() override;
	virtual void load() override;
};
// класс Окружность:
class Circle : public Shape {
private:
	int coord_x, coord_y;
	double radius;
public:
	Circle() : coord_x(0), coord_y(0), radius(1.) {}
	void setParam(int x, int y, double radius);
	virtual void show() override;
	virtual void save() override;
	virtual void load() override;
};
// класс Эллипс:
class Ellipse : public Shape {
private:
	int coord_x, coord_y;	// координаты верхнего-левого угла прямоугольника, кот. описывает эллипс
	double length, width;	// размеры этого прямоугольника
public:
	Ellipse() : coord_x(0), coord_y(0), length(1.), width(1.){}	
	void setParam(int x, int y, double length, double width);
	virtual void show() override;
	virtual void save() override;
	virtual void load() override;
};
