add_library(printer STATIC printer.c)
target_include_directories(printer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# Pull in HAL/CMSIS include paths and defines from the board's stm32cubemx interface target
target_link_libraries(printer PUBLIC stm32cubemx)
