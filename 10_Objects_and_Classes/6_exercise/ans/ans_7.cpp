
/*绗崄绔狅細缂栫▼缁冧範 7 */
#include <iostream>
using namespace std;

const int SIZE = 19;
class plorg{
private:
    char name[SIZE];
    int CI;
    /* 涓や釜鏁版嵁鎴愬憳锛宯ame浣跨敤瀛楃鏁扮粍 */
public:
    plorg(const char st[] = "Plorga", int ci = 50);
    /* 鏋勯€犲嚱鏁板甫鍙傛暟榛樿鍊硷紝缂虹渷CI涓�50 */
    void reset_ci(int n);
    void print_info() const;
    /* 鎵撳嵃鏁版嵁淇℃伅鍑芥暟搴旀坊鍔燾onst鍏抽敭瀛� */
};

int main()
{
    plorg pl;
    pl.print_info();
    pl.reset_ci(98);
    pl.print_info();
    plorg pm("Stenom",87);
    pm.print_info();
    return 0;
}
plorg::plorg(const char st[], int ci)
{
    strcpy(name,st);
    CI = ci;
}
void plorg::reset_ci(int n)
{
    CI = n;
}
void plorg::print_info() const
{
    cout<<"plorg name: "<<name<<", CI = "<<CI<<endl;
}

