const int LEDdizisi[] = {2,3,4,5,6,7,8,9};

void setup () {     
 
  for(int i=0; i<8 ;i++)    
  { /* For dongusuyle LEDdizisi elemanlarina ulasiyoruz */
    pinMode(LEDdizisi[i], OUTPUT); /* LED pinleri cikis olarak ayarlandi */
  }

}

void kapat(){
  digitalWrite(LEDdizisi[0], LOW);
  digitalWrite(LEDdizisi[1], LOW);
  digitalWrite(LEDdizisi[2], LOW);
  digitalWrite(LEDdizisi[3], LOW);
  digitalWrite(LEDdizisi[4], LOW);
  digitalWrite(LEDdizisi[5], LOW);
  digitalWrite(LEDdizisi[6], LOW);
  digitalWrite(LEDdizisi[7], LOW);
  }
void siren(){
  digitalWrite(LEDdizisi[0], HIGH);
  digitalWrite(LEDdizisi[1], HIGH);
  delay(50);
  digitalWrite(LEDdizisi[0], LOW);
  digitalWrite(LEDdizisi[1], LOW);
  delay(50);
  digitalWrite(LEDdizisi[6], HIGH);
  digitalWrite(LEDdizisi[7], HIGH);
  delay(50);
  digitalWrite(LEDdizisi[6], LOW);
  digitalWrite(LEDdizisi[7], LOW);
  delay(50); 
  digitalWrite(LEDdizisi[2], HIGH);
  digitalWrite(LEDdizisi[3], HIGH);
   delay(50);
  digitalWrite(LEDdizisi[2], LOW);
  digitalWrite(LEDdizisi[3], LOW);
  delay(50);
  digitalWrite(LEDdizisi[4], HIGH);
  digitalWrite(LEDdizisi[5], HIGH);
  delay(50);
  digitalWrite(LEDdizisi[4], LOW);
  digitalWrite(LEDdizisi[5], LOW);
  delay(50);
  }

  void donedgeri(){
    for(int i=0; i<4; i++){ /* Tum LEDleri sirayla 50 milisaniye yakip sonduruyoruz */
    digitalWrite(LEDdizisi[i],HIGH);      
    delay(250);                           
    digitalWrite(LEDdizisi[i],LOW);        
  }
 
  for(int j=7;j>3; j--)
  { /* LEDleri geri yonde 50 milisaniye yakip sonduruyoruz */
    digitalWrite(LEDdizisi[j],HIGH);     
    delay(250);
    digitalWrite(LEDdizisi[j], LOW);
  }
    }

 void    biratla(){
      for(int i=0; i<8; i++){ /* Tum LEDleri sirayla 50 milisaniye yakip sonduruyoruz */
    digitalWrite(LEDdizisi[i],HIGH);      
    delay(500);                           
    digitalWrite(LEDdizisi[i],LOW);
    i++;         
  }

  for(int j=7;j>-1; j--)
  { /* LEDleri geri yonde 50 milisaniye yakip sonduruyoruz */
    digitalWrite(LEDdizisi[j],HIGH);     
    delay(500);
    digitalWrite(LEDdizisi[j], LOW);
    j--;
  }
  digitalWrite(LEDdizisi[0], LOW);
      }

 void ikili(){
   int k=0;
   for(int j=7;j>3; j--)
  { /* LEDleri geri yonde 50 milisaniye yakip sonduruyoruz */
    digitalWrite(LEDdizisi[j],HIGH); 
    digitalWrite(LEDdizisi[k],HIGH);   
    delay(500);
    k++;
  }
  delay(100);
  k=4;
  for(int j=3;j>-1; j--)
  { /* LEDleri geri yonde 50 milisaniye yakip sonduruyoruz */
    digitalWrite(LEDdizisi[j],LOW); 
    digitalWrite(LEDdizisi[k],LOW);   
    delay(500);
    k++;
  }
  }

void loop() {
  delay(10);                                          
   donedgeri();
   biratla();
   ikili();
 
  int k=0;
  while(k==0){
  siren();
  
  } 
}
