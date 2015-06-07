//
//  ADArtistListFlowLayout.m
//  LastFMTestProject
//
//  Created by Andrey Denisov on 6/5/15.
//  Copyright (c) 2015 trolmark. All rights reserved.
//

#import "ADArtistListFlowLayout.h"

@implementation ADArtistListFlowLayout

-(instancetype)init {
    if (!(self = [super init])) return nil;
    
    self.itemSize = CGSizeMake(300, 80);
    self.minimumInteritemSpacing = 10;
    self.minimumLineSpacing = 5;
    self.sectionInset = UIEdgeInsetsMake(10, 10, 10, 10);
    
    return self;
}


@end