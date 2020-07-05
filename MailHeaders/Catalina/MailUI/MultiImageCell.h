//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImageCell.h>

@class NSMutableArray;

@interface MultiImageCell : NSImageCell
{
    NSMutableArray *_images;	// 24 = 0x18
    NSMutableArray *_subcells;	// 32 = 0x20
}

// - (void).cxx_destruct;	// IMP=0x0000000100245058
- (void)setImageScaling:(unsigned long long)arg1;	// IMP=0x0000000100244ef9
- (void)setImageAlignment:(unsigned long long)arg1;	// IMP=0x0000000100244ef3
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;	// IMP=0x0000000100244b5a
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;	// IMP=0x00000001002448a7
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x00000001002445ba
- (void)calcDrawInfo:(struct CGRect)arg1;	// IMP=0x0000000100244365
- (id)_firstImageName;	// IMP=0x00000001002442c4
- (long long)compare:(id)arg1;	// IMP=0x0000000100244164
- (id)stringValue;	// IMP=0x0000000100243f51
- (void)_addSubcellsWithImages:(id)arg1;	// IMP=0x0000000100243786
- (void)setObjectValue:(id)arg1;	// IMP=0x00000001002432e7
- (void)setEditable:(BOOL)arg1;	// IMP=0x00000001002432e1
- (BOOL)isEditable;	// IMP=0x00000001002432d9
- (void)setTitle:(id)arg1;	// IMP=0x00000001002432d3
- (void)setUserInterfaceLayoutDirection:(long long)arg1;	// IMP=0x0000000100243106
- (void)setCellAttribute:(unsigned long long)arg1 to:(long long)arg2;	// IMP=0x0000000100242f8b
- (void)setBackgroundStyle:(long long)arg1;	// IMP=0x0000000100242e2c
- (void)setUsesSingleLineMode:(BOOL)arg1;	// IMP=0x0000000100242ccd
- (void)setTruncatesLastVisibleLine:(BOOL)arg1;	// IMP=0x0000000100242b6e
- (void)setLineBreakMode:(unsigned long long)arg1;	// IMP=0x0000000100242a0f
- (void)setBaseWritingDirection:(long long)arg1;	// IMP=0x00000001002428b0
- (void)setControlSize:(unsigned long long)arg1;	// IMP=0x0000000100242751
- (void)setControlTint:(unsigned long long)arg1;	// IMP=0x00000001002425f2
- (void)setFont:(id)arg1;	// IMP=0x0000000100242570
- (void)setAlignment:(long long)arg1;	// IMP=0x0000000100242411
- (void)setHighlighted:(BOOL)arg1;	// IMP=0x00000001002422b2
- (void)setSelectable:(BOOL)arg1;	// IMP=0x0000000100242153
- (void)setEnabled:(BOOL)arg1;	// IMP=0x0000000100241ff4
- (void)setControlView:(id)arg1;	// IMP=0x0000000100241f72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100241ea2
- (void)_multiImageCellCommonInit;	// IMP=0x0000000100241dd5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100241d49
- (id)init;	// IMP=0x0000000100241cfd

@end

