//
//  DetailViewController.h
//  todo
//
//  Created by qa on 10/8/14.
//  Copyright (c) 2014 qa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

