#include <iostream>

template<typename T>

class AUDS {

	public:
		// Constructor
		AUDS() {
			ourData = new T[initSize];
		}
		// Destructor
		~AUDS() {
			delete[] ourData;
		}

	private:
		int initSize = 100;
		int currentSize;
		T* ourData;

};
