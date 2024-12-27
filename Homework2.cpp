#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Animal.h"
#include "Zoo.h"

using namespace std;

// 랜덤 동물을 생성하는 함수
// - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
// - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
// - 입력 매개변수: 없음
// - 반환값: Animal* (생성된 동물 객체의 포인터)
Animal* CreateRandomAnimal();

int main()
{
	//필수
	Dog dog;
	Cat cat;
	Cow cow;
	Animal* animal_list[3] = { &dog, &cat, &cow };

	cout << "필수 기능 시작" << '\n';
	for (int i = 0; i < 3; i++)
	{
		animal_list[i]->makeSound();
	}
	cout << "필수 기능 끝" << '\n' << '\n';

	//도전
	srand((unsigned int)time(NULL));
	int input;
	Zoo zoo;

	cout << "도전 기능 시작" << '\n';
	cout << "생성할 동물의 숫자를 입력(1~10) : ";
	cin >> input;

	for (int i = 0; i < input; i++)
			zoo.addAnimal(CreateRandomAnimal());

	cout << "생성된 각 동물들의 소리" << '\n';
	zoo.performActions();
	cout << "도전 기능 끝" << '\n';
	return 0;
}

Animal* CreateRandomAnimal()
{
	int what_animal = rand() % 3;
	switch (what_animal)
	{
	case 0:
		return new Dog();
	case 1:
		return new Cat();
	case 2:
		return new Cow();
	}
}