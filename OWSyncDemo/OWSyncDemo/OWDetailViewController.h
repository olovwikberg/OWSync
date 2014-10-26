//
//  OWDetailViewController.h
//  OWSyncDemo
//
//  Created by Olov Vikberg on 2014-10-26.
//  Copyright (c) 2014 Olov Vikberg. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OWDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
