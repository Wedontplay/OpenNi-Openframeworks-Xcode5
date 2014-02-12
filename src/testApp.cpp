#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
	printf("\r\n----------------- NiTE + Ofx User Tracker -------------------\r\n");
    status = openni::STATUS_OK;

    printf("OpenNI Version is %d.%d.%d.%d \n",
           OpenNI::getVersion().major,
           OpenNI::getVersion().minor,
           OpenNI::getVersion().maintenance,
           OpenNI::getVersion().build);
	
    
    printf("Initializing OpenNI ...\r\n");
	status = OpenNI::initialize();
    if (!handleStatus(status)) return 1;
    printf("Completed.\r\n");

	printf("\r\n---------------------- Open Device --------------------------\r\n");
	printf("Opening any device ...\r\n");
	Device device;
	status = device.open(ANY_DEVICE);
	if (!handleStatus(status)) return 1;
	printf("%s Opened, Completed.\r\n", device.getDeviceInfo().getName());
    OpenNI::shutdown();

    

}

//--------------------------------------------------------------
void testApp::update(){


}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}


/***********************************************************************
************************      METHODS     ******************************
***********************************************************************/

bool testApp::handleStatus(openni::Status status)
{
	if (status == nite::STATUS_OK) return true;
	printf("ERROR: #%d, %s", status, OpenNI::getExtendedError());
	readLastCharOfLine();
	return false;
}

char testApp::readLastCharOfLine()
{
	int newChar = 0;
	int lastChar;
	fflush(stdout);
	do
	{
		lastChar = newChar;
		newChar = getchar();
	}
	while ((newChar != '\n')
           && (newChar != EOF));
	return (char)lastChar;
}














