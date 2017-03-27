#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
  ofBackground(0);
    ofSetBackgroundAuto(false);
    
    //create the particles
    num = 1000;
    
    for(int i =0; i < num; i++){
        
        Particle p;
        flockingParticles.push_back(p);
        flockingParticles[i].init();
        
    }
    
    city.load("city.jpg");
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
    ofPoint Mouse= ofPoint (mouseX, mouseY);
    
    cout << Mouse << endl;
    
    for(int i = 0; i < num; i++){
        
        flockingParticles[i].update(flockingParticles, Mouse);
        flockingParticles[i].bounding();
        
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
     city.draw(0,0);
    
    // ofBackground(0);
    ofSetColor(ofRandom(200),ofRandom(170),ofRandom(200),ofRandom(170));
    
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    for(int i = 0; i < num; i++){
        flockingParticles[i].draw();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
