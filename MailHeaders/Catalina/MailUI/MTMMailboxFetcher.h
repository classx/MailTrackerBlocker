//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTMMailbox, NSConditionLock, NSMutableArray;

@interface MTMMailboxFetcher : NSObject
{
    MTMMailbox *_processingMailbox;	// 8 = 0x8
    NSMutableArray *_inactiveMailboxes;	// 16 = 0x10
    NSConditionLock *_lock;	// 24 = 0x18
    MTMMailbox *_loadingMailbox;	// 32 = 0x20
    BOOL _threadLaunched;	// 40 = 0x28
}

+ (id)sharedFetcher;	// IMP=0x00000001002349b3
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002348fa
@property(nonatomic) BOOL threadLaunched; // @synthesize threadLaunched=_threadLaunched;
// - (void).cxx_destruct;	// IMP=0x0000000100235976
- (void)waitForActiveMailboxToBeLoadedWithTimeOut:(double)arg1;	// IMP=0x0000000100235852
- (BOOL)shouldContinueFetchingMailbox:(id)arg1;	// IMP=0x0000000100235762
- (void)_protectedSmartAddMailboxToInactiveMailboxes:(id)arg1;	// IMP=0x0000000100235542
- (void)stopFetchingInactiveMailbox:(id)arg1;	// IMP=0x00000001002354ce
- (void)startFetchingInactiveMailbox:(id)arg1;	// IMP=0x0000000100235389
- (void)stopFetchingMailbox:(id)arg1;	// IMP=0x000000010023532a
- (void)startFetchingMailbox:(id)arg1;	// IMP=0x0000000100234fbb
- (void)_workerThread;	// IMP=0x0000000100234d7c
- (void)_unlockAndNotify;	// IMP=0x0000000100234c01
- (void)_lockWhenThereIsWorkToDo;	// IMP=0x0000000100234be6
- (void)_lock;	// IMP=0x0000000100234bd0
- (void)dealloc;	// IMP=0x0000000100234b00
- (id)init;	// IMP=0x0000000100234a6c

@end

