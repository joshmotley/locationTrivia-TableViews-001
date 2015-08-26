//
//  FISTriviaTableViewController.h
//  locationTrivia-tableviews
//
//  Created by Joshua Motley on 8/25/15.
//  Copyright (c) 2015 Joe Burgess. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FISTrivia.h"

@interface FISTriviaTableViewController : UITableViewController

@property (strong, nonatomic) NSArray *trivia;
@property (nonatomic) NSInteger count;

@end
