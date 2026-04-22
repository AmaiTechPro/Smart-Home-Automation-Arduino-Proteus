#include <Wire.h> 
#include <RTClib.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

// Initialization
LiquidCrystal_I2C lcd(0x20, 16, 2); 
RTC_DS1307 rtc;
Servo curtainServo;

// Pin Assignments
const int tempPin = A0;      
const int ldrPin = A1;       
const int pirPin = 7;        
const int fanPin = 6;        
const int houseLight = 8;    
const int secLight = 10;     
const int servoPin = 9;      

void setup() {
  Wire.begin();
  rtc.begin();
  lcd.init();
  lcd.backlight();
  curtainServo.attach(servoPin);
  
  pinMode(pirPin, INPUT);
  pinMode(fanPin, OUTPUT);
  pinMode(houseLight, OUTPUT);
  pinMode(secLight, OUTPUT);

  // DEBUG TIME: Set to 7:59:50 AM to test Servo Opening
  // After testing Servo, change to 18:29:50 to test Lights
  rtc.adjust(DateTime(2026, 4, 21, 18, 29, 58)); 
}

void loop() {
  DateTime now = rtc.now();
  
  // Read Sensors
  float tempC = (analogRead(tempPin) * 5.0 * 100.0) / 1024.0;
  int lightLevel = analogRead(ldrPin); 
  int motion = digitalRead(pirPin);

  // --- TASK 1: MAIN HOUSE LIGHTS (6:30 PM - 9:00 PM) ---
  int totalMinutes = (now.hour() * 60) + now.minute();
  if (totalMinutes >= 1110 && totalMinutes < 1260) {
    digitalWrite(houseLight, HIGH); 
  } else {
    digitalWrite(houseLight, LOW);
  }

  // --- TASK 2: AUTOMATED CURTAINS (8 AM Open, 6 PM Close) ---
  if (now.hour() >= 8 && now.hour() < 18) {
    curtainServo.write(180); // Open position
  } else {
    curtainServo.write(0);   // Closed position
  }

  // --- TASK 3: SECURITY LIGHTS ---
  // ON if it is Dark (LDR < 500) OR if Motion is detected
  if (lightLevel < 19 || motion == HIGH) {
    digitalWrite(secLight, HIGH); 
  } else {
    digitalWrite(secLight, LOW);
  }

  // --- TASK 4: TEMPERATURE CONTROL (Fan ON > 30C) ---
  if (tempC > 30.0) {
    digitalWrite(fanPin, HIGH);
  } else {
    digitalWrite(fanPin, LOW);
  }

  // --- TASK 5: DISPLAY ---
  lcd.setCursor(0, 0);
  if(now.hour() < 10) lcd.print('0');
  lcd.print(now.hour()); lcd.print(":");
  if(now.minute() < 10) lcd.print('0');
  lcd.print(now.minute());
  
  lcd.print(" Temp:"); 
  lcd.print((int)tempC); 
  lcd.print("C ");

  lcd.setCursor(0, 1);
  // LCD only shows ALERT if there is actual motion
  if (motion == HIGH) {
    lcd.print("ALERT!  "); 
  } else {
    lcd.print("SECURE  ");
  }
  
  lcd.print("Fan:"); 
  lcd.print(tempC > 30.0 ? "ON " : "OFF");

  delay(200); 
}