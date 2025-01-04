#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20, 16, 2);

const int trigPin = 10;
const int echoPin = 11;
long duration;
int distanceCm;
int motorSpeedA = 0;
int motorSpeedB = 0;

// Motor Pins 
int ena = 3;
int in1 = 5;
int in2 = 4;

int in3 = 6;
int in4 = 7;
int enb = 9;

void setup() {
  Serial.begin(9600);
  lcd.init();					
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Motor Starting");
  delay(5000);

  // Initialize motor pins
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Initialize ultrasonic sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Read distance from ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration * 0.034 / 2;

  // Display distance on LCD
  lcd.setCursor(0, 0); // Set cursor to the first row
  lcd.print("Distance: ");
  lcd.print(distanceCm);
  lcd.print(" cm    "); // Clear any previous characters

  // Motor control based on distance
  if (distanceCm < 20) {
    // Stop both motors
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    motorSpeedA = 0;
    motorSpeedB = 0;
  } else {
    // Run motors at max speed
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    motorSpeedA = 254;
    analogWrite(ena, motorSpeedA);

    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    motorSpeedB = 254;
    analogWrite(enb, motorSpeedB);
  }

  // Display motor speeds on LCD
  lcd.setCursor(0, 1); // Set cursor to the second row
  lcd.print("Speed : ");
  lcd.setCursor(8, 1);
  
  lcd.print((motorSpeedA+motorSpeedB)/2);
  lcd.print("   "); // Clear any previous characters
  
  
  
  

  delay(100); // Delay of 100 milliseconds
}
