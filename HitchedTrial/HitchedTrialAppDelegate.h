//
//  HitchedTrialAppDelegate.h
//  HitchedTrial
//
//  Created by Simon Williams on 25/05/11.
//  Copyright 2011 Flinders University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HitchedTrialViewController;

@interface HitchedTrialAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet HitchedTrialViewController *viewController;

@end
