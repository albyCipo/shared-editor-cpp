#pragma once
#include "Symbol.h"


#ifndef MESSAGE_H
#define MESSAGE_H
class Message {

private:
	int operation;
	Symbol symbol;
public:
	Message();
	Message(int operation, Symbol symbol);
	int getOperation();
	Symbol getSymbol();
};
#endif