#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

protected:
    string OwnerName;
    int ContentQuality;

public:
    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
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

    void Subscribe()
    {
        SubscribersCount++;
    }

    void Unsubscribe()
    {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }

    void PublishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }

    void CheckAnalytics()
    {
        if (ContentQuality < 5)
        {
            cout << Name << " has bad quality content." << endl;
        }
        else
        {
            cout << Name << " has great content." << endl;
        }
    }
};

class CookingYouTubeChannel : public YouTubeChannel
{
public:
    CookingYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
    {
    }
    void Practice()
    {
        cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        ContentQuality++;
    }
};
class SingersYouTubeChannel : public YouTubeChannel
{
public:
    SingersYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
    {
    }
    void Practice()
    {
        cout << OwnerName << " is taking singing classes, learning new songs, experimenting learning how to dance..." << endl;
        ContentQuality++;
    }
};

int main()
{
    CookingYouTubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
    SingersYouTubeChannel singersYtChannel("JohnSings", "John");
    cookingYtChannel.Practice();

    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();

    YouTubeChannel *yt1 = &cookingYtChannel;
    YouTubeChannel *yt2 = &singersYtChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    return 0;
}