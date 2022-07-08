#include "blink.h"

typedef enum {
    BLINK_STATE_OFF,
    BLINK_STATE_ON
} blinkState_t;

void blinkHandler(blinkHandler_t* cxt)
{
    switch (cxt->state)
    {
    case BLINK_STATE_OFF:
        cxt->state = BLINK_STATE_ON;
        if (cxt->offCallback)
        {
            cxt->offCallback();
        }
        break;

    case BLINK_STATE_ON:
        cxt->state = BLINK_STATE_OFF;
        if (cxt->onCallback)
        {
            cxt->onCallback();
        }
        break;
    
    default:
        break;
    }
}