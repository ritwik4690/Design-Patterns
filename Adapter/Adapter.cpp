#include<iostream>
using namespace std;

class XMLData {
    string xmlData;
public:
    XMLData(string pXmlData) {
        this->xmlData = pXmlData;
    }
    string getXMLData() {
        return xmlData;
    }
};

class DataAnalyticsTool {
    string jsonData;
public:
    DataAnalyticsTool() {}
    DataAnalyticsTool(string pJsonData) {
        this->jsonData = pJsonData;
    }
    virtual void analyseData() {
        cout << "Analysing JSON data: " << jsonData << endl;
    }
};

class Client {
public:
    void ProcessData(DataAnalyticsTool* tool) {
        tool->analyseData();
    }

};

class Adapter : public DataAnalyticsTool {
    XMLData* xmlData;
public:
    Adapter(XMLData* pxmlData) {
        this->xmlData = pxmlData;
    }
    void analyseData() override {
        cout << "Converting XML data: " << xmlData->getXMLData() << " to jsonData " << endl;
        DataAnalyticsTool::analyseData();
    }
};

int main() {
    XMLData* xmlData = new XMLData("<xml><data>XML data</data></xml>");
    DataAnalyticsTool* tool = new Adapter(xmlData);
    Client* client = new Client();
    client->ProcessData(tool);
    return 0;
}
