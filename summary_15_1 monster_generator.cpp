#include <iostream>
#include <string>
#include "Random.h"


class Monster {
public:
	enum Type {
		dragon,
		goblin,
		ogrem,
		orc,
		skeleton,
		troll,
		vampire,
		zombie,
		maxMonsterTypes,
	};

	Monster(Type type = skeleton, std::string name = "???", std::string roar = "???", int hitPoints = 0)
		: m_type{ type }
		, m_name{ name }
		, m_roar{ roar }
		, m_hitPoints{ hitPoints }
	{
	}

	const void print() const {
		if (m_hitPoints > 0) {
			std::cout << m_name << " the " << getTypeString() << " has " << m_hitPoints << " hit points and says " << m_roar << ".\n";
		}
		else {
			std::cout << m_name << " the " << getTypeString() << " is dead.\n";
		}
	}

private:
	Type m_type{};
	std::string m_name{"???"};
	std::string m_roar{"???"};
	int m_hitPoints{};

	constexpr std::string getTypeString() const {
		switch (m_type) {
		case dragon:	return "dragon";
		case goblin:	return "goblin";
		case ogrem:		return "ogrem";
		case orc:		return "orc";
		case skeleton:	return "skeleton";
		case troll:		return "troll";
		case vampire:	return "vampire";
		case zombie:	return "zombie";
		default:		return "???";
		}
	}
};

namespace MonsterGenerator {
	constexpr std::string getName(int id) {
		switch (id) {
		case 0:		return "Blerg";
		case 1:		return "Zorg";
		case 2:		return "Torg";
		case 3:		return "Blungr";
		case 4:		return "Morg";
		case 5:		return "Burg";
		default:	return "???";
		}
	}

	constexpr std::string getRoar(int id) {
		switch (id) {
		case 0:		return "*ROAR*";
		case 1:		return "*PAIN...*";
		case 2:		return "*BLASPHEM!*";
		case 3:		return "*DIE*";
		case 4:		return "*KILL...*";
		case 5:		return "*NYAAHH*";
		default:	return "???";
		}
	}

	Monster generate() {
		Monster monster{ static_cast<Monster::Type>(Random::get(0, Monster::maxMonsterTypes - 1)), getName(Random::get(0, 5)), getRoar(Random::get(0, 5)), Random::get(1, 100)};
		return monster;
	}
}

int main()
{
	Monster m{ MonsterGenerator::generate() };
	m.print();

	return 0;
}
