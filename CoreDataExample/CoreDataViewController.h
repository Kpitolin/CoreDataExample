//
//  CoreDataViewController.h
//  CoreDataExample
//
//  Created by Kevin on 09/06/2014.
//  Copyright (c) 2014 ___kevinPitolin___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface CoreDataViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *adressTextField;
@property (weak, nonatomic) IBOutlet UITextField *phoneTextField;
- (IBAction)save:(id)sender;
- (IBAction)find:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *status;

@end
