//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MFIMAPAccount, NSPopUpButton;

@interface _SpecialMailboxPopUpButtonController : NSViewController
{
    int _specialMailboxType;	// 16 = 0x10
}

@property(nonatomic) int specialMailboxType; // @synthesize specialMailboxType=_specialMailboxType;
- (void)_updatePopUp;	// IMP=0x000000010017d762
@property(retain) MFIMAPAccount *representedObject;
- (void)viewDidDisappear;	// IMP=0x000000010017d564
- (void)_mailboxListingDidChange:(id)arg1;	// IMP=0x000000010017d46a
- (void)viewWillAppear;	// IMP=0x000000010017d3e1
@property(retain) NSPopUpButton *view;

@end

