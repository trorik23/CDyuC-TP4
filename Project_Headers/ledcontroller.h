#ifndef LEDCONTROLLER_H_
#define LEDCONTROLLER_H_

void ledcontroller_init(void);
void ledcontroller_run(void);
void ledcontroller_interrupt_handler(void);
void ledcontroller_set_intensity(char);
char ledcontroller_is_on(void);

#define INTENSITY_SCALE 10

#endif
