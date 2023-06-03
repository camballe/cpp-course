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
};

int main()
{
    YouTubeChannel ytChannel;
    ytChannel.Name = "Mogul";
    ytChannel.OwnerName = "Enoch";
    ytChannel.SubscribersCount = 500000;
    ytChannel.PublishedVideoTitles = {"How to make money", "What is crypto?", "The dawn of AI"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    for (string videoTitle : ytChannel.PublishedVideoTitles)
    {
        cout << videoTitle << endl;
    }

    return 0;
}