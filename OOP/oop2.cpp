/*
This code exemplifies the use of constructors and class methods
by instatiating two objects defined by a class with a constructor,
and returns to terminal the objects information using a defined class method to that.
*/

#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

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
};

int main()
{
    YoutubeChannel ytChannel("CanalInutil", "Joseph");
    ytChannel.SubscribersCount = 500;
    ytChannel.PublishedVideoTitles.push_back("aula1"); //push_back add an element at the end of a list object
    ytChannel.PublishedVideoTitles.push_back("aula2");
    ytChannel.PublishedVideoTitles.push_back("aula3");

    YoutubeChannel ytChannel2("CanalDesprezivel", "Ximira");
    ytChannel2.SubscribersCount = 1500;
    
    ytChannel.GetInfo();
    ytChannel2.GetInfo();

    system("pause>0");
}