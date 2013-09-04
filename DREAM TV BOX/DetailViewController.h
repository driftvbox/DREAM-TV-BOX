//
//  DetailViewController.h
//  DREAM TV BOX
//
//  Created by Rachid Drif on 13-09-04.
//  Copyright (c) 2013 Rachid Drif. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
