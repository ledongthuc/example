#include <iostream>
using namespace std;

class Ink {
    public:
        void CheckInk() {
            cout << "+ Check ink done" << "\n";
        }
};

class Paper {
    public:
        void CheckPaper() {
            cout << "+ Check paper" << "\n";
        }
        void GetPaperForPrinting() {
            cout << "+ Get paper for printing" << "\n";
        }
};

class PrinterEngine {
    public:
        void LoadDocument() {
            cout << "+ Load document from computer" << "\n";
        }
        void FormatDocumentData() {
            cout << "+ Format data" << "\n";
        }
        void WarmUp() {
            cout << "+ Engine was warm up" << "\n";
        }
        void PrepareLaser() {
            cout << "+ Prepare laser" << "\n";
        }
        void InkToPaper() {
            cout << "+ Ink to paper" << "\n";
        }
};
