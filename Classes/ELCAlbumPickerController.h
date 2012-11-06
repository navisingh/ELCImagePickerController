//
//  AlbumPickerController.h
//
//  Created by Matt Tuzzolo on 2/15/11.
//  Copyright 2011 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import "ELCAssetSelectionDelegate.h"

@interface ELCAlbumPickerController : UITableViewController <ELCAssetSelectionDelegate> {
	
	NSMutableArray *assetGroups;
	NSOperationQueue *queue;
	id <ELCAssetSelectionDelegate> __weak parent;
    
    ALAssetsLibrary *library;
}

@property (nonatomic, weak) id parent;
@property (nonatomic, strong) NSMutableArray *assetGroups;

+ (ALAssetsLibrary *)defaultAssetsLibrary;

@end

