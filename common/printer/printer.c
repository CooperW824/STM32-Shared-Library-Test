
#include "printer.h"
#include <stdio.h>

HAL_StatusTypeDef Printer_Init(Printer_HandleTypeDef *printer, char *name) {
  if (printer == NULL || name == NULL) {
    return HAL_ERROR;
  }

  printer->name = name;

  printf("Printer '%s' initialized with UART instance %p\n", printer->name,
         (void *)printer->huart);

  return HAL_OK;
}
