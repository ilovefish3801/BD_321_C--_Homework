#pragma once
#include "MediaPlayer.h"

class AudioPlayer : public MediaPlayer
{
private:
	int volume = 0;

public:
	void volumeUp() {
		int volume_;
		cout << "Volume value to increase: ";
		cin >> volume_;

		if (volume + volume_ <= 100) {
			this->volume += volume_;
		}
		else {
			this->volume = 100;
		};

		cout << "Volume: " << this->volume;
	};

	void volumeDown() {
		int volume_;
		cout << "Volume value to decrease: ";
		cin >> volume_;

		if (volume - volume_ >= 0) {
			this->volume -= volume_;
		}
		else {
			this->volume = 0;
		};

		cout << "Volume: " << this->volume;
	};
};

