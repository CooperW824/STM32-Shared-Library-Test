#ifndef PRINTER_H
#define PRINTER_H

#include "stm32wlxx_hal.h"

typedef struct {
    UART_HandleTypeDef *huart;
    char * name;
} Printer_HandleTypeDef;


HAL_StatusTypeDef Printer_Init(Printer_HandleTypeDef *printer, char *name);


#endif /* PRINTER_H */
