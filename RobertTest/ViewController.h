//
//  ViewController.h
//  RobertTest
//
//  Created by Vladut Alexandru on 11/18/14.
//  Copyright (c) 2014 jxee. All rights reserved.
//

#import <UIKit/UIKit.h>

#define URL_YOU_WANT @"http://time.jsontest.com"

@interface ViewController : UIViewController

- (IBAction)btnGetJSONPressed:(id)sender;


@property (weak, nonatomic) IBOutlet UITextView *textViewForResultString;

@property (nonatomic, strong) NSMutableData *responseData;

@end

