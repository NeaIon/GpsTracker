//
//  WSAppDelegate.h
//  GpsTracker
//
//  Created by Nick Fox on 1/1/14.
//  Copyright (c) 2014 Nick Fox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface WSAppDelegate : UIResponder <UIApplicationDelegate, CLLocationManagerDelegate>

@property (strong, nonatomic) UIWindow *window;

@end
