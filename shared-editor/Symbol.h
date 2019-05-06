#pragma once
#include <vector>
#ifndef SYMBOL_H
#define SYMBOL_H
class Symbol {

private:
	char character;
	int charId;
	int charCounter;
	std::vector<int> fractionPosition;

public:
	//Constructors and Distructors
	Symbol();
	Symbol(char character, int charId, int charCounter);
	Symbol(Symbol& symbol);
	~Symbol();

	//Methods
	char getCharacter();
	int getCharId();
	int getCharCounter();
	const std::vector<int>& getFractionPosition();

};
#endif