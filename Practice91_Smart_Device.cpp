#include <string>
#include <iostream>
using namespace std;




//Camera detials (base)
class Camera
{
public:
    int camera_megapixels;
};


//ausio detials (base)
class MusicPlayer
{
public:
    int speaker_power;
};

// Derived class inheriting from both classes
class SmartPhone : public Camera, public MusicPlayer
{
public:
    string brand;
};

int main()
{
    SmartPhone phone_object;

    getline(cin, phone_object.brand);
    cin >> phone_object.camera_megapixels;
    cin >> phone_object.speaker_power;

    cout << "Brand: " << phone_object.brand << endl;
    cout << "Camera: " << phone_object.camera_megapixels << " MP" << endl;
    cout << "Speaker Power: " << phone_object.speaker_power << " W" << endl;

    return 0;
}
