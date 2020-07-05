//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPasteboardItemDataProvider-Protocol.h"

@class NSMapTable, NSString;

@interface MessageDragHelper : NSObject <NSPasteboardItemDataProvider>
{
    NSMapTable *_messagesByPasteboardItem;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010008b3d7
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001d6d6c
// - (void).cxx_destruct;	// IMP=0x00000001001d7f47
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;	// IMP=0x00000001001d736a
- (id)messagesTargetedByItems:(id)arg1;	// IMP=0x00000001001d719f
- (id)pasteboardWriterForMessages:(id)arg1;	// IMP=0x00000001001d6f86
- (void)dealloc;	// IMP=0x00000001001d6e98
- (id)init;	// IMP=0x00000001001d6e25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

