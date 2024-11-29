#include <Wire.h>
#include <RTClib.h>

RTC_DS1307 RTC;

void setup (){
Serial.begin(9600);
Wire.begin();
RTC.begin();
if (! RTC.isrunning()){
Serial.println("RTC is NOT running!");
RTC.adjust(DateTime(__DATE__, __TIME__));
}
pinMode(8,2);
}

void loop (){
DateTime now = RTC.now();
delay(1000);
while(!digitalRead(8));
Serial.println("Start time");
  int startDay = now.day();
  int startHour = now.hour();
  int startMinute = now.minute();
  int startSecond = now.second();
Serial.println(String(now.month())+"/"+String(now.day())+"/"+String(now.year()));
while(digitalRead(8)){
  now = RTC.now();
  Serial.println(String(now.hour())+":"+String(now.minute())+":"+String(now.second()));
  delay(1000);
}
  int endDay = now.day();
  int endHour = now.hour();
  int endMinute = now.minute();
  int endSecond = now.second();
  int durationInSeconds = (endDay - startDay) * 24 * 3600 +
                          (endHour - startHour) * 3600 +
                          (endMinute - startMinute) * 60 +
                          (endSecond - startSecond);
Serial.println("End time");
Serial.println("Duration: " + String(durationInSeconds) + " seconds");
Serial.println("Days : "+String(endDay - startDay)+" || Hours : "+String(endHour - startHour)+" || Minutes : "+String(endMinute - startMinute)+" || Seconds : "+String(endSecond - startSecond));
}
