#include "Symbol.h"
#include <vector>

//Constructors and Distructors
Symbol::Symbol() : character(), charId(), charCounter(), fractionPosition() {}
Symbol::Symbol(char character, int charId, int charCounter) : character(character), charId(charId), charCounter(charCounter), fractionPosition(){};

Symbol::Symbol(Symbol& symbol) : character(symbol.getCharacter()), charId(symbol.getCharId()), charCounter(symbol.getCharCounter()), fractionPosition(symbol.getFractionPosition()){}
Symbol::~Symbol() {
	fractionPosition.clear();
}

//Methods
char Symbol::getCharacter() {
	return character;
}
int Symbol::getCharId() {
	return charId;
}
int Symbol::getCharCounter() {
	return charCounter;
}
const std::vector<int>& Symbol::getFractionPosition() {
	return fractionPosition;
}