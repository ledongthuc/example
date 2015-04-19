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

class PrinterController {
    public:
        void Print() {
            Ink ink;
            Paper paper;
            PrinterEngine engine;

            ink.CheckInk();
            paper.CheckPaper();
            engine.LoadDocument();
            engine.FormatDocumentData();
            paper.GetPaperForPrinting();
            engine.PrepareLaser();
            engine.WarmUp();
            engine.InkToPaper();
        }
};
