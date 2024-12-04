#include "Shapes.hpp"

std::string square_file = "square_file";
std::string rectangle_file = "rectangle_file";
std::string circle_file = "circle_file";
std::string ellipse_file = "ellipse_file";

void Square::setParam(int x, int y, double sideLength){
	coord_x = x;
	coord_y = y;
	side_length = sideLength;
}

void Square::show(){
	std::cout << "Фигура - квадрат;\n";
	std::cout << "Координаты: " << coord_x << ", " << coord_y << ";\n";
	std::cout << "Длина стороны: " << side_length << " мм." << std::endl;
}

void Square::save(){
	std::ofstream fout;
	fout.open(square_file);
	if (!fout.is_open()) {
		std::cerr << "Warning! Can't open file " << square_file << " file for output.\n";
		exit(EXIT_FAILURE);
	}
	fout.write((char*)this, sizeof(Square));	// данная ф-ия не работает с переменными string!!!!!@
	fout.close();
}

void Square::load(){	
	std::ifstream fin(square_file);
	if (!fin.is_open()) {
		std::cerr << "Warning! Can't open file " << square_file << " file for output.\n";
		exit(EXIT_FAILURE);
	}
	fin.read((char*)this, sizeof(Square));	// данная ф-ия не работает с переменными string!!!!!@
	fin.close();
}

void Rectangle::setParam(int x, int y, double length, double width){
	coord_x = x;
	coord_y = y;
	this->length = length;
	this->width = width;
}

void Rectangle::show(){
	std::cout << "Фигура - прямоугольник;\n";
	std::cout << "Координаты: " << coord_x << ", " << coord_y << ";\n";
	std::cout << "Длина: " << length << " мм, высота: " << width << " мм." << std::endl;
}

void Rectangle::save(){
	std::ofstream fout;
	fout.open(rectangle_file);
	if (!fout.is_open()) {
		std::cerr << "Warning! Can't open file " << rectangle_file << " file for output.\n";
		exit(EXIT_FAILURE);
	}
	fout.write((char*)this, sizeof(Rectangle));
	fout.close();
}

void Rectangle::load(){
	std::ifstream fin(rectangle_file);
	if (!fin.is_open()) {
		std::cerr << "Warning! Can't open file " << rectangle_file << " file for output.\n";
		exit(EXIT_FAILURE);
	}
	fin.read((char*)this, sizeof(Rectangle));
	fin.close();
}

void Circle::setParam(int x, int y, double radius){
	coord_x = x;
	coord_y = y;
	this->radius = radius;
}

void Circle::show(){
	std::cout << "Фигура - окружность;\n";
	std::cout << "Координаты: " << coord_x << ", " << coord_y << ";\n";
	std::cout << "Радиус: " << radius << " мм." << std::endl;
}

void Circle::save(){
	std::ofstream fout(circle_file);
	if (fout.is_open()) {
		fout.write((char*)this, sizeof(Circle));
		fout.close();
	}
	else {
		std::cout << "Error! Can't open" << circle_file << std::endl;
		exit(EXIT_FAILURE);
	}
}

void Circle::load(){
	std::ifstream fin;
	fin.open(circle_file);
	if (!fin.is_open()) {
		std::cerr << "Error! Can't open file!\n";
		exit(EXIT_FAILURE);
	}
	fin.read((char*)this, sizeof(Circle));
	fin.close();
}

void Ellipse::setParam(int x, int y, double length, double width){
	coord_x = x;
	coord_y = y;
	this->length = length;
	this->width = width;
}

void Ellipse::show(){
	std::cout << "Фигура - эллипс;\n";
	std::cout << "Координаты: " << coord_x << ", " << coord_y << ";\n";
	std::cout << "Длина: " << length << " мм, высота: " << width << " мм прямоугольника, кот. описывает эллипс." << std::endl;
}

void Ellipse::save(){
	std::ofstream fout;
	fout.open(ellipse_file);
	if (!fout.is_open()) {
		std::cerr << "Error! Can't open " << ellipse_file << " file!\n";
		exit(EXIT_FAILURE);
	}
	fout.write((char*)this, sizeof(Ellipse));
	fout.close();
}

void Ellipse::load(){
	std::ifstream fin(ellipse_file);
	if (fin.is_open()) {
		fin.read((char*)this, sizeof(Ellipse));
		fin.close();
	}
	else {
		std::cerr << "Error! Can't open file!\n";
		exit(EXIT_FAILURE);
	}
}
