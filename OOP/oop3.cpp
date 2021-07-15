/*
This code exemplifies encapsulation
*/

#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

public:
    YoutubeChannel(string name, string ownerName){  //constructor method
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo(){  //class method to return object informations
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscriberCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }

    void Subscribe() {
        SubscribersCount++;
    }

    void Unsubscribe(){
        if(SubscribersCount > 0)
            SubscribersCount--;
    }

    void PublishVideo(string title){
        PublishedVideoTitles.push_back(title);
    }
};

int main()
{
    YoutubeChannel ytChannel("CanalInutil", "Joseph");
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();

    ytChannel.PublishVideo("aula1"); //push_back add an element at the end of a list object
    ytChannel.PublishVideo("aula2");
    ytChannel.PublishVideo("aula3");

    ytChannel.GetInfo();
    
    system("pause>0");
}