//
//  ViewController.h
//  HelloApp
//
//  Created by Demo on 7/31/12.
//  Copyright (c) 2012 Demo. All rights reserved.
//

//Testing out branches

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
//change
@property (weak, nonatomic) IBOutlet UILabel *helloLabel;
@property (weak, nonatomic) IBOutlet UITextField *helloTextField;
- (IBAction)helloButtonPressed:(UIButton *)sender;

@end
