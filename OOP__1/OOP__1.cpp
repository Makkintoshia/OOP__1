#include <iostream>
#include <string>
#include <queue>
#include <list>
#include <iterator>
//Проект //Свойства название_проекта//Свойства конфигурации//Препроцессор/Определения препроцессора//;_CRT_SECURE_NO_WARNINGS
using namespace std;

class Class1
{
public:
	int day;
	int month;
	int year;
	string name;


	friend std::ostream& operator<<(std::ostream& stream, const Class1& value);

};

/*void show(list <Class1> list) {
	int i = -1;
	list < Class1 > ::iterator it;
	for (it = list.begin(); it != list.end(); ++it) {
		i++;
		if (i % 4 == 0)cout << endl;
		cout << *it << " ";
	}
}*/
std::ostream& operator<<(std::ostream& stream, const Class1& value)
{
	stream << "День: " << value.day << ".   Месяц: " << value.month << "." << ".   Год " << value.year << ".   Имя: " << value.name << std::endl;
	return stream;
}

int main()
{
	setlocale(LC_ALL, "rus");
	Class1 class1;
	//queue <Class1> q;
	list < Class1> sensorsList;
	Class1 class2;
	int i = 0;
	char ch = 'a';
	for (;;)
	{

		if (ch == '*')
		{
			break;
		}

		else {
			cout << "Введите день";
			cin >> class1.day;
			cout << "Введите месяц";
			cin >> class1.month;
			cout << "Введите год";
			cin >> class1.year;
			cout << "Введите имя";
			cin >> class1.name;

			sensorsList.push_back(class1);
			/*
			cout << "День  :  " <<list.front().day<<endl;
			cout << "Месяц :  " << list.front().month << endl;
			cout << "Год   :  " << list.front().year << endl;
			cout << "Имя   :  " << list.front().name << endl;*/
			i++;
		}
		cout << "Введите * если хотите выйти из цикла";
		cin >> ch;

	}
	//copy(list.begin(), list.end(), ostream_iterator<Class1>(cout, " "));
	std::copy(sensorsList.begin(), sensorsList.end(), std::ostream_iterator<Class1>(std::cout));

	/*
	cin >> class2.day;
	cin >> class2.year;
	cin >> class2.month;
	class2.name = "jen";

	q.push(class2);
	cout << "ad" << q.front().day << endl;*/
	cout << "q";
	return 0;
}
