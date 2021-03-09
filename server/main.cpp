/*
 * main.cpp
 *
 *  Created on: Mar 9, 2021
 *      Author: bugchen
 */
#include <iostream>
#include "common.h"
#include "server.h"

using namespace std;

int main()
{
	Server server;
	server.Start();

	cout<<"..."<<endl;
	return 0;
}

