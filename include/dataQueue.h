/**
 * @file dataQueue.h
 * @author Mr-Propper
 * @brief 
 * @version 0.1
 * @date 2022-07-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once

#include <Arduino.h>
/**
 * @brief 
 * 
 */
class DataQueue
{
private:
    uint8_t _queue;
public:
    DataQueue(/* args */){};
    ~DataQueue(){};
    int8_t isAvailable(){
        return -1;
    }
    char* read(){
        return "test";
    }
    bool write(const char* buf){
        return true;
    }
};

