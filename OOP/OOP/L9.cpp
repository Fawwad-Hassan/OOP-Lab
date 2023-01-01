/*#include <iostream>
#include <string>
using namespace std;
class Remote;
class Television {
private:
	bool state;
	static unsigned int channel;
	unsigned int max_channel = 50;
	static unsigned int volume;
	unsigned int max_volume = 100;
	string mode;
	string input;
public:
	Television(bool s = 0, string m = "", string i = "") {
		state = s;
		mode = m;
		input = i;
	}
	void setState(bool s) { state = s; }
	void setChannel(unsigned int c) { channel = c; }
	void setVolume(unsigned int v) { volume = v; }
	void setMode(string m) { mode = m; }
	void setInput(string i) { input = i; }
	bool getState() { return state; }
	unsigned int getChannel() { return channel; }
	unsigned int getMaxChannel() { return max_channel; }
	unsigned int getVolume() { return volume; }
	unsigned int getMaxVolume() { return max_volume; }
	string getMode() { return mode; }
	string getInput() { return input; }
	friend class Remote;

};

unsigned int Television::channel = 1;
unsigned int Television::volume = 0;

class Remote {
public:
	void TvOn(Television t) {
		t.state = 1;
	}
	void Tvoff(Television t) {
		t.state = 0;
	}
	void changeMode(Television t) {
		string temp;
		cout << "\nEnter mode of television(Cable/Antenna): ";
		cin.ignore();
		getline(cin, temp);
		t.setMode(temp);
	}
	void changeInput(Television t) {
		string temp;
		cout << "\nEnter input election of television(TV/AV/VCR): ";
		cin.ignore();
		getline(cin, temp);
		t.setInput(temp);
	}
	void changeChannel(Television t) {
		cout << "\nEnter channel number between 0-" << t.max_channel<< ": ";
		cin >> t.channel;
	}
	void channelUp(Television t) {
		if (t.channel++ < t.max_channel)
			t.channel++;
		else if (t.channel++ > t.max_channel)
			t.channel = 1;
	}
	void channelDown(Television t) {
		if (t.channel-- > 1)
			t.channel--;
		else if (t.channel-- < 1)
			t.channel = t.max_channel;
	}
	void volumeUp(Television t) {
		if (t.volume == t.max_volume) {
			cout << "\nMax volume reached.";
		}
		else if (t.volume++ <= t.max_volume)
			t.volume++;
	}
	void volumedown(Television t) {
		if (t.volume == 0) {
			cout << "\nMinimum volume reached.";
		}
		else if (t.volume-- > 0)
			t.volume--;
	}
	void displaySettings(Television t) {
		cout << "\nState of television is: ";
		if (t.state = 0)
			cout << "OFF";
		else cout << "ON";
		cout << "\nMode: " << t.getMode();
		cout << "\nInput: " << t.getInput();
		cout << "\nChannel number: " << t.channel;
		cout << "\nVolume: " << t.volume;
	}
};


int main() {
	Television t;
	Remote r;
	int choiceMain = 0, choiceChannel = 0, choiceVolume = 0;
	string temp;
	do {
		cout << "\nEnter 1 to turn on TV";
		cout << "\nEnter 2 to turn off TV";
		cout << "\nEnter 3 to change mode";
		cout << "\nEnter 4 to change input selection";
		cout << "\nEnter 5 to change channel settings";
		cout << "\nEnter 6 to change volume settings";
		cout << "\nEnter 7 to display the current television settings";
		cout << "\nEnter 0 to exit menu for current television\n";
		cin >> choiceMain;
		switch (choiceMain){
		case 1:
			r.TvOn(t);
			break;
		case 2:
			r.Tvoff(t);
			break;
		case 3:
			//r.changeMode(t);
			cout << "\nEnter mode of television(Cable/Antenna): ";
			cin.ignore();
			getline(cin, temp);
			t.setMode(temp);
			break;
		case 4: 
			//r.changeInput(t);
			cout << "\nEnter input election of television(TV/AV/VCR): ";
			cin.ignore();
			getline(cin, temp);
			t.setInput(temp);
			break;
		case 5:
			do {
				cout << "\nEnter 1 to change channel";
				cout << "\nEnter 2 to go to next channel";
				cout << "\nEnter 3 to go to previous channel";
				cout << "\nEnter 0 to go back to menu\n";
				cin >> choiceChannel;
				switch (choiceChannel) {
				case 1:
					r.changeChannel(t);
					break;
				case 2:
					r.channelUp(t);
					break;
				case 3:
					r.channelDown(t);
					break;
				}
			} while (choiceChannel != 0);
			break;
		case 6:
			do {
				cout << "\nEnter 1 to increase volume";
				cout << "\nEnter 2 to decrease volume";
				cout << "\nEnter 0 to go back to menu\n";
				cin >> choiceVolume;
				switch (choiceVolume) {
				case 1:
					r.volumeUp(t);
					break;
				case 2:
					r.volumedown(t);
					break;
				}
			} while (choiceVolume != 0);
			break;
		case 7:
			r.displaySettings(t);
		}

	} while (choiceMain != 0);

	Television g = t;
	cout << "\n\n";
	r.changeChannel(g);
	r.channelDown(g);
	r.channelDown(g);
	r.displaySettings(g);
	Remote s = r;
	s.displaySettings(t);
	return 0;
}*/