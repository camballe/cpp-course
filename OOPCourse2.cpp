#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }
};

int main()
{
    YouTubeChannel ytChannel("Mogul", "Enoch");
    ytChannel.PublishedVideoTitles.push_back("How to make money");
    ytChannel.PublishedVideoTitles.push_back("What is crypto?");
    ytChannel.PublishedVideoTitles.push_back("The dawn of AI");
    YouTubeChannel ytChannel2("PitchCast", "Kambale");

    ytChannel.GetInfo();
    ytChannel2.GetInfo();

    return 0;
}