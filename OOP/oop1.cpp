#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};

int main(){
    YoutubeChannel ytChannel;
    ytChannel.Name = "CanalInutil";
    ytChannel.OwnerName = "Joseph";
    ytChannel.SubscribersCount = 500;
    ytChannel.PublishedVideoTitles = {"aula1", "aula2", "aula3"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscriberCount: " << ytChannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    for (string videoTitle: ytChannel.PublishedVideoTitles){
        cout << videoTitle << endl;
    }

    system("pause>0");
}