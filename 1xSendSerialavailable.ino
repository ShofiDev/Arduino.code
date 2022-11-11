String pQ;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()){
  pQ = Serial.readString();
  String b = pQ.substring(0,1);
  Serial.println(b); 
  if(b == "a"){   
   //Ur Code Here 
   //example
  Serial.println("sending...");
  Serial.println("success");  
  //another condition
  }else if(b == "b"){
    //Ur Code Here 
    //example
    Serial.println("success");
    }
}
}
