#include <iostream>
using namespace std;

enum UserGroup { 
    CEO, 
    MANAGER, 
    SALESPERSON,
    IT,
    JANITOR 
};

class BonusProcessor {
    public:
        double GetBonus(UserGroup userGroup) {
            double bonus = 0;
            switch(userGroup) {
                case CEO:
                    bonus = CalculateCEOBonus();
                    break;
                case MANAGER:
                    bonus = CalculateManagerBonus();
                    break;
                case SALESPERSON:
                    bonus = CalculateSalespersonBonus();
                    break;
                case IT:
                    bonus = CalculateITBonus();
                    break;
                case JANITOR:
                    bonus = CalculateJanitorBonus();
                    break;
            }
            return bonus;
        }
        
        double CalculateCEOBonus() {
            return 100 * 6 + 3 - 2 +7;
        }

        double CalculateManagerBonus() {
            return 200 / 2 + 4 +6;
        }

        double CalculateSalespersonBonus() {
            return 50 * 3 / 2 - 7;;
        }

        double CalculateITBonus() {
            return 20 + 7 - 2;
        }

        double CalculateJanitorBonus() {
            return 10 - 1 - 5;
        }
};

int main() {
    BonusProcessor* processor = new BonusProcessor();
    double bonus;
    
    bonus = processor->GetBonus(CEO);
    cout << "Bonus of CEO: " << bonus << "\n";

    bonus = processor->GetBonus(MANAGER);
    cout << "Bonus of MANAGER: " << bonus << "\n";

    bonus = processor->GetBonus(SALESPERSON);
    cout << "Bonus of SALESPERSON: " << bonus << "\n";

    bonus = processor->GetBonus(IT);
    cout << "Bonus of IT: " << bonus << "\n";

    bonus = processor->GetBonus(JANITOR);
    cout << "Bonus of JANITOR: " << bonus << "\n";
}
