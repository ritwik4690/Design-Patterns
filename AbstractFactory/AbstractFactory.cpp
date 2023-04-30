#include<iostream>
using namespace std;

class IButton {
public:
    virtual void press() = 0;
};

class MacButton : public IButton {
public:
    void press() {
        cout << "Mac Button Pressed" << endl;
    }
};

class WindowsButton : public IButton {
public:
    void press() {
        cout << "Windows Button Pressed" << endl;
    }
};


class ITextBox {
public:
    virtual void showText() = 0;
};

class MacTextBox : public ITextBox {
public:
    void showText() {
        cout << "Mac Text Box" << endl;
    }
};

class WindowsTextBox : public ITextBox {
public:
    void showText() {
        cout << "Windows Text Box" << endl;
    }
};

class IFactory {
public:
    virtual IButton* CreateButton() = 0;
    virtual ITextBox* CreateTextBox() = 0;
};

class MacFactory : public IFactory {
public:
    IButton* CreateButton() {
        return new MacButton();
    }

    ITextBox* CreateTextBox() {
        return new MacTextBox();
    }
};

class WindowsFactory : public IFactory {
public:
    IButton* CreateButton() {
        return new WindowsButton();
    }

    ITextBox* CreateTextBox() {
        return new WindowsTextBox();
    }
};

class GUIAbstractFactory {
public:
    static IFactory* CreateFactory(string osType) {
        if (osType == "Mac") {
            return new MacFactory();
        }
        else if (osType == "Windows") {
            return new WindowsFactory();
        }
        else {
            return NULL;
        }
    }
};


int main() {
    cout << "Enter your OS Type " << endl;

    string osType;
    cin >> osType;

    IFactory* fact = GUIAbstractFactory::CreateFactory(osType);

    IButton* button = fact->CreateButton();
    button->press();

    ITextBox* textBox = fact->CreateTextBox();
    textBox->showText();

    return 0;

}