//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailFW/MCActivityTarget-Protocol.h>
#import <MailFW/MFActivityProgressUpdater-Protocol.h>

@class MCActivityAggregate, MCActivityMonitor, NSString;
@protocol MFPersistenceVersionUpgraderDelegate;

@interface MFPersistenceVersionUpgrader : NSObject <MCActivityTarget, MFActivityProgressUpdater>
{
    id <MFPersistenceVersionUpgraderDelegate> _delegate;	// 8 = 0x8
    MCActivityMonitor *_monitor;	// 16 = 0x10
    MCActivityAggregate *_activity;	// 24 = 0x18
}

+ (BOOL)upgradeSmartMailboxesInMigrationDirectory:(long long)arg1 withUpgrader:(id)arg2;	// IMP=0x00000000001d2fec
+ (BOOL)upgradeSyncedRulesInMigrationDirectory:(long long)arg1 withUpgrader:(id)arg2;	// IMP=0x00000000001d2cd7
+ (BOOL)upgradeUnsyncedRulesInMigrationDirectory:(long long)arg1 withUpgrader:(id)arg2;	// IMP=0x00000000001d29e4
+ (BOOL)renameMigrationDirectoryToFinalDirectory:(long long)arg1;	// IMP=0x00000000001d24a2
+ (BOOL)renameVersionDirectory:(long long)arg1 toMigrationDirectory:(long long)arg2;	// IMP=0x00000000001d2230
+ (id)log;	// IMP=0x00000000001d18b2
@property(retain, nonatomic) MCActivityAggregate *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) __weak id <MFPersistenceVersionUpgraderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;	// IMP=0x00000000001d333c
- (void)resetProgressItemsWithTotal:(unsigned long long)arg1 andStatusMessage:(id)arg2;	// IMP=0x00000000001d214f
- (void)incrementProgressIndicator;	// IMP=0x00000000001d20c5
- (void)setProgressItemTotal:(unsigned long long)arg1;	// IMP=0x00000000001d2079
- (void)run;	// IMP=0x00000000001d1934
@property(readonly) BOOL requiresVersionMigration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

