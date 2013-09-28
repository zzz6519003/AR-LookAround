//
//  MarkerView.h
//  Around Me
//
//  Created by Snowmanzzz on 13-9-29.
//  Copyright (c) 2013年 Jean-Pierre Distler. All rights reserved.
//

#import <UIKit/UIKit.h>

//1
@class ARGeoCoordinate;
@protocol MarkerViewDelegate;

@interface MarkerView : UIView

//2
@property (nonatomic, strong) ARGeoCoordinate *coordinate;
@property (nonatomic, weak) id <MarkerViewDelegate> delegate;

//3
- (id)initWithCoordinate:(ARGeoCoordinate *)coordinate delegate:(id<MarkerViewDelegate>)delegate;

@end

//4
@protocol MarkerViewDelegate <NSObject>

- (void)didTouchMarkerView:(MarkerView *)markerView;

@end
