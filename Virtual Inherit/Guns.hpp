#pragma once

#include <iostream>


class Gun{ // ����� ���������� ����������� ���� ���� ����� ����������� �������(�����). ����� ������ ��� ������������
protected:
	int damage;
public:
	virtual void shoot() = 0;// ����� ����������� �������
	virtual int getDamage() {
		return damage; // ���������� ���� �� ��������
	}
};

class Pistol : public Gun {
public:
	Pistol() {
		damage = 4; //����������� �� ���������, ����� ������ ���� 4
}
	void shoot() override {
		std::cout << "���!\n";
		
	}
};


// ����� �������
class MachineGun : public Gun { //��������� ������������ ������������
private:
	int queue; // ������� ���������
public:
	MachineGun() {
		damage = 3; // ���� 23
		queue = 3; // ���������� ���� �� 1 �������
	}
	void shoot() override {
		for (int i = 0; i < queue; ++i) // ���� ����� ������� ��������
			std::cout << "��� ";
		std::cout << "\b!\n";
	}
	int getDamage() override {
		return damage * queue;// ��������� �����
	}
};
