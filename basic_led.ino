
char data = 0;                
void setup() 
{
  Serial.begin(9600);         
  pinMode(13, OUTPUT);        
}
void loop()
{
  if(Serial.available() > 0) 
  {
    data = Serial.read();      
    Serial.print(data);       
    Serial.print("\n");       
    if(data == 0)           
      digitalWrite(13, HIGH); 
    if(data == 1)       
      digitalWrite(13, LOW);   
	if(data == 2)            
      digitalWrite(12, HIGH);  
    if(data == 3)      
      digitalWrite(12, LOW);   
	if(data == 4)            
      digitalWrite(8, HIGH);  
    if(data == 5)      
      digitalWrite(8, LOW);  
  }                            
 
}                 
