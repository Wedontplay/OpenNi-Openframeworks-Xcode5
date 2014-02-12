#pragma once

#include "ofMain.h"
#include "OpenNI.h"
#include "NiTE.h"

using namespace openni;

class testApp : public ofBaseApp{
    
	public:
    
        //Methods
        void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    private:

        //Variables
        openni::Status status;
        nite::UserTracker userTracker;

        //Methods
        bool handleStatus(openni::Status status);
        char readLastCharOfLine();

    
		
};
