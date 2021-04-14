#include QMK_KEYBOARD_H

enum custom_keycodes {
    MSTOP = SAFE_RANGE, //Microstation macros
    MSFRONT,
    MSRIGHT,
    MSISO,
    MSBOT,
    MSBACK,
    MSLEFT,
    MSFIT,
    TEST
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case TEST:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(X_T) SS_TAP(X_E) SS_TAP(X_S) SS_TAP(X_T));
        } else {
            // when keycode QMKBEST is released
        }
        break;
        
    case MSTOP:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(X_ESC) SS_TAP(X_ESC) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_6) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_ESC) SS_TAP(X_1));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case MSFRONT:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(X_ESC) SS_TAP(X_ESC) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_6) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_ESC) SS_TAP(X_1));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case MSRIGHT:
    	if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(X_ESC) SS_TAP(X_ESC) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_6) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_ESC) SS_TAP(X_1));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case MSISO:
    	if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(X_ESC) SS_TAP(X_ESC) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_6) SS_DELAY(100) SS_TAP(X_5) SS_DELAY(100) SS_TAP(X_ESC) SS_TAP(X_1));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case MSBOT:
    	if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(X_ESC) SS_TAP(X_ESC) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_6) SS_DELAY(100) SS_TAP(X_6) SS_DELAY(100) SS_TAP(X_ESC) SS_TAP(X_1));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case MSBACK:
    	if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(X_ESC) SS_TAP(X_ESC) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_6) SS_DELAY(100) SS_TAP(X_7) SS_DELAY(100) SS_TAP(X_ESC) SS_TAP(X_1));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case MSLEFT:
    	if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(X_ESC) SS_TAP(X_ESC) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_6) SS_DELAY(100) SS_TAP(X_8) SS_DELAY(100) SS_TAP(X_ESC) SS_TAP(X_1));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case MSFIT:
    	if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(X_ESC) SS_TAP(X_ESC) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_5) SS_DELAY(100) SS_TAP(X_ESC) SS_TAP(X_1));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};
