#include <iostream>
#include "problem-printer.cpp"

int main() {
    cout << "I want to print document" << "\n";

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

    cout << "I had printed document" << "\n";
}
