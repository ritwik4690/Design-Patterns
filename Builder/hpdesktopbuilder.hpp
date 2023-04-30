#ifndef HPDESKTOPBUILDER_HPP
#define HPDESKTOPBUILDER_HPP

#include "desktopbuilder.hpp"

class HpDesktopBuilder : public DesktopBuilder {
    void buildMonitor();
    void buildKeyboard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif