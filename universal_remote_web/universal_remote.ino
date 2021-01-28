#include <IRremote.h>
#define RECV_PIN 11
#define BOUTON_PIN 7

bool boolBouton = 0;

int codeType;
int codeLen;
// pour recevoir sur l'ir PIN 11
IRrecv irrecv(RECV_PIN);
decode_results results;

// pour envoyer sur l'ir PIN 3
IRsend irsend;

void setup()
{
    Serial.begin(57600);
    irrecv.enableIRIn(); // Start the receiver
    pinMode(BOUTON_PIN, INPUT);
}

void loop()
{
    receiveCode();

    if (digitalRead(BOUTON_PIN) == HIGH && boolBouton == 0)
    {
        Serial.println("bout");
        // Code decimal,Type,Bits
        sendCode(16753245, NEC, 32);
        boolBouton = 1;
    }
    else if (digitalRead(BOUTON_PIN) == LOW)
    {
        boolBouton = 0;
    }
}

void receiveCode()
{

    // catch IR
    if (irrecv.decode(&results))
    {
        //recupere le type de codage, la logueur
        int codeType = results.decode_type;
        int codeLen = results.bits;
        Serial.println("-------------------");
        Serial.print("ValueHex ");
        Serial.println(String(results.value, HEX));
        Serial.print("ValueDec ");
        Serial.println(results.value);
        Serial.print("CodeLen ");
        Serial.println(codeLen);
        irrecv.resume(); // Receive the next value

        // De quel type est le signal IR ?
        if (codeType == UNKNOWN)
        {
            Serial.println("Unknow Type");
        }
        else
        {
            if (codeType == NEC)
            {
                Serial.println("Type NEC ");
            }
            else if (codeType == SONY)
            {
                Serial.println("Type SONY ");
            }
            else if (codeType == PANASONIC)
            {
                Serial.println("Type PANASONIC ");
            }
            else if (codeType == JVC)
            {
                Serial.println("Type JVC ");
            }
            else if (codeType == SAMSUNG)
            {
                Serial.println("Type SAMSUNG ");
            }
            else
            {
                Serial.print("Unexpected codeType ");
                Serial.print(codeType, DEC);
                Serial.println("");
            }
        }
    }
}

void sendCode(long codeValue, int codeType, int codeLen)
{
    if (codeType == NEC)
    {
        irsend.sendNEC(codeValue, codeLen);
        Serial.print("Sent NEC ");
        Serial.println(codeValue, HEX);
    }
    else if (codeType == SONY)
    {
        irsend.sendSony(codeValue, codeLen);
        Serial.print("Sent Sony ");
        Serial.println(codeValue, HEX);
    }
    else if (codeType == PANASONIC)
    {
        irsend.sendPanasonic(codeValue, codeLen);
        Serial.print("Sent Panasonic");
        Serial.println(codeValue, HEX);
    }
    else if (codeType == JVC)
    {
        irsend.sendJVC(codeValue, codeLen, false);
        Serial.print("Sent JVC");
        Serial.println(codeValue, HEX);
    }
    else if (codeType == SAMSUNG)
    {
        irsend.sendSAMSUNG(codeValue, codeLen);
        Serial.print("Sent SANSUNG");
        Serial.println(codeValue, HEX);
    }
}