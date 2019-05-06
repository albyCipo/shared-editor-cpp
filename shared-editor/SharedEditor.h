#pragma once

#include "NetworkServer.h"
#include "Symbol.h"
#include <vector>
#include <string>

#ifndef SHARED_EDITOR_H
#define SHARED_EDITOR_H
class SharedEditor {

private:
	NetworkServer* netWorkServer;
	int siteId;
	std::vector<Symbol*> _symbols;
	int _counter;

public:
	SharedEditor();
	SharedEditor(const NetworkServer* netWorkServer);
	~SharedEditor();

	void localInsert(int index, char value);
	void localErase(int index);
	void process(/*const Message& message*/);
	std::string to_string();

};
#endif