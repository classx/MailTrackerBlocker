//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BannerViewController.h"

@class NSButton, NSImageView, NSMutableArray, NSString, NSTextField;

@interface ParentBannerViewController : BannerViewController
{
    NSMutableArray *_requestedAddresses;	// 16 = 0x10
    BOOL _requestIsForSenders;	// 24 = 0x18
    NSImageView *_icon;	// 32 = 0x20
    NSTextField *_messageField;	// 40 = 0x28
    NSButton *_helpButton;	// 48 = 0x30
    NSButton *_respondButton;	// 56 = 0x38
    NSString *_childAddress;	// 64 = 0x40
    long long _permissionRequestState;	// 72 = 0x48
}

@property(nonatomic) long long permissionRequestState; // @synthesize permissionRequestState=_permissionRequestState;
@property(nonatomic) __weak NSString *childAddress; // @synthesize childAddress=_childAddress;
@property(nonatomic) BOOL requestIsForSenders; // @synthesize requestIsForSenders=_requestIsForSenders;
@property(nonatomic) __weak NSButton *respondButton; // @synthesize respondButton=_respondButton;
@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) __weak NSImageView *icon; // @synthesize icon=_icon;
// - (void).cxx_destruct;	// IMP=0x000000010024910d
- (void)rejectChildRequest:(id)arg1;	// IMP=0x0000000100248f6f
- (void)approveChildRequest:(id)arg1;	// IMP=0x0000000100248ec0
- (void)updateBannerContents;	// IMP=0x00000001002487c8
- (void)updateWantsDisplay;	// IMP=0x000000010003c67d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100248701
- (void)setRepresentedObject:(id)arg1;	// IMP=0x000000010003c594
- (void)dealloc;	// IMP=0x0000000100090d2b
- (void)_parentBannerViewControllerCommonInit;	// IMP=0x00000001002486c9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100248682
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100248611

@end
