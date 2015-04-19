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
                    bonus = 100 * 6 + 3 - 2 +7;
                    break;
                case MANAGER:
                    bonus = 200 / 2 + 4 +6;
                    break;
                case SALESPERSON:
                    bonus = 50 * 3 / 2 - 7;
                    break;
                case IT:
                    bonus = 20 + 7 - 2;
                    break;
                case JANITOR:
                    bonus = 10 - 1 - 5;
                    break;
            }
            return bonus;
        }
        
        double CalculateCEOBonus() {
            
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
