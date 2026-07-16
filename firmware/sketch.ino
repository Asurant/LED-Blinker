const int RP1 = 11;
const int RP2 = 10;
const int BP1 = 9;
const int BP2 = 6;
const int YP1 = 5;
const int YP2 = 3;
const int POT_PIN = A0;


void setup(){
    pinMode(RP1, OUTPUT);
    pinMode(RP2, OUTPUT);
    pinMode(BP1, OUTPUT);
    pinMode(BP2, OUTPUT);
    pinMode(YP1, OUTPUT);
    pinMode(YP2, OUTPUT);
    digitalWrite(RP2, LOW);
}

void loop(){
    int potValue = analogRead(POT_PIN);
    if(potValue <= 341){
        int delayTime = map(potValue, 0, 341, 0, 10);
        digitalWrite(RP2, LOW);
        digitalWrite(BP1, LOW);
        digitalWrite(BP2, LOW);
        digitalWrite(YP1, LOW);
        digitalWrite(YP2, LOW);
        for(int brightness = 0; brightness <= 255; brightness++){ 
            int potValue = analogRead(POT_PIN);
            if(potValue>341){
                break;
            }
            analogWrite(RP1, brightness);
            delay(delayTime);
        }
        for(int brightness = 255; brightness >= 0; brightness--){ 
            int potValue = analogRead(POT_PIN);
            if(potValue>341){
                break;
            }
            analogWrite(RP1, brightness);
            delay(delayTime);
        }
        for(int brightness = 0; brightness <= 255; brightness++){ 
            int potValue = analogRead(POT_PIN);
            if(potValue>341){
                break;
            }
            analogWrite(RP2, brightness);
            delay(delayTime);
        }
        for(int brightness = 255; brightness >= 0; brightness--){ 
            int potValue = analogRead(POT_PIN);
            if(potValue>341){
                break;
            }
            analogWrite(RP2, brightness);
            delay(delayTime);
        }
    }else if (potValue <= 682){
        int delayTime = map(potValue, 342, 682, 0, 10);
        digitalWrite(BP2, LOW);
        digitalWrite(RP1, LOW);
        digitalWrite(RP2, LOW);
        digitalWrite(YP1, LOW);
        digitalWrite(YP2, LOW);

        for(int brightness = 0; brightness <= 255; brightness++){ 
            int potValue = analogRead(POT_PIN);
            if(potValue>682 || potValue < 342){
                break;
            }
            analogWrite(BP1, brightness);
            delay(delayTime);
        }
        for(int brightness = 255; brightness >= 0; brightness--){ 
            int potValue = analogRead(POT_PIN);
            if(potValue>682 || potValue < 342){
                break;
            }
            analogWrite(BP1, brightness);
            delay(delayTime);
        }
        for(int brightness = 0; brightness <= 255; brightness++){ 
            int potValue = analogRead(POT_PIN);
            if(potValue>682 || potValue < 342){
                break;
            }
            analogWrite(BP2, brightness);
            delay(delayTime);
        }
        for(int brightness = 255; brightness >= 0; brightness--){ 
            int potValue = analogRead(POT_PIN);
            if(potValue>682 || potValue < 342){
                break;
            }
            analogWrite(BP2, brightness);
            delay(delayTime);
        }
    }else{
        int delayTime = map(potValue, 683, 1023, 0, 10);
        digitalWrite(YP2, LOW);
        digitalWrite(BP1, LOW);
        digitalWrite(BP2, LOW);
        digitalWrite(RP1, LOW);
        digitalWrite(RP2, LOW);

        for(int brightness = 0; brightness <= 255; brightness++){ 
            int potValue = analogRead(POT_PIN);
            if(potValue<683){
                break;
            }
            analogWrite(YP1, brightness);
            delay(delayTime);
        }
        for(int brightness = 255; brightness >= 0; brightness--){ 
            int potValue = analogRead(POT_PIN);
            if(potValue<683){
                break;
            }
            analogWrite(YP1, brightness);
            delay(delayTime);
        }
        for(int brightness = 0; brightness <= 255; brightness++){ 
            int potValue = analogRead(POT_PIN);
            if(potValue<683){
                break;
            }
            analogWrite(YP2, brightness);
            delay(delayTime);
        }
        for(int brightness = 255; brightness >= 0; brightness--){ 
            int potValue = analogRead(POT_PIN);
            if(potValue<683){
                break;
            }
            analogWrite(YP2, brightness);
            delay(delayTime);
        }
    }
}