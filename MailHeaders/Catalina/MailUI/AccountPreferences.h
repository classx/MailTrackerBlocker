//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "ACUIAccountsTableViewControllerDelegate-Protocol.h"
#import "NSTabViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "TerminationHandler-Protocol.h"

@class ACUIAccountsTableViewController, EWSIMAPAccountInformationController, EWSMailboxBehaviorsController, EWSServerSettingsController, IMAPMailboxBehaviorsController, IMAPPOPServerSettingsController, NSButton, NSSegmentedControl, NSString, NSTabViewController, NSView, NoEmailChildAccountInformationController, POPAccountInformationController, POPMailboxBehaviorsController, ParentAccountServerSettingsController;
@protocol NSTabViewDelegate;

@interface AccountPreferences : NSViewController <ACUIAccountsTableViewControllerDelegate, TerminationHandler, NSWindowDelegate, NSTabViewDelegate>
{
    NSView *_accountsTableContainer;	// 16 = 0x10
    ACUIAccountsTableViewController *_accountsTableController;	// 24 = 0x18
    NSSegmentedControl *_addRemoveAccountControl;	// 32 = 0x20
    NSTabViewController *_accountDetailController;	// 40 = 0x28
    EWSIMAPAccountInformationController *_ewsImapAccountInformationController;	// 48 = 0x30
    POPAccountInformationController *_popAccountInformationController;	// 56 = 0x38
    NoEmailChildAccountInformationController *_noEmailChildAccountInformationController;	// 64 = 0x40
    EWSMailboxBehaviorsController *_ewsMailboxBehaviorsController;	// 72 = 0x48
    IMAPMailboxBehaviorsController *_imapMailboxBehaviorsController;	// 80 = 0x50
    POPMailboxBehaviorsController *_popMailboxBehaviorsController;	// 88 = 0x58
    EWSServerSettingsController *_ewsServerSettingsController;	// 96 = 0x60
    IMAPPOPServerSettingsController *_imapPopServerSettingsController;	// 104 = 0x68
    ParentAccountServerSettingsController *_parentAccountServerSettingsController;	// 112 = 0x70
    id <NSTabViewDelegate> _existingTabViewDelegate;	// 120 = 0x78
    NSButton *_helpButton;	// 128 = 0x80
}

@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak id <NSTabViewDelegate> existingTabViewDelegate; // @synthesize existingTabViewDelegate=_existingTabViewDelegate;
@property(retain, nonatomic) ParentAccountServerSettingsController *parentAccountServerSettingsController; // @synthesize parentAccountServerSettingsController=_parentAccountServerSettingsController;
@property(retain, nonatomic) IMAPPOPServerSettingsController *imapPopServerSettingsController; // @synthesize imapPopServerSettingsController=_imapPopServerSettingsController;
@property(retain, nonatomic) EWSServerSettingsController *ewsServerSettingsController; // @synthesize ewsServerSettingsController=_ewsServerSettingsController;
@property(retain, nonatomic) POPMailboxBehaviorsController *popMailboxBehaviorsController; // @synthesize popMailboxBehaviorsController=_popMailboxBehaviorsController;
@property(retain, nonatomic) IMAPMailboxBehaviorsController *imapMailboxBehaviorsController; // @synthesize imapMailboxBehaviorsController=_imapMailboxBehaviorsController;
@property(retain, nonatomic) EWSMailboxBehaviorsController *ewsMailboxBehaviorsController; // @synthesize ewsMailboxBehaviorsController=_ewsMailboxBehaviorsController;
@property(retain, nonatomic) NoEmailChildAccountInformationController *noEmailChildAccountInformationController; // @synthesize noEmailChildAccountInformationController=_noEmailChildAccountInformationController;
@property(retain, nonatomic) POPAccountInformationController *popAccountInformationController; // @synthesize popAccountInformationController=_popAccountInformationController;
@property(retain, nonatomic) EWSIMAPAccountInformationController *ewsImapAccountInformationController; // @synthesize ewsImapAccountInformationController=_ewsImapAccountInformationController;
@property(retain, nonatomic) NSTabViewController *accountDetailController; // @synthesize accountDetailController=_accountDetailController;
@property(nonatomic) __weak NSSegmentedControl *addRemoveAccountControl; // @synthesize addRemoveAccountControl=_addRemoveAccountControl;
@property(retain, nonatomic) ACUIAccountsTableViewController *accountsTableController; // @synthesize accountsTableController=_accountsTableController;
@property(nonatomic) __weak NSView *accountsTableContainer; // @synthesize accountsTableContainer=_accountsTableContainer;
// - (void).cxx_destruct;	// IMP=0x00000001000a4a03
- (void)_performPostVerifyAction:(long long)arg1 shouldDeselectAccount:(BOOL)arg2 proposedToolbarIdentifier:(id)arg3;	// IMP=0x00000001000a43bb
- (id)_preferencesTabController;	// IMP=0x00000001000a430e
- (BOOL)_shouldDeselectAccountWithPostVerifyAction:(long long)arg1;	// IMP=0x00000001000a39e5
- (void)_saveAccount;	// IMP=0x00000001000a35c8
- (void)_outgoingAccountNeedsVerificationDidChange:(BOOL)arg1;	// IMP=0x00000001000a352c
- (void)_accountNeedsVerificationDidChange:(BOOL)arg1;	// IMP=0x00000001000a3428
- (void)_accountNeedsSavingDidChange:(BOOL)arg1;	// IMP=0x00000001000a33c8
- (void)_addRemoveAccountClick:(id)arg1;	// IMP=0x00000001000a2c7c
- (void)_selectedTabViewItemDidChange:(long long)arg1;	// IMP=0x00000001000a2bcc
- (void)focusAccount:(id)arg1;	// IMP=0x00000001000a2b5a
- (id)subTitleOverrideForAccount:(id)arg1;	// IMP=0x00000001000a292d
- (void)didRefreshAccounts;	// IMP=0x00000001000a2859
- (void)didSelectAccount:(id)arg1;	// IMP=0x00000001000a2127
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;	// IMP=0x00000001000937bf
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000a1e93
- (void)dealloc;	// IMP=0x00000001000a1caf
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;	// IMP=0x00000001000a1b7e
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;	// IMP=0x00000001000a1a68
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;	// IMP=0x00000001000a196b
- (BOOL)windowShouldClose:(id)arg1;	// IMP=0x00000001000a1954
- (void)viewWillDisappear;	// IMP=0x00000001000a1850
- (void)viewDidAppear;	// IMP=0x00000001000a16ee
- (void)viewDidLoad;	// IMP=0x00000001000a0dcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

