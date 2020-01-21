//
//  LSIPersonSearchTableViewController.h
//  Star Wars Search ObjC
//
//  Created by Spencer Curtis on 10/1/18.
//  Copyright © 2018 Lambda School. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LSIPersonController;

@interface LSIPersonSearchTableViewController : UITableViewController <UISearchBarDelegate>

// TODO: Create an array to store people, that the table view can load
@property NSArray *people;
@property LSIPersonController *personController;

@end
