/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief Test program which is using Queue Class
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <Arduino.h>
#include <../include/multiDataQueue.h>
#include <../include/dataQueue.h>

QueueController data;
DataQueue queue1;
DataQueue queue2;

void setup() {
  data.begin(&queue1,&queue2);
  Serial.begin(115200);
}

void loop() {
  data.update();
  if(queue1.isAvailable()){
    Serial.println(queue1.read());
  }
  if(queue2.isAvailable()){
    
  }

  queue1.write("Test");

}