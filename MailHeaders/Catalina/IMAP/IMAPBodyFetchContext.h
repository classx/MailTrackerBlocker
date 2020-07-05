//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMAP/MCBodyFetchContext-Protocol.h>

@class IMAPTaskManager, NSSet, NSString;

@interface IMAPBodyFetchContext : NSObject <MCBodyFetchContext>
{
    NSSet *_messages;	// 8 = 0x8
    IMAPTaskManager *_taskManager;	// 16 = 0x10
}

@property(readonly, nonatomic) IMAPTaskManager *taskManager; // @synthesize taskManager=_taskManager;
- (void).cxx_destruct;	// IMP=0x000000000001994d
- (void)cacheBodiesForMessages:(id)arg1;	// IMP=0x00000000000195f5
- (id)init;	// IMP=0x0000000000019526
- (id)initWithTaskManager:(id)arg1;	// IMP=0x00000000000194bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

