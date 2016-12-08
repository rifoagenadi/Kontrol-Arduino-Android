char data = 0;                //Variabel untuk menyimpan data yang diterima
void setup() 
{
  Serial.begin(9600);        
  pinMode(13, OUTPUT);      
}
void loop()
{
  if(Serial.available() > 0)  
  {
    data = Serial.read();    // membaca data yang diterima
    Serial.print(data);       
    Serial.print("\n");       
    if(data == '1')           
      digitalWrite(13, HIGH);  //Jika nilainya 1, maka LED menyala
    else if(data == '0')       
      digitalWrite(13, LOW);  //Jika nilainya 0, maka LED mati
  }                            
 
}                 
