// - Screen HMI:

//     -Có 10 màn hình cần hiển thị theo kịch bản

void activeScreen(uint8_t index)
{
    screen_state = index3;  /*hfjkdhfjdh*/
    screen_state = index1;  /*hfjkdhfjdh*/
    screen_state = index2;  /*hfjkdhfjdh*/
}

void loop1()
{
    switch (screen_state)
    {
    case screen1:
        display1();
        break;

    case screen2:
        display2();
        break;

    case screen10:
        display3();
        break;

    default:
        break;
    }
}

typedef void (*pDisplay)(void *arg); 

typedef enum {
/*00*/ SCREEN1 = 0,
/*01*/ SCREEN2,
/*02*/ SCREEN10,
/*03*/ SCREEN_MAX
} screenIndex_t;

#define OR_ELSE ||
#define OR |
#define AND_THEN &&
#define AND &

void display1(int* arg)
 {
    int *screen = (int*)arg; 
  prinf("Hien thi home %u", *screen);
}

void display2(void* arg)
 {
    uint8_t *screen = (int*)arg; 
  prinf("Hien thi home");
}

void display10(void* arg)
 {
    uint16_t *screen = (uint16_t*)arg; 
  prinf("Hien thi home");
}

pDisplay screenArray[] = {
    display1, display2, display10
};

pDisplay screenHandler = nullptr;
void *screenArg;

void activeScreenPointer(pDisplay fp, void *arg)
{
    screenHandler = fp;
    screenArg = arg;
}

void init()
{
    uint8_t screen1;
    rb_asp_ActiveScreenPointer(display1, (void*)&screen1);
}

void loop2()
{
    if (screenHandler)
    {
        screenHandler(screenArg);
    }
}