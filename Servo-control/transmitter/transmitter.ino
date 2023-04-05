void  setup (){ 
  Serial . begin (9600);
} 
 
void  loop ()
{ 
  int read = analogRead (0); 
  //byte angle= map (read, 0, 1023, 0, 180);    //scale 
  byte angle = (read * 180) / 1023;
  Serial . write (angle); 
  delay(10);                           
} 
