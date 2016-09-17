//
//  AppDelegate.h
//  GitRest
//
//  Created by Uday Kiran on 17/09/16.
//  Copyright © 2016 Uday Kiran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

