//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#import "___FILEBASENAME___.h"

USING_NS_CC;

Scene* ___FILEBASENAMEASIDENTIFIER___::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = ___FILEBASENAMEASIDENTIFIER___::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}


bool ___FILEBASENAMEASIDENTIFIER___::init()
{
    if(!Layer::init()){
        return false;
    }
    //init your layer here
    auto dirs = Director::getInstance();
    Size visibleSize = dirs->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    return true;
}


void ___FILEBASENAMEASIDENTIFIER___::onEnter()
{
    Layer::onEnter();
    
    auto listener = EventListenerTouchOneByOne::create();
    listener->setSwallowTouches(true);
    listener->onTouchBegan = CC_CALLBACK_2(___FILEBASENAMEASIDENTIFIER___::onTouchBegan, this);
    listener->onTouchMoved = CC_CALLBACK_2(___FILEBASENAMEASIDENTIFIER___::onTouchMoved, this);
    listener->onTouchEnded = CC_CALLBACK_2(___FILEBASENAMEASIDENTIFIER___::onTouchEnded, this);
    
    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
}

void ___FILEBASENAMEASIDENTIFIER___::update(float delta)
{
    Layer::update(delta);
}



bool ___FILEBASENAMEASIDENTIFIER___::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event)
{
    //touch start here
    return true;
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *unused_event)
{
    //touch moved here
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *unused_event)
{
    //touch ended here
}


@end

