#include "hpdesktopbuilder.hpp"
#include "delldesktopbuilder.hpp"
#include "desktopdirector.hpp"

int main() {
    HpDesktopBuilder* hpDesktopBuilder = new HpDesktopBuilder();
    DellDesktopBuilder* dellDesktopBuilder = new DellDesktopBuilder();

    DesktopDirector* director1 = new DesktopDirector(hpDesktopBuilder);
    DesktopDirector* director2 = new DesktopDirector(dellDesktopBuilder);

    Desktop* desktop1 = director1->BuildDesktop();
    Desktop* desktop2 = director2->BuildDesktop();

    desktop1->showSpecs();
    desktop2->showSpecs();

    return 0;
}