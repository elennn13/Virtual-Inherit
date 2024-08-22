#pragma once

#include <iostream>


class Gun{ // Класс становится абстрактныи если есть чисто вирутальная функция(метод). нужен только для НАСЛЕДОВАНИЯ
protected:
	int damage;
public:
	virtual void shoot() = 0;// чисто виртуальная функция
	virtual int getDamage() {
		return damage; // возвращает урон от выстрела
	}
};

class Pistol : public Gun {
public:
	Pistol() {
		damage = 4; //конструктор по умолчанию, чтобы понять урон 4
}
	void shoot() override {
		std::cout << "БАХ!\n";
		
	}
};


// класс пулемет
class MachineGun : public Gun { //публичный спецификатор наследования
private:
	int queue; // очередь выстерлов
public:
	MachineGun() {
		damage = 3; // урон 23
		queue = 3; // количество пуль за 1 выстрел
	}
	void shoot() override {
		for (int i = 0; i < queue; ++i) // цикл чтобы вывести выстрелы
			std::cout << "БАХ ";
		std::cout << "\b!\n";
	}
	int getDamage() override {
		return damage * queue;// получение урона
	}
};
