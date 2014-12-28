//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#ifndef _____PROJECTNAME________FILEBASENAMEASIDENTIFIER_____
#define _____PROJECTNAME________FILEBASENAMEASIDENTIFIER_____

#include <stdio.h>
#include "cocos2d.h"

class ___FILEBASENAMEASIDENTIFIER___: cocos2d::Layer{
    
    
public:
    
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    // onEnter
    virtual void onEnter();

    // update method
    virtual void update(float delta);

    // touch events
    virtual bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event);
    virtual void onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *event);
    virtual void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event);
    
    // implement the "static create()" method manually
    CREATE_FUNC(___FILEBASENAMEASIDENTIFIER___);
};


#endif /* defined(_____PROJECTNAME________FILEBASENAMEASIDENTIFIER_____) */
