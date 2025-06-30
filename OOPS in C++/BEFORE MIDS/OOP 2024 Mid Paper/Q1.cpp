using namespace std;
#include <iostream>
#include <string>

class Player
{
    private:
    int ID;
    string name;

    public:
    Player(): ID(0), name(" ") {}

    Player(int i, string n) : ID(i), name(n) {}

    void showRecord() const;

    ~Player()
    {
        cout << "Player Removed" << endl;
    }
};

void Player :: showRecord() const
{
    cout << "ID : " << ID << endl;
    cout << "Name : " << name << endl;
}

int main()
{
    Player p1;
    Player p2(3, "Shaheen");
    p2.showRecord();
    
    return 0;
}