#pragma once

#include "ofMain.h"

class Projector {
	
public:
    
    void init(int i);
    void setup();
    
    void loadXML(ofXml &xml);
    void saveXML(ofXml &xml);
    
    void cameraBegin();
    void cameraEnd();
    
    void fboBegin();
    void fboEnd();
    
    void fboBind();
    void fboUnbind();
    
    void draw();
    void drawWireframe();
    
    ofVec3f sphToCar(ofVec3f t);
    
    ofCamera camera;
    ofFbo fbo;
    ofTexture fboTexture;
    ofRectangle view;
    ofPlanePrimitive plane;
    
    int index;
    
    bool keyboard;

    string xmlPrefix;
    
    float width;
    float height;
    
    float azimuth;
    float elevation;
    float distance;
    
    float pan;
    float tilt;
    float roll;
    
    float fov;
    
    float lensOffsetX;
    float lensOffsetY;
   
    float brightness;
    float contrast;
    float saturation;
};

