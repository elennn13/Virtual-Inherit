#include <iostream>
#include "Shooter.hpp"
#include "Square.hpp"


int main(){
    setlocale(LC_ALL, "ru");




    // Виртуальное наследование 
  
    // Gun gun;// ошибка так как класс абстрактный
    // gun.shoot();

    /*
    Pistol pistol;
    // pistol.shoot();

    MachineGun mg;
    //  mg.shoot();

    /*Gun* pointer = &pistol; // указатель на объект класс Gun
    pointer->shoot(); // вызываем метод выстрел*/
    
    // создание стрелков
    /*
    Shooter s1("Питер");
    Shooter s2("Том");
    s1.takeGun(pistol);
    s2.takeGun(mg);
    s1.shoot(s2);// одинстрелок стреляет в другого
    s2.shoot(s1);// одинстрелок стреляет в другого
    */

    Square sq(10);
    std::cout << "Периметр квадрата равен " << sq.perimeter() << std::endl;
    std::cout << "Площадь квадрата равна " << sq.area() << std::endl;


    return 0;
}
