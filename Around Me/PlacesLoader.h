//
//  PlacesLoader.h
//  Around Me
//
//  Created by Snowmanzzz on 13-9-26.
//  Copyright (c) 2013年 Jean-Pierre Distler. All rights reserved.
//

#import <Foundation/Foundation.h>

//1
@class CLLocation;

//2
typedef void (^SuccessHandler)(NSDictionary *responseDict);
typedef void (^ErrorHandler)(NSError *error);

@interface PlacesLoader : NSObject

//3
+ (PlacesLoader *)sharedInstance;

//4
- (void)loadPOIsForLocation:(CLLocation *)location radius:(int)radius successHandler:(SuccessHandler)handler errorHandler:(ErrorHandler)errorHandler;

@end
