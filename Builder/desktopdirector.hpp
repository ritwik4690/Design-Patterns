#ifndef DESKTOPDIRECTOR_HPP
#define DESKTOPDIRECTOR_HPP

#include "desktopbuilder.hpp"

class DesktopDirector {
private:
    DesktopBuilder* desktopBuilder;
public:
    DesktopDirector(DesktopBuilder* pDesktopBuilder){
        desktopBuilder = pDesktopBuilder;
    }
    Desktop* getDesktop() {
        return desktopBuilder->getDesktop();
    }
    Desktop* BuildDesktop() {
        desktopBuilder->buildMonitor();
        desktopBuilder->buildKeyboard();
        desktopBuilder->buildMouse();
        desktopBuilder->buildSpeaker();
        desktopBuilder->buildRam();
        desktopBuilder->buildProcessor();
        desktopBuilder->buildMotherBoard();
        return desktopBuilder->getDesktop();
    }

};

#endif