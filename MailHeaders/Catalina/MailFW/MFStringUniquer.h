//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface MFStringUniquer : NSObject
{
    NSMapTable *_stringsTable;	// 8 = 0x8
}

// - (void).cxx_destruct;	// IMP=0x0000000000228952
- (id)description;	// IMP=0x00000000002288f1
- (void)setUniquedString:(id)arg1 forIndex:(long long)arg2;	// IMP=0x00000000002288cf
- (id)copyUniquedStringForIndex:(long long)arg1;	// IMP=0x00000000002288a8
- (id)init;	// IMP=0x0000000000228838

@end
