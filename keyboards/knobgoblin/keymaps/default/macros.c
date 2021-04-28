#include QMK_KEYBOARD_H

enum custom_keycodes {
    TEST = SAFE_RANGE, //Microstation macros

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

    }
    return true;
};
