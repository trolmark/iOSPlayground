//
//  ADAlbumCoverHeaderView.h
//  LastFMTestProject
//
//  Created by Andrew on 6/7/15.
//  Copyright (c) 2015 trolmark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADDataViewProtocol.h"

@interface ADCoverHeaderView : UIView <ADDataViewProtocol>

@property (nonatomic, strong,readonly) UIImageView *coverImageView;

@end
