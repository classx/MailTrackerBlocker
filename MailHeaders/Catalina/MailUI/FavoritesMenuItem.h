//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImage, NSImageView, NSLayoutConstraint;

@interface FavoritesMenuItem : NSTableCellView
{
    NSImageView *_menuStateImageView;	// 112 = 0x70
    NSImage *_image;	// 120 = 0x78
    NSImage *_alternateImage;	// 128 = 0x80
    long long _indentationLevel;	// 136 = 0x88
    NSLayoutConstraint *_indentConstraint;	// 144 = 0x90
}

@property(nonatomic) __weak NSLayoutConstraint *indentConstraint; // @synthesize indentConstraint=_indentConstraint;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(retain, nonatomic) NSImage *alternateImage; // @synthesize alternateImage=_alternateImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) __weak NSImageView *menuStateImageView; // @synthesize menuStateImageView=_menuStateImageView;
// - (void).cxx_destruct;	// IMP=0x0000000100160598
- (void)setState:(long long)arg1;	// IMP=0x000000010016048f
- (void)setBackgroundStyle:(long long)arg1;	// IMP=0x000000010016034a
@property(readonly, nonatomic) double preferredWidth;
- (void)updateConstraints;	// IMP=0x00000001001600ec
- (void)awakeFromNib;	// IMP=0x0000000100160048

@end
