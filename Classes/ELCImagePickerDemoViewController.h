//
//  ELCImagePickerDemoViewController.h
//  ELCImagePickerDemo
//
//  Created by Collin Ruffenach on 9/9/10.
//  Copyright 2010 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ELCImagePickerController.h"

@interface ELCImagePickerDemoViewController : UIViewController <ELCImagePickerControllerDelegate, UINavigationControllerDelegate, UIScrollViewDelegate> {

	IBOutlet UIScrollView *scrollview;
}

@property (nonatomic, strong) IBOutlet UIScrollView *scrollview;
@property (nonatomic, copy) NSArray *chosenImages;

// the default picker controller
-(IBAction)launchController;

// a special picker controller that limits itself to a single album, and lets the user
// pick just one image from that album.
-(IBAction)launchSpecialController;

@end

