//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSStackView.h>

@class NSColor, NSMenu, NSPopUpButton, NSString, NSTextField;

@interface ComposeStatusView : NSStackView
{
    NSTextField *_messageSizeLabel;	// 112 = 0x70
    NSTextField *_messageSizeTextField;	// 120 = 0x78
    NSTextField *_imageSizePickerLabel;	// 128 = 0x80
    NSPopUpButton *_imageSizePickerPopup;	// 136 = 0x88
    NSTextField *_URLPickerLabel;	// 144 = 0x90
    NSPopUpButton *_URLPickerButton;	// 152 = 0x98
}

+ (id)keyPathsForValuesAffectingSelectedImageSize;	// IMP=0x00000001000ecf77
+ (id)keyPathsForValuesAffectingSelectedSharingDisplayType;	// IMP=0x00000001000ece99
+ (id)keyPathsForValuesAffectingMessageSizeColor;	// IMP=0x00000001000ecdb3
+ (id)keyPathsForValuesAffectingMessageSizeValue;	// IMP=0x00000001000eccd1
@property(retain, nonatomic) NSPopUpButton *URLPickerButton; // @synthesize URLPickerButton=_URLPickerButton;
@property(retain, nonatomic) NSTextField *URLPickerLabel; // @synthesize URLPickerLabel=_URLPickerLabel;
@property(retain, nonatomic) NSPopUpButton *imageSizePickerPopup; // @synthesize imageSizePickerPopup=_imageSizePickerPopup;
@property(retain, nonatomic) NSTextField *imageSizePickerLabel; // @synthesize imageSizePickerLabel=_imageSizePickerLabel;
@property(retain, nonatomic) NSTextField *messageSizeTextField; // @synthesize messageSizeTextField=_messageSizeTextField;
@property(retain, nonatomic) NSTextField *messageSizeLabel; // @synthesize messageSizeLabel=_messageSizeLabel;
// - (void).cxx_destruct;	// IMP=0x00000001000ed1d3
@property(readonly, nonatomic) __weak NSMenu *imageSizeMenu;
@property(readonly, nonatomic) __weak NSMenu *URLPickerMenu;
@property(nonatomic) long long selectedImageConversionOption;
@property(nonatomic) long long selectedSharingDisplayType;
@property(retain, nonatomic) NSColor *messageSizeColor;
@property(copy, nonatomic) NSString *messageSizeValue;
@property(nonatomic) BOOL showsMessageSizeLabel;
@property(nonatomic) BOOL showsImageSizePicker;
@property(nonatomic) BOOL showsURLPicker;
@property(readonly, nonatomic) BOOL canHideStatusBar;
- (void)awakeFromNib;	// IMP=0x00000001000ec84b

@end

