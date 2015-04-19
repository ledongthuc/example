#include <iostream>
using namespace std;

class Group {
    public:
        Group() {};
        virtual double CalculateBonus() {};
};

class CEOGroup : public Group {
    public:
        double CalculateBonus() {
            return 100 * 6 + 3 - 2 +7;
        };
};

class ManagerGroup : public Group {
    public:
        double CalculateBonus() {
            return 200 / 2 + 4 +6;
        };
};

class SalespersonGroup : public Group {
    public:
        double CalculateBonus() {
            return 50 * 3 / 2 - 7;
        };
};

class ITGroup : public Group {
    public:
        double CalculateBonus() {
            return 20 + 7 - 2;
        };
};

class JanitorGroup : public Group {
    public:
        double CalculateBonus() {
            return 10 - 1 - 5;
        };
};

class BonusProcessor {
    public:
        BonusProcessor() {};

        virtual double GetBonus(Group* group) {
            return group->CalculateBonus();
        };
};

int main() {
    BonusProcessor* processor = new BonusProcessor();
    double bonus;
    int index;
    
    bonus = processor->GetBonus(new CEOGroup());
    cout << "Bonus of CEO: " << bonus << "\n";

    bonus = processor->GetBonus(new ManagerGroup());
    cout << "Bonus of MANAGER: " << bonus << "\n";

    bonus = processor->GetBonus(new SalespersonGroup());
    cout << "Bonus of SALESPERSON: " << bonus << "\n";

    bonus = processor->GetBonus(new ITGroup());
    cout << "Bonus of IT: " << bonus << "\n";

    bonus = processor->GetBonus(new JanitorGroup());
    cout << "Bonus of JANITOR: " << bonus << "\n";
}
