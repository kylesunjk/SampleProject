//
//  MIAppDelegate.h
//  SampleProject
//
//  Created by Sun Jiakang on 8/9/14.
//  Copyright (c) 2014 Massive Inifinity. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MIAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end