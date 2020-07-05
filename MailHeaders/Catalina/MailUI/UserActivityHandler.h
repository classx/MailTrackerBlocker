//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class ComposeViewController, NSMutableData, NSOutputStream, NSString, NSTimer, SingleMessageViewer;

@interface UserActivityHandler : NSObject <NSStreamDelegate>
{
    BOOL _applicationHasFinishedLaunching;	// 8 = 0x8
    BOOL _draftDataComplete;	// 9 = 0x9
    NSString *_waitingForActivityOfType;	// 16 = 0x10
    SingleMessageViewer *_messageViewerFromHandoff;	// 24 = 0x18
    NSString *_messageURLString;	// 32 = 0x20
    NSTimer *_timeoutTimer;	// 40 = 0x28
    ComposeViewController *_composeController;	// 48 = 0x30
    unsigned long long _handoffDataLength;	// 56 = 0x38
    NSOutputStream *_handoffReplyStream;	// 64 = 0x40
    NSMutableData *_handoffDraftData;	// 72 = 0x48
}

+ (id)activityHandoffLog;	// IMP=0x00000001002ad04b
@property(nonatomic) BOOL draftDataComplete; // @synthesize draftDataComplete=_draftDataComplete;
@property(retain, nonatomic) NSMutableData *handoffDraftData; // @synthesize handoffDraftData=_handoffDraftData;
@property(retain, nonatomic) NSOutputStream *handoffReplyStream; // @synthesize handoffReplyStream=_handoffReplyStream;
@property(nonatomic) unsigned long long handoffDataLength; // @synthesize handoffDataLength=_handoffDataLength;
@property(retain, nonatomic) ComposeViewController *composeController; // @synthesize composeController=_composeController;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain) NSString *messageURLString; // @synthesize messageURLString=_messageURLString;
@property(retain, nonatomic) SingleMessageViewer *messageViewerFromHandoff; // @synthesize messageViewerFromHandoff=_messageViewerFromHandoff;
@property(retain, nonatomic) NSString *waitingForActivityOfType; // @synthesize waitingForActivityOfType=_waitingForActivityOfType;
@property(nonatomic) BOOL applicationHasFinishedLaunching; // @synthesize applicationHasFinishedLaunching=_applicationHasFinishedLaunching;
// - (void).cxx_destruct;	// IMP=0x00000001002ae97e
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x00000001002ae343
- (void)_timeout:(id)arg1;	// IMP=0x00000001002ae271
- (void)_libraryMessagesUpdated:(id)arg1;	// IMP=0x00000001002adf37
- (void)_populateDraftWindow;	// IMP=0x00000001002addca
- (void)_showHandoffMessage;	// IMP=0x00000001002ad9e2
- (void)_prepareWindowForActivity;	// IMP=0x00000001002ad8dc
- (void)didFailToHandoffUserActivityWithType:(id)arg1 error:(id)arg2;	// IMP=0x00000001002ad79e
- (BOOL)handoffUserActivity:(id)arg1 restorationHandler:(id)arg2;	// IMP=0x00000001002ad22e
- (BOOL)willHandoffUserActivityWithType:(id)arg1;	// IMP=0x00000001002ad1e8
- (void)_applicationDidFinishLaunching:(id)arg1;	// IMP=0x00000001002ad13c
- (id)init;	// IMP=0x00000001002ad0a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

