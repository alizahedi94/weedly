//
//  EELMenu.h
//  weedly
//
//  Created by 1debit on 5/5/14.
//  Copyright (c) 2014 Eric Lewis. All rights reserved.
//

@interface EELMenu : MTLModel <MTLJSONSerializing, MTLManagedObjectSerializing>

@property (copy, nonatomic, readonly) NSDate *lastUpdated;

@end
