#ifndef DELLDESKTOPBUILDER_HPP
#define DELLDESKTOPBUILDER_HPP

#include "desktopbuilder.hpp"

class DellDesktopBuilder : public DesktopBuilder {
    void buildMonitor();
    void buildKeyboard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif