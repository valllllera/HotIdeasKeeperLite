//
//  AppDelegate.h
//  HotIdeasKeeper
//
//  Created by iOS - Evgeniy Lipskiy on 16.04.13.
//  Copyright (c) 2013 iOS - Eugene Lipskiy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Chartboost.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, ChartboostDelegate>


@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) NSMutableArray *images;

@end
