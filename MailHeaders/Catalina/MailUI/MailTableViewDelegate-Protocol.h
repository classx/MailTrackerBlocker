//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSTableViewDelegate-Protocol.h"

@class MailTableView, NSArray, NSDraggingSession, NSEvent, NSImage, NSIndexSet, NSMenu, NSString, NSTableColumn, NSWindow;
@protocol NSServicesMenuRequestor;

@protocol MailTableViewDelegate <NSTableViewDelegate>

@optional
- (double)floatingHeaderHeight:(MailTableView *)arg1;
- (id <NSServicesMenuRequestor>)mailTableView:(MailTableView *)arg1 validRequestorForSendType:(NSString *)arg2 returnType:(NSString *)arg3;
- (void)recordMessageSelectionDuringSearch;
- (NSArray *)accessibilityRowHeaderUIElementsForMailTableView:(MailTableView *)arg1;
- (NSArray *)accessibilityUILinkedViewsForMailTableView:(MailTableView *)arg1;
- (void)prepareContentInRange:(struct _NSRange)arg1;
- (void)userDidScrollInTableView:(MailTableView *)arg1;
- (NSMenu *)tableViewGetDefaultMenu:(MailTableView *)arg1;
- (void)mailTableViewDidResignFirstResponder:(MailTableView *)arg1;
- (void)mailTableViewDidBecomeFirstResponder:(MailTableView *)arg1;
- (BOOL)mailTableView:(MailTableView *)arg1 shouldAddTableColumn:(NSTableColumn *)arg2;
- (BOOL)mailTableView:(MailTableView *)arg1 shouldRemoveTableColumn:(NSTableColumn *)arg2;
- (void)mailTableView:(MailTableView *)arg1 didMouseDown:(NSEvent *)arg2;
- (void)mailTableView:(MailTableView *)arg1 willMouseDown:(NSEvent *)arg2;
- (void)mailTableView:(MailTableView *)arg1 gotEvent:(NSEvent *)arg2;
- (void)mailTableViewDidEndLiveResize:(MailTableView *)arg1;
- (void)mailTableViewWillStartLiveResize:(MailTableView *)arg1;
- (void)mailTableViewDidMoveToWindow:(MailTableView *)arg1;
- (void)mailTableView:(MailTableView *)arg1 willMoveToWindow:(NSWindow *)arg2;
- (long long)mailTableView:(MailTableView *)arg1 shouldScrollRowToVisible:(long long)arg2;
- (BOOL)mailTableView:(MailTableView *)arg1 doCommandBySelector:(SEL)arg2;
- (void)mailTableViewDraggingSession:(NSDraggingSession *)arg1 movedTo:(struct CGPoint)arg2;
- (void)mailTableViewDragWillEnd:(MailTableView *)arg1 operation:(unsigned long long)arg2;
- (NSImage *)mailTableView:(MailTableView *)arg1 dragImageForRowsWithIndexes:(NSIndexSet *)arg2 event:(NSEvent *)arg3 dragImageOffset:(struct CGPoint *)arg4;
@end

