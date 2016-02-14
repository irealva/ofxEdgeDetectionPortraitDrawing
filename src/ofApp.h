#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxCv.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp {
    
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    
    bool bLearnBackground;
    ofVideoGrabber  vidGrabber;
    ofxCvColorImage  colorImg;
    ofxCvGrayscaleImage  grayImage, grayBg, grayDiff;
    ofxCvContourFinder  contourFinder;
    
    ofImage edge ;
    ofxCvGrayscaleImage edgecanny ;
    
    ofxPanel gui;
    ofParameter<int> cannyParam1, cannyParam2, numcontours ;
    
    vector < ofPoint > facePoints;
    vector < ofPoint > drawnPoints;
    
    ofPolyline line;
    
    vector < ofPolyline > allLines;


};
