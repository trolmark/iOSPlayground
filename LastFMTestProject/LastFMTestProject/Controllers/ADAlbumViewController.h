//
//  ADAlbumViewController.h
//  LastFMTestProject
//
//  Created by Andrew on 6/2/15.
//  Copyright (c) 2015 trolmark. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ADAlbumViewModel;
@interface ADAlbumViewController : UICollectionViewController

- (instancetype) initWithAlbumViewModel:(ADAlbumViewModel *) viewModel;

@end
