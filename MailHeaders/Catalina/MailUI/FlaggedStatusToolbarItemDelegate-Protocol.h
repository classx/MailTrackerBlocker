//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FlaggedStatusToolbarItem;

@protocol FlaggedStatusToolbarItemDelegate <NSObject>

@optional
- (void)toggleFlaggedStatus:(BOOL)arg1;
- (BOOL)validateFlaggedStatusToolbarItem:(FlaggedStatusToolbarItem *)arg1;
@end

