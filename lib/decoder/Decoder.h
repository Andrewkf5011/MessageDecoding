#include<mbed.h>
#include<string>

#ifndef DECODER_H
#define DECODER_H

/**
 * @brief Decodes messages in the following format:
 *        "key:value\n"
 *        These messages will be broken down into their
 *        'key' and 'value' components.
 */
class Decoder
{
  private:
      //[key] Stores the key component of the message.
      string key;
      //[value] Stores the value component of the message.
      string value;
  public:
    Decoder();

    /**
     * Decodes a message into it's 'key' and 'value' components.
     * Message format should be: "key:value\n".
     */
    void decodeMessage(string message);

    string getKey();

    string getValue();
};

#endif // DECODER_H
