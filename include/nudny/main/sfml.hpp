#pragma once

#include <memory>
#include <SFML/Graphics.hpp>
#include <nudny/main.hpp>

namespace nudny {
	class MainSFML : public Main {
		public:
			std::unique_ptr<sf::RenderWindow> window;
			bool isRunning() {
				return window.isOpen();
			}
		protected:
			void handleEvents() {
				while(const std::optional event = window.pollEvent()) {
					if(event->is<sf::Event::Closed>) {
						window.close();
					}
				}
			}
			void clear() {
				window.clear();
			}
			void display() {
				// draw all objects
				// then
				window.display();
			}
			void update() {
				// update all objects
			}
	}; // class MainSFML
}; // namespace nudny
