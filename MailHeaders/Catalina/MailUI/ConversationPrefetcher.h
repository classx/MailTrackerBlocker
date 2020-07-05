//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class MessageListContentController, NSCache, NSString, NSTableView, NSTimer;

@interface ConversationPrefetcher : NSObject <NSCacheDelegate>
{
    MessageListContentController *_messageListContentController;	// 8 = 0x8
    NSTableView *_messagesTableView;	// 16 = 0x10
    NSCache *_prefetchedConversations;	// 24 = 0x18
    NSTimer *_prefetchTimer;	// 32 = 0x20
}

@property(retain, nonatomic) NSTimer *prefetchTimer; // @synthesize prefetchTimer=_prefetchTimer;
@property(retain, nonatomic) NSCache *prefetchedConversations; // @synthesize prefetchedConversations=_prefetchedConversations;
@property(retain, nonatomic) NSTableView *messagesTableView; // @synthesize messagesTableView=_messagesTableView;
@property(retain, nonatomic) MessageListContentController *messageListContentController; // @synthesize messageListContentController=_messageListContentController;
// - (void).cxx_destruct;	// IMP=0x0000000100114380
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x00000001001140b4
- (void)_prefetchVisibleConversations:(id)arg1;	// IMP=0x0000000100113996
- (id)cachedConversationForID:(long long)arg1;	// IMP=0x000000010011390f
- (void)_armTimerWithDelay:(double)arg1;	// IMP=0x0000000100113755
- (void)_tableViewScrolled:(id)arg1;	// IMP=0x000000010011373b
- (void)_messageListChanged:(id)arg1;	// IMP=0x0000000100113721
- (void)dealloc;	// IMP=0x000000010011369c
- (id)init;	// IMP=0x00000001001135cd
- (id)initWithMessageListContentController:(id)arg1 messagesTableView:(id)arg2;	// IMP=0x0000000100113443

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

