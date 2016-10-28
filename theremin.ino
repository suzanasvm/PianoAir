#define echoPin 13 //Pino 13 recebe o pulso do echo 
#define trigPin 12 //Pino 12 envia o pulso para gerar o echo 

const byte noteOffCommand = 0;
const byte noteOnCommand = 1;

byte channel = 0;  // Channel 1  (0-15 selects channel 1-16)

//byte pitchByte = 69;  // A4 = Middle A = 440 Hz (Piano keyboard runs from 21/A0 to 108/C8)
//byte velocityByte = 127;  // Medium Velocity/Volume (value from 0 to 127)

void setup() 
{ 
   Serial.begin(115200); //inicia a porta serial  115200 para o HairLess
   pinMode(echoPin, INPUT); // define o pino 13 como entrada (recebe) 
   pinMode(trigPin, OUTPUT); // define o pino 12 como saida (envia) 
} 

void loop() 
{ 
  //seta o pino 12 com um pulso baixo "LOW" ou desligado ou ainda 0 
    digitalWrite(trigPin, LOW); 
  // delay de 2 microssegundos 
    delayMicroseconds(2); 
  //seta o pino 12 com pulso alto "HIGH" ou ligado ou ainda 1 
    digitalWrite(trigPin, HIGH); 
  //delay de 10 microssegundos 
    delayMicroseconds(10); 
  //seta o pino 12 com pulso baixo novamente 
    digitalWrite(trigPin, LOW); 
  //pulseInt lê o tempo entre a chamada e o pino entrar em high 
    long duration = pulseIn(echoPin,HIGH); 
  //Esse calculo é baseado em s = v . t, lembrando que o tempo vem dobrado 
  //porque é o tempo de ida e volta do ultrassom 
    long distancia = duration /29 / 2 ; 

if (distancia >= 50){

delay(1000); // Tempo de espera duration

}
else if (distancia <= 2){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(68));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(68));
Serial.write(byte(0));
}
else if ((distancia > 2) && (distancia <= 4)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(69));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(69));
Serial.write(byte(0));
}
else if ((distancia > 4) && (distancia <= 6)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(70));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(70));
Serial.write(byte(0)); 
}
else if ((distancia > 6) && (distancia <= 8)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(71));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(71));
Serial.write(byte(0)); 
}
else if ((distancia > 8) && (distancia <= 10)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(72));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(72));
Serial.write(byte(0));
}
else if ((distancia > 12) && (distancia < 14)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(73));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(73));
Serial.write(byte(0));
}
else if ((distancia > 14) && (distancia <= 16)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(74));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(74));
Serial.write(byte(0));
}
else if ((distancia > 16) && (distancia <= 18)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(75));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(75));
Serial.write(byte(0));
}
else if ((distancia > 18) && (distancia <= 20)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(76));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(76));
Serial.write(byte(0));
}
else if ((distancia > 20) && (distancia <= 22)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(77));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(77));
Serial.write(byte(0));
}
else if ((distancia > 22) && (distancia <= 24)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(78));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(78));
Serial.write(byte(0));
}
else if ((distancia > 24) && (distancia <= 26)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(79));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(79));
Serial.write(byte(0));
}
else if ((distancia > 26) && (distancia <= 28)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(80));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(80));
Serial.write(byte(0));
}
else if ((distancia > 28) && (distancia <= 30)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(81));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(81));
Serial.write(byte(0));
}
else if ((distancia > 30) && (distancia <= 32)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(82));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(82));
Serial.write(byte(0));
}
else if ((distancia > 32) && (distancia <= 34)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(83));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(83));
Serial.write(byte(0));
}
else if ((distancia > 34) && (distancia <= 36)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(84));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(84));
Serial.write(byte(0));
}
else if ((distancia > 36) && (distancia <= 38)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(85));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(85));
Serial.write(byte(0));
}
else if ((distancia > 38) && (distancia <= 40)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(86));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(86));
Serial.write(byte(0));
}
else if ((distancia > 40) && (distancia <= 42)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(87));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(87));
Serial.write(byte(0));
}
else if ((distancia > 42) && (distancia <= 44)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(88));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(88));
Serial.write(byte(0));
}
else if ((distancia > 44) && (distancia <= 46)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(89));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(89));
Serial.write(byte(0));
}
else if ((distancia > 46) && (distancia <= 48)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(90));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(90));
Serial.write(byte(0));
}
else if ((distancia > 48) && (distancia < 50)){
Serial.write(0x80 + (noteOnCommand << 4) + (byte(channel)));
Serial.write(byte(91));
Serial.write(byte(127));

delay(300); // Note duration

Serial.write(0x80 + (noteOffCommand << 4) + (byte(channel)));
Serial.write(byte(91));
Serial.write(byte(0));
}
}
//delay(200); //espera 200 milissegundos para fazer a leitura novamente 
