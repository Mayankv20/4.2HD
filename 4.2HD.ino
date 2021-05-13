int yellow = D2;
int blue = D3;
int red = D4;


void setup()
{


   pinMode(yellow, OUTPUT);
   pinMode(red, OUTPUT);
   pinMode(blue, OUTPUT);
   
   Particle.function("led",ledToggle);

   digitalWrite(yellow, LOW);
   digitalWrite(red, LOW);
   digitalWrite(blue, LOW);

}




void loop()
{

}


int ledToggle(String command){
    

    if (command=="yellowon") {
        digitalWrite(yellow,HIGH);
        digitalWrite(red,LOW);
        digitalWrite(blue,LOW);
        return 1;
    }
    else if (command=="redon") {
        digitalWrite(red,HIGH);
        digitalWrite(yellow,LOW);
        digitalWrite(blue,LOW);
        return 0;
    }
    else if (command=="blueon") {
        digitalWrite(blue,HIGH);
        digitalWrite(yellow,LOW);
        digitalWrite(red,LOW);
        return 0;
    }
    else {
        return -1;
    }
}
