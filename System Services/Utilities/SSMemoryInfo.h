//
//  SSMemoryInfo.h
//  SystemServicesDemo
//
//  Created by Shmoopi LLC on 9/19/12.
//  Copyright (c) 2012 Shmoopi LLC. All rights reserved.
//

#import "SystemServicesConstants.h"

@interface SSMemoryInfo : NSObject

// Memory Information

// Total Memory
+ (double)totalMemory;

// Free Memory
+ (double)freeMemory:(BOOL)inPercent;

// Used Memory
+ (double)usedMemory:(BOOL)inPercent;

// Available Memory
+ (double)availableMemory:(BOOL)inPercent;

// Active Memory
+ (double)activeMemory:(BOOL)inPercent;

// Inactive Memory
+ (double)inactiveMemory:(BOOL)inPercent;

// Wired Memory
+ (double)wiredMemory:(BOOL)inPercent;

// Purgable Memory
+ (double)purgableMemory:(BOOL)inPercent;

@end
