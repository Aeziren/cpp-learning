namespace Races {
	enum MonsterType {
		orc,
		goblin,
		troll,
		ogre,
		skeleton,
	};
}

int main() {
	Races::MonsterType player{ Races::MonsterType::goblin };

	return 0;
}