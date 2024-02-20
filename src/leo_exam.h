#include "LiquidCrystal.h"
#include <cstdint>
namespace work2
{
void dx100_setup(const uint8_t ldr_work2, const uint8_t led_work2[], const uint8_t arrayLength);
void dx100_loop(const uint8_t ldr_work2, const uint8_t led_work2[], const uint8_t arrayLength);
} // namespace work2
namespace work3
{
void dx100_setup(const uint8_t led1_work3, const uint8_t led2_work3, const uint8_t led3_work3);
void dx100_loop(const uint8_t led1_work3, const uint8_t led2_work3, const uint8_t led3_work3);
} // namespace work3
namespace work4
{
void dx100_setup(const uint8_t servo_work4);
void dx100_loop(const uint8_t servo_work4);
} // namespace work4
namespace work5
{
void dx100_setup(const uint8_t potentio_work5, const LiquidCrystal lcd);
void dx100_loop(const uint8_t potentio_work5, const LiquidCrystal lcd);
} // namespace work5