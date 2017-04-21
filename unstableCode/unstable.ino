/*
 *  Unstable Branch of Simple-Way-to-change-a-Password
 *  View this unstable branch on github https://github.com/j-n-s-k-n-r/xxxx
 *  View the master of this on github   
 *  Share this, mod this but don't sell this
 *  Author: j4n5s1
 *  The God who created this universe is quite clearly a maniac
 *  
 */


void setup() {
  //Started the serial Communication on 9600 Baud
  Serial.begin(9600);

  char* a1[] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
  char* a2[] ={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
  
  int a3[] = {"0","1","2","3","4","5","6","7","8","9"};
  // Set your own number between 0 and xxx 
  int your = 42;
  
  
  
  Serial.println("We are ready ");
}

void loop() {
  for(int i=0; i< sizeof(a1)-1 ;i++)
  { 
    Serial.println(a1[i]);
  }
  //String pw ="";

}
