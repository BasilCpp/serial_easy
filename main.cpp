//copy from https://gist.github.com/kaliatech/427d57cb1a8e9a8815894413be337cf9?signup=true
//and https://github.com/fedetft/serial-port
#include <iostream>
#include "SimpleSerial.h"

using namespace std;
using namespace boost;

int main(int argc, char* argv[])
{
    try {

        SimpleSerial serial("/dev/ttyUSB0",9600);

        serial.writeString("Hello world\n");

        cout<<"Received : "<<serial.readLine()<<" : end"<<endl;

    } catch(boost::system::system_error& e)
    {
        cout<<"Error: "<<e.what()<<endl;
        return 1;
    }
}

