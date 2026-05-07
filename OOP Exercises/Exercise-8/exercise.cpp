#include <cstring>
#include <iostream>
using namespace std;

class NBAPlayer {
  protected:
    char *name;
    char team[40];
    double avgPoints;
    double avgAssistance;
    double avgRebounds;

  public:
    NBAPlayer() {
        name = new char[0];
        name[0] = '\0';
    }

    NBAPlayer(char *n, char *t, double p, double as, double rb) : avgPoints(p), avgAssistance(as), avgRebounds(rb) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        strncpy(team, t, strlen(t) + 1);
    }

    NBAPlayer(const NBAPlayer &nb) {
        name = new char[strlen(nb.name) + 1];
        strcpy(name, nb.name);
        strncpy(team, nb.team, strlen(nb.team) + 1);
        avgPoints = nb.avgPoints;
        avgAssistance = nb.avgAssistance;
        avgRebounds = nb.avgRebounds;
    }

    NBAPlayer &operator=(const NBAPlayer &nb) {
        if (this != &nb) {
            delete[] name;

            name = new char[strlen(nb.name) + 1];
            strcpy(name, nb.name);
            strncpy(team, nb.team, strlen(nb.team) + 1);
            avgPoints = nb.avgPoints;
            avgAssistance = nb.avgAssistance;
            avgRebounds = nb.avgRebounds;
        }

        return *this;
    }

    virtual double rating() { return 0.45 * avgPoints + 0.30 * avgAssistance + 0.25 * avgRebounds; }

    virtual void print() {
        cout << name << " - " << team << endl;
        cout << "Points: " << avgPoints << endl;
        cout << "Assists: " << avgAssistance << endl;
        cout << "Rebounds: " << avgRebounds << endl;
        cout << " Rating: " << rating() << endl;
    }

    ~NBAPlayer() { delete[] name; }
};

class AllStarPlayer : public NBAPlayer {
    double avgPA;
    double avgAA;
    double avgRA;

  public:
    AllStarPlayer() : NBAPlayer() {}
    AllStarPlayer(const NBAPlayer &nbp, double asp, double asa, double asr) : NBAPlayer(nbp) {
        avgPA = asp;
        avgAA = asa;
        avgRA = asr;
    }

    AllStarPlayer(char *name, char *team, double points, double assists, double rebounds, double allStarPoints,
                  double allStarAssists, double allStarRebounds)
        : NBAPlayer(name, team, points, assists, rebounds) {
        avgPA = allStarPoints;
        avgAA = allStarAssists;
        avgRA = allStarRebounds;
    }

    AllStarPlayer(const AllStarPlayer &asp) : NBAPlayer(asp) {
        avgPA = asp.avgPA;
        avgAA = asp.avgAA;
        avgRA = asp.avgRA;
    }

    AllStarPlayer &operator=(const AllStarPlayer &asp) {
        if (this != &asp) {
            delete[] name;

            name = new char[strlen(asp.name) + 1];
            strcpy(name, asp.name);
            strncpy(team, asp.team, strlen(asp.team) + 1);
            avgPoints = asp.avgPoints;
            avgAssistance = asp.avgAssistance;
            avgRebounds = asp.avgRebounds;

            avgPA = asp.avgPA;
            avgAA = asp.avgAA;
            avgRA = asp.avgRA;
        }

        return *this;
    }

    double allStarRating() { return 0.30 * avgPA + 0.40 * avgAA + 0.30 * avgRA; }

    double rating() { return (NBAPlayer::rating() + allStarRating()) / 2; }

    void print() {
        NBAPlayer::print();
        cout << "All Star Rating :" << allStarRating() << endl;
        cout << "New Rating :" << rating() << endl;
    }

    ~AllStarPlayer() {}
};

int main() {

    char name[50];
    char team[40];
    double points;
    double assists;
    double rebounds;
    double allStarPoints;
    double allStarAssists;
    double allStarRebounds;

    NBAPlayer *players = new NBAPlayer[5];
    AllStarPlayer *asPlayers = new AllStarPlayer[5];
    int n;
    cin >> n;

    if (n == 1) {

        cout << "NBA PLAYERS:" << endl;
        cout << "=====================================" << endl;
        for (int i = 0; i < 5; ++i) {
            cin >> name >> team >> points >> assists >> rebounds;
            players[i] = NBAPlayer(name, team, points, assists, rebounds);
            players[i].print();
        }
    } else if (n == 2) {

        for (int i = 0; i < 5; ++i) {
            cin >> name >> team >> points >> assists >> rebounds;
            cin >> allStarPoints >> allStarAssists >> allStarRebounds;
            players[i] = NBAPlayer(name, team, points, assists, rebounds);
            asPlayers[i] = AllStarPlayer(players[i], allStarPoints, allStarAssists, allStarRebounds);
        }

        cout << "NBA PLAYERS:" << endl;
        cout << "=====================================" << endl;
        for (int i = 0; i < 5; ++i)
            players[i].print();

        cout << "ALL STAR PLAYERS:" << endl;
        cout << "=====================================" << endl;
        for (int i = 0; i < 5; ++i)
            asPlayers[i].print();

    } else if (n == 3) {

        for (int i = 0; i < 5; ++i) {
            cin >> name >> team >> points >> assists >> rebounds;
            cin >> allStarPoints >> allStarAssists >> allStarRebounds;
            asPlayers[i] =
                AllStarPlayer(name, team, points, assists, rebounds, allStarPoints, allStarAssists, allStarRebounds);
        }
        cout << "ALL STAR PLAYERS:" << endl;
        cout << "=====================================" << endl;
        for (int i = 0; i < 5; ++i)
            asPlayers[i].print();
    }

    delete[] players;
    delete[] asPlayers;
}
