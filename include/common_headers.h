#ifndef _COMMON_HEADERS_H_
#define _COMMON_HEADERS_H_
#ifdef __cpluplus
extern "c"
{
 #endif
 #define SENSOR_INVALID_VALUE (-1)
  typedef enum
  {
    OK,
    INVALID_PARAMETER,
    INVALID_PIN_NUMBER,
    INVALIDE_STATE,
    NULL_PARAMETER,
    INVALID_MODE

  }error_type_t; 
  #ifdef __cpluplus  
}
#endif
#endif