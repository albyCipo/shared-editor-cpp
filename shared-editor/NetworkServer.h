#pragma once

#include <vector>
#include <queue>
#include "Message.h"
#include "SharedEditor.h"

#ifndef NETWORK_SERVER_H
#define	NETWORK_SERVER_H
class NetworkServer {

private:
	std::vector<SharedEditor*> editors;
	std::queue<Message*> messages;
	
public:
	//Constructor & Distructor
	NetworkServer();
	~NetworkServer();
	//Methods
	int connect(SharedEditor* sharedEditor);
	void disconnect(SharedEditor* sharedEditor);
	void send(const Message& m);
	void dispatchMessages();

};

#endif