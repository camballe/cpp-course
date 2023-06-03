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

public:
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
    }
};

int main()
{
    CookingYouTubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
    CookingYouTubeChannel cookingYtChannel2("John's Kitchen", "John");
    // cookingYtChannel.PublishVideo("Apple Pie");
    // cookingYtChannel.PublishVideo("Chocolate Cake");
    // cookingYtChannel.Subscribe();
    // cookingYtChannel.Subscribe();
    // cookingYtChannel.GetInfo();
    cookingYtChannel.Practice();
    cookingYtChannel2.Practice();

    // YouTubeChannel ytChannel("Mogul", "Enoch");
    // ytChannel.GetInfo();

    return 0;
}