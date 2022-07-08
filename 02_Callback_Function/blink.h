#ifndef __BLINK_H
#define __BLINK_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stdint.h>

typedef void (*blinkOnHandler)(void);
typedef void (*blinkOffHandler)(void);

typedef struct {
    blinkOnHandler onCallback;
    blinkOffHandler offCallback;
    uint8_t state;
} blinkHandler_t;

void blinkHandler(blinkHandler_t* cxt);

#ifdef __cplusplus
}
#endif

#endif // __BLINK_H