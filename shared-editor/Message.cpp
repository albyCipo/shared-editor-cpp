#include "Message.h"
#include "Symbol.h"

Message::Message() : operation(), symbol(){};
Message::Message(int operation, Symbol symbol) : operation(operation), symbol(symbol){}
int Message::getOperation() { return operation; }
Symbol Message::getSymbol() { return symbol; }