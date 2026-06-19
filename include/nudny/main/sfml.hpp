#pragma once

#include <memory>
#include <SFML/Graphics.hpp>
#include <nudny/main.hpp>

namespace nudny::main {
	class SFML : public Main {
		public:
			std::unique_ptr<sf::RenderWindow> window;
			bool isRunning();
		protected:
			void handleEvents(); 
			void clear(); 
			void display();
			void update(); 
	}; // class MainSFML
}; // namespace nudny
