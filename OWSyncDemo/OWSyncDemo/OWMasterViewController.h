//
//  OWMasterViewController.h
//  OWSyncDemo
//
//  Created by Olov Vikberg on 2014-10-26.
//  Copyright (c) 2014 Olov Vikberg. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OWDetailViewController;

#import <CoreData/CoreData.h>

@interface OWMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) OWDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
