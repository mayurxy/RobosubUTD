    // define pin name
    
    #define pwm_1 7
    #define dir_1 6
    
    
void setup() {
      pinMode(pwm_1, OUTPUT);
      pinMode(dir_1, OUTPUT);
      Serial.begin(9600);
    
}

void loop() {
            
/*torture test*/
motor_fwd(10);
delay(5000);
motor_fwd(100);
delay(5000);

motor_break();
delay(2000);

motor_rev(100);
delay(5000);

motor_break();
delay(2000);

motor_rev(30);
delay(5000);


motor_break();
delay(2000);

motor_fwd(100);
delay(5000);

motor_break();
delay(100);

motor_rev(100);
delay(5000);
motor_break();
delay(100);

motor_fwd(100);
delay(5000);
motor_break();
delay(100);

motor_rev(100);
delay(5000);
motor_break();
delay(100);

motor_fwd(100);
delay(5000);

motor_break();
delay(3000);




}


//random functions
void motor_fwd(int x){
      int y;
      digitalWrite(pwm_1,HIGH);
      y = map(x, 0, 100, 125, 0);
      analogWrite(dir_1,y);
      Serial.println(y);
  }

void motor_rev(int x){
      int y;
      digitalWrite(pwm_1,HIGH);
      y = map(x, 0, 100, 130, 255);
      analogWrite(dir_1,y);
      Serial.println(y);
  }

void motor_break(){
  digitalWrite(pwm_1,HIGH);
  analogWrite(dir_1,128);
  Serial.println("break");
  
  }
