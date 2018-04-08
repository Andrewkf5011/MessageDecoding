#include <mbed.h>
#include <string>
#include "Decoder.h"

Decoder::Decoder()
{

}

void Decoder::decodeMessage(string message)
{
    //Print out the message, and the length of the message (development only).
    printf("%s\n", message.c_str());
    printf("\nMessageLength: %d", message.length());

    //[seperatorLocation] Stores the location of the seperator
    //within the message.
    int seperatorLocation = message.find(':');

    //Print out the location of the seperator (development only).
    printf("seperator location: %d\n", seperatorLocation);

    key = message.substr(0, seperatorLocation);

    //Print out the key (development only).
    printf("Key: %s\n", key.c_str());


    //[valueLength] stores the number of characters between the seperator
    //and the end of the message. (Note: 2 is subtracted to account for
    //the "end of line" characters: '\n').
    int valueLength = message.length() - seperatorLocation - 2;

    value = message.substr((seperatorLocation + 1), valueLength);

    //Print out the value (development only).
    printf("Value: %s\n", value.c_str());
}

string Decoder::getKey()
{
    return key;
}

string Decoder::getValue()
{
    return value;
}
