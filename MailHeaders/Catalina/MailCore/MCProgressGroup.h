//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCDiscretionaryWorkScheduler, NSMutableDictionary, NSProgress;

@interface MCProgressGroup : NSObject
{
    MCDiscretionaryWorkScheduler *_workScheduler;	// 8 = 0x8
    NSMutableDictionary *_progressBySlice;	// 16 = 0x10
    NSProgress *_parent;	// 24 = 0x18
}

@property(readonly, nonatomic) __weak NSProgress *parent; // @synthesize parent=_parent;
// - (void).cxx_destruct;	// IMP=0x000000000008c5a1
- (void)completeAllProgress;	// IMP=0x000000000008c50f
- (void)modifyCompletedBy:(long long)arg1 forSlice:(long long)arg2;	// IMP=0x000000000008c43c
- (void)modifyTotalBy:(long long)arg1 forSlice:(long long)arg2;	// IMP=0x000000000008c22c
@property(retain, nonatomic) MCDiscretionaryWorkScheduler *workScheduler;
- (id)init;	// IMP=0x000000000008c074
- (id)initWithParent:(id)arg1;	// IMP=0x000000000008bfee

@end

