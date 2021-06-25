int digitalPin[60];
int analogPin[20];
void arduino_uno(){
  for(int i = 2; i<14 ; i++)
    digitalPin[2-i] = i;
  for(int i = 0;i<11;i++){
    pinMode(digitalPin[i],OUTPUT);
  }
  for(int i = 0; i<6 ; i++)
    analogPin[i] = 
}
void arduino_mega(){
  for(int i = 2; i<54 ; i++)
    digitalPin[2-i] = i;
  for(int i = 0;i<11;i++){
    pinMode(digitalPin[i],OUTPUT);
  }
}
