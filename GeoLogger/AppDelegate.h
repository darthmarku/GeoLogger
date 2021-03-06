//
//  AppDelegate.h
//  GeoLogger
//
//  Created by Marco Cabazal on 02/21/2016.
//  Copyright © 2016 The Chill Mill, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Firebase;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSString *uid;
@property (strong, nonatomic) Firebase *firebase;

@end

