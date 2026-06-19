#include <nudny/main/sfml.hpp>

namespace nudny::main {
	bool SFLM::isRunning() { return window.isOpen(); }

	void SFML::handleEvents() {
		while(const std::optional event = window.pollEvent()) {
			if(event->is<sf::Event::Closed>) {
				window.close();
			}
		}
	}

	void SFML::clear() {
		window.clear();
	}

	void SFML::display() {
		// draw all objects
		// then
		window.display();
	}

	void SFML::update() {
		// update all objects
	}
	
}; // nudny main 
