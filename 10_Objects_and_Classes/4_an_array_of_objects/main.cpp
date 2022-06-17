#include "a.h"
using namespace std;

int main(void)
{
    Scores stu[3] = 
    {
        Scores("Zhang San", 130, 140, 145),
        Scores("Li Si", 135, 130, 140),
        Scores("Zhao Wu", 120, 115, 145),
    };
    
    for (int i = 0; i < 3; i++)
        stu[i].show();

    const Scores *top = &stu[0];

    for (int i = 1; i < 3; i++)
        top = &top->topval(stu[i]);
 
    cout << "Top1:" <<endl;
    top->show();

    return 0;
}