//
//  DetailViewController.h
//  CoffeeKit
//
//  Created by Nguyen Ha Giang on 11/7/14.
//  Copyright (c) 2014 Nguyen Ha Giang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

