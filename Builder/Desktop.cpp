#include "desktop.hpp"
#include <iostream>

void Desktop::setMonitor(string pMonitor) {
    this->monitor = pMonitor;
}

void Desktop::setKeyboard(string pKeyboard) {
    this->keyboard = pKeyboard;
}

void Desktop::setMouse(string pMouse) {
    this->mouse = pMouse;
}

void Desktop::setSpeaker(string pSpeaker) {
    this->speaker = pSpeaker;
}

void Desktop::setRam(string pRam) {
    this->ram = pRam;
}

void Desktop::setProcessor(string pProcessor) {
    this->processor = pProcessor;
}

void Desktop::setMotherBoard(string pMotherBoard) {
    this->motherBoard = pMotherBoard;
}

void Desktop::showSpecs() {
    cout << "------------------------------------------" << endl;
    cout << "Monitor: " << monitor << endl;
    cout << "Keyboard: " << keyboard << endl;
    cout << "Mouse: " << mouse << endl;
    cout << "Speaker: " << speaker << endl;
    cout << "Ram: " << ram << endl;
    cout << "Processor: " << processor << endl;
    cout << "MotherBoard: " << motherBoard << endl;
}