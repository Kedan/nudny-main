#pragma once

#include <string>

namespace nudny {
	class Main {
		public:
			Main() = default;
			Main(std::string t_title) : m_title{t_title} {}
			virtual int exe() {
				while(isRunning()) {
					handleEvents();
					clear();
					update();
					display();
				}
				return m_result;
			}
			virtual bool isRunning() = 0;
		protected:
			int m_result{0};
			std::string m_title{"App"};
			virtual void handleEvents() = 0;
			virtual void clear() = 0;
			virtual void display() = 0;
			virtual void update() = 0;
	};// class Main
}; // namespace nudny

