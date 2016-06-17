/*

  Copyright(c) 2016 Huy Do, huydo1@gmail.com

  Based on work from Carsten Meyer (c't Make), cm@ct.de

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.

*/


#ifndef jogging_h
#define jogging_h 

// The following config is for Arduino Mega 2560

#define JOG_DDR       DDRD
#define JOG_PIN       PIND
#define JOG_PORT      PORTD
#define JOG_SCL       0     // white, Arduino Mega Digital 21
#define JOG_SDA       1     // blue,  Arduino Mega Digital 20

#define WIIEXT_TWI_ADDR 0x52 // this is the I2C slave address of any Wiimote extensions
// adress of motionPlus
//#define WIIEXT_TWI_ADDR 0x53 // this is the I2C slave address of any Wiimote extensions


uint8_t jog_active;     // Flags jogging step execution for ISR

// initialize the jogging module
void jog_init();

// perform the jogging cycle
void jogpad_check();

// ISR for jogging
void jog_isr();

#endif
