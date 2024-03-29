//
//  IntroAppDelegate.h
//  TestCoreDataApp
//
//  Created by Eranjan Punchihewa on 11/9/12.
//  Copyright (c) 2012 Eranjan Punchihewa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IntroAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
