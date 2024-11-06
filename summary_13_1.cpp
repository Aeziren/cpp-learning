#include <iostream>
#include <string>


struct Monster {
	enum class Race {
		ogre,
		dragon,
		orc,
		giant_spider,
		slime,
	};

	Race race{};
	std::string name{};
	double health{};
};

std::string_view getRaceName(Monster::Race& monsterRace) {
	switch (monsterRace) {
	case Monster::Race::ogre:			return "Ogre";
	case Monster::Race::dragon:			return "Dragon";
	case Monster::Race::orc:			return "Orc";
	case Monster::Race::giant_spider:	return "Giant Spider";
	case Monster::Race::slime:			return "Slime";
	default:							return "Unknown";
	}
}

void printMonster(Monster& monster) {
	std::cout << "This " << getRaceName(monster.race) << " is named " << monster.name << " and has " << monster.health << " health." << std::endl;
}

int main() {
	Monster ogre{ Monster::Race::ogre, "Torg", 145 };
	Monster slime{ Monster::Race::slime, "Blurp", 23 };

	printMonster(ogre);
	printMonster(slime);
}