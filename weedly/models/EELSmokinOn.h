//
//  EELSmokinOn.h
//  weedly
//
//  Created by Eric Lewis on 5/3/14.
//  Copyright (c) 2014 Eric Lewis. All rights reserved.
//

@interface EELSmokinOn : MTLModel <MTLJSONSerializing, MTLManagedObjectSerializing>

@property (copy, nonatomic, readonly) NSNumber *id;
@property (copy, nonatomic, readonly) NSString *status;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *timeAgo;
@property (copy, nonatomic, readonly) NSURL    *photo;

@end
