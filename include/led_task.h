#pragma once
#include <stdint.h>
#include "class_timer.h"
#include <Arduino.h>
namespace datos
{
   void ini(uint8_t pint, uint32_t tempo);
   void task();
}//namespace datos