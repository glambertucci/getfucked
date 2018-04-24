#pragma once
#define _WIN32_WINNT 0x0501
#include "auxiliar.h"
#include "client.h"
#include "server.h"
#include "animation.h"
bool iniciar(vector <string> &direcciones, string mi_ip);
bool escuchar(vector <string> &direcciones);
class network { // handles all server/client behaviours of the computer


public:
	network();
	void wait_for_message(char *data, int *size); // block and wait for some computer to estabish connection and send sequence
	void send_message(char *data, char *address, char *port); /// send message to address

private:

	client my_client;
	server my_server;

};
