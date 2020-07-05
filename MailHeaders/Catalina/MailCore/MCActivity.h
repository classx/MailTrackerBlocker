//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress;
@protocol MCActivityDelegate;

@interface MCActivity : NSObject
{
    BOOL _isFinished;	// 8 = 0x8
    id <MCActivityDelegate> _delegate;	// 16 = 0x10
    NSProgress *_progress;	// 24 = 0x18
    long long _qualityOfService;	// 32 = 0x20
}

@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <MCActivityDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;	// IMP=0x000000000003910b
- (void)cancel;	// IMP=0x000000000003909c
- (void)end;	// IMP=0x000000000003900c
- (void)resume;	// IMP=0x0000000000039006
- (void)suspend;	// IMP=0x0000000000039000
- (void)begin;	// IMP=0x0000000000038ffa
- (void)dealloc;	// IMP=0x0000000000038ebe
- (id)init;	// IMP=0x0000000000038e12

@end

