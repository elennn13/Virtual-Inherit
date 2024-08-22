#pragma once
#include "Guns.hpp"
#include <string>


class Shooter { // стрелки
private:
	std::string name; // имя
	int hp; // очки жизни
	Gun* gun; // оружие стрелка
public:
	// конструктор стрелка
	Shooter() : hp(10), gun(nullptr) {}// по умолчанию 10hp кол.во жизней у стрелка
	Shooter(std::string name) : Shooter () {
		this->name = name;
	}
// добавляем стрелку подобрать какое то оружие
	void takeGun(Gun& gun){ // взять оружие 
		this->gun = &gun;
	}
	void shoot(Shooter& target) { // стрелок стреляет в стрелка
		gun->shoot();// пушкет стреляет в цель
		target.takeDamage(gun->getDamage());// цели наносится урон от оружия
		std::cout << name << "выстрелил в" << target.name << std::endl;
		std::cout << "ХП стрелка " << target.name << ": " << target.hp << std::endl;
	}
	void takeDamage(int damage) { // если урона больше чем жизней, то жизни обнуляются
		hp = damage > hp ? 0 : hp - damage;
	}
	int getHP() const { return hp; };// геттер который возращает количество жизней
};

