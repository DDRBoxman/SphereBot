/*
 * PINS
 */
 
#define XAXIS_DIR_PIN 7
#define XAXIS_STEP_PIN 8
#define XAXIS_ENABLE_PIN 6
#define XAXIS_ENDSTOP_PIN 3

#define YAXIS_DIR_PIN 10
#define YAXIS_STEP_PIN 11
#define YAXIS_ENABLE_PIN 9
#define YAXIS_ENDSTOP_PIN -1 // <0 0> No Endstop!

#define SERVO_PIN 2

/*
 * Other Configuration
 */

#define DEFAULT_PEN_UP_POSITION 50
#define XAXIS_MIN_STEPCOUNT -467
#define XAXIS_MAX_STEPCOUNT 467
#define DEFAULT_ZOOM_FACTOR 1. // With a Zoom-Faktor of .65, I can print gcode for Makerbot Unicorn without changes. 
                               // The zoom factor can be also manipulated by the propretiary code M402

