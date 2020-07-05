//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ACAccount, NSNumber, NSOperationQueue, NSPopUpButton;

@interface AdvancedServerSettingsController : NSViewController
{
    BOOL _accountNeedsVerification;	// 16 = 0x10
    NSPopUpButton *_tlsCertificatesPopup;	// 24 = 0x18
    NSOperationQueue *_keychainQueue;	// 32 = 0x20
}

+ (id)keyPathsForValuesAffectingAccountAllowsInsecureAuthentication;	// IMP=0x00000001000aad65
@property(readonly, nonatomic) NSOperationQueue *keychainQueue; // @synthesize keychainQueue=_keychainQueue;
@property(nonatomic) __weak NSPopUpButton *tlsCertificatesPopup; // @synthesize tlsCertificatesPopup=_tlsCertificatesPopup;
@property(nonatomic) BOOL accountNeedsVerification; // @synthesize accountNeedsVerification=_accountNeedsVerification;
// - (void).cxx_destruct;	// IMP=0x00000001000aafa2
- (void)tlsCertificatesPopUpClicked:(id)arg1;	// IMP=0x00000001000aae73
@property(retain, nonatomic) NSNumber *accountAllowsInsecureAuthentication;
- (void)viewWillAppear;	// IMP=0x00000001000aaa3f
@property(retain) ACAccount *representedObject;
- (void)_serverSettingsControllerCommonInit;	// IMP=0x00000001000aa878
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000aa831
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000aa7c0

@end

