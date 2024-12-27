#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Animal.h"
#include "Zoo.h"

using namespace std;

// ���� ������ �����ϴ� �Լ�
// - 0, 1, 2 �� �ϳ��� ������ �����Ͽ� ���� Dog, Cat, Cow ��ü �� �ϳ��� �������� �����մϴ�.
// - ������ ��ü�� Animal Ÿ���� �����ͷ� ��ȯ�˴ϴ�.
// - �Է� �Ű�����: ����
// - ��ȯ��: Animal* (������ ���� ��ü�� ������)
Animal* CreateRandomAnimal();

int main()
{
	//�ʼ�
	Dog dog;
	Cat cat;
	Cow cow;
	Animal* animal_list[3] = { &dog, &cat, &cow };

	cout << "�ʼ� ��� ����" << '\n';
	for (int i = 0; i < 3; i++)
	{
		animal_list[i]->makeSound();
	}
	cout << "�ʼ� ��� ��" << '\n' << '\n';

	//����
	srand((unsigned int)time(NULL));
	int input;
	Zoo zoo;

	cout << "���� ��� ����" << '\n';
	cout << "������ ������ ���ڸ� �Է�(1~10) : ";
	cin >> input;

	for (int i = 0; i < input; i++)
			zoo.addAnimal(CreateRandomAnimal());

	cout << "������ �� �������� �Ҹ�" << '\n';
	zoo.performActions();
	cout << "���� ��� ��" << '\n';
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