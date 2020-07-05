//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MarkupViewController, NSButton, NSWindow;
@protocol MarkupDrawingControllerDelegate;

@interface MarkupDrawingController : NSObject
{
    MarkupViewController *_markupViewController;	// 8 = 0x8
    NSWindow *_markupWindow;	// 16 = 0x10
    NSButton *_cancelButton;	// 24 = 0x18
    NSButton *_doneButton;	// 32 = 0x20
    id <MarkupDrawingControllerDelegate> _delegate;	// 40 = 0x28
}

+ (id)log;	// IMP=0x00000001001d5c00
@property(nonatomic) __weak id <MarkupDrawingControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;	// IMP=0x00000001001d626d
- (void)saveDrawing:(id)arg1;	// IMP=0x00000001001d60a3
- (void)cancelDrawing:(id)arg1;	// IMP=0x00000001001d6055
- (BOOL)isDrawing;	// IMP=0x00000001001d603f
- (void)display;	// IMP=0x00000001001d6026
- (void)dealloc;	// IMP=0x00000001001d5fe4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001d5c8f
- (id)init;	// IMP=0x00000001001d5c5d

@end

