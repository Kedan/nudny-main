#pragma once

namespace nudny {
	class Main {
		public:
			virtual bool exe() {
				while(isRunning()) {
					handleEvents();
					clear();
					update();
					display();
				}
			}
			virtual bool isRunning() = 0;
		protected:
			virtual void handleEvents() = 0;
			virtual void clear() = 0;
			virtual void display() = 0;
			virtual void update() = 0;
	} // class Main
} // namespace nudny

