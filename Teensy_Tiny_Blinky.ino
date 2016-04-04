void setup()  { pinMode(13, OUTPUT);}
void loop()   { digitalWriteFast(13,!digitalReadFast(13));
                delay(500); }
