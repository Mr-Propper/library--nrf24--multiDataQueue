/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <Arduino.h>
#include <../include/multiDataQueue.h>

Queue data;

void setup() {
  data.begin();
}

void loop() {
  data.update();
}