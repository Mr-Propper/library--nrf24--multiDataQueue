/**
 * @file multiDataQueue.h
 * @author Mr-Propper
 * @brief A Class which is providing a transparent multi channel queue.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once
#include <Arduino.h>
#include <HardwareSerial.h>
#include <RHRouter.h>
#include <RH_RF22.h>
#include <SPI.h>
#include <dataQueue.h>
#include <stdarg.h>

#ifndef MAX_QUEUES
    #define MAX_QUEUES 5
#endif

/**
 * @brief Central Queue Classs which provides the multi channel queue
 * 
 */
class QueueController {
private:
    DataQueue *_queues[MAX_QUEUES];
public:
    QueueController(){

    }
    /**
     * @brief Must be called at the beginning
     * 
     */
    void begin(DataQueue *_queue, ...){
        va_list vl;
        uint8_t i=0;
        va_start(vl, _queue);
        while((_queue)!=NULL){
            _queues[i++] = va_arg(vl,DataQueue*);
        }
        va_end(vl);

    }
    /**
     * @brief Must be called in the main loop
     * 
     */
    void update(){
        
    }
    
};