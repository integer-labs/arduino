#ifndef DPAD_MODULE_H
#define DPAD_MODULE_H

#include "Module.h"

/// A directional button pad with 5 buttons. (up, down, left, right, and center)
class DPadModule : public Module {
 public:
    enum Button {
        RIGHT,
        UP,
        LEFT,
        DOWN,
        CENTER
    };

    DPadModule();
    DPadModule(uint16_t deviceID);

    bool getButton(Button button);
    bool getButton(uint8_t button);
    uint8_t getButtons();

 private:
};

#endif
