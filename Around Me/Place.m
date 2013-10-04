//
//  Place.m
//  Around Me
//
//  Created by Snowmanzzz on 13-9-28.
//  Copyright (c) 2013年 Jean-Pierre Distler. All rights reserved.
//

#import "Place.h"


@implementation Place

- (id)initWithLocation:(CLLocation *)location reference:(NSString *)reference name:(NSString *)name address:(NSString *)address {
	if((self = [super init])) {
		_location = location;
		_reference = reference;
		_placeName = name;
		_address = address;
	}
	return self;
}

- (NSString *)infoText {
	return [NSString stringWithFormat:@"Name:%@\nAddress:%@\nPhone:%@\nWeb:%@", _placeName, _address, _phoneNumber, _website];
}

@end
