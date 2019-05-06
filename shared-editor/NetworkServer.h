#pragma once
#ifndef NETWORK_SERVER_H
#define	NETWORK_SERVER_H
class NetworkServer {

public:
	//Constructor & Distructor
	NetworkServer();
	~NetworkServer();
	//Methods
	int connect()(/*SharedEditor* sharedEditor*/);
	void disconnect(/*SharedEditor* sharedEditor*/);
	void send(/*const Message& m*/);
	void dispatchMessages();
};

#endif