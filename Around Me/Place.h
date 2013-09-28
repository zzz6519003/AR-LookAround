//
//  Place.h
//  Around Me
//
//  Created by Snowmanzzz on 13-9-28.
//  Copyright (c) 2013年 Jean-Pierre Distler. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CLLocation;


@interface Place : NSObject

@property (nonatomic, strong) CLLocation *location;
@property (nonatomic, copy) NSString *reference;
@property (nonatomic, copy) NSString *placeName;
@property (nonatomic, copy) NSString *address;

- (id)initWithLocation:(CLLocation *)location reference:(NSString *)reference name:(NSString *)name address:(NSString *)address;

@end
