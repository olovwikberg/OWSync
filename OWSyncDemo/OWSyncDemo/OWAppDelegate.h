//
//  OWAppDelegate.h
//  OWSyncDemo
//
//  Created by Olov Vikberg on 2014-10-26.
//  Copyright (c) 2014 Olov Vikberg. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OWAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
