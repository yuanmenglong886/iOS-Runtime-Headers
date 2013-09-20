/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSAttributedString, UIButton, UIImage, UIImageView, UILabel;

@interface PUFeedTextCell : PUFeedCell {
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UIButton *__button;
    UILabel *__detailLabel;
    UIImageView *__iconImageView;
    UILabel *__label;
    NSAttributedString *_attributedDetailText;
    NSAttributedString *_attributedText;
    int _buttonHorizontalAlignment;
    } _buttonOffset;
    float _buttonPadding;
    int _buttonSize;
    int _buttonType;
    } _contentInsets;
    UIImage *_iconImage;
    int _iconLocation;
    } _iconOffset;
    } _iconPadding;
    int _numberOfDetailTextLines;
    int _numberOfTextLines;
    BOOL _shouldUseOpaqueBackground;
    int _tappableArea;
    int _textAlignment;
    float _textDetailTextSpacing;
}

@property(setter=_setButton:,retain) UIButton * _button;
@property(setter=_setDetailLabel:,retain) UILabel * _detailLabel;
@property(setter=_setIconImageView:,retain) UIImageView * _iconImageView;
@property(setter=_setLabel:,retain) UILabel * _label;
@property(retain) NSAttributedString * attributedDetailText;
@property(retain) NSAttributedString * attributedText;
@property int buttonHorizontalAlignment;
@property struct UIOffset { float x1; float x2; } buttonOffset;
@property float buttonPadding;
@property int buttonSize;
@property int buttonType;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property(retain) UIImage * iconImage;
@property int iconLocation;
@property struct UIOffset { float x1; float x2; } iconOffset;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } iconPadding;
@property int numberOfDetailTextLines;
@property int numberOfTextLines;
@property BOOL shouldUseOpaqueBackground;
@property int tappableArea;
@property int textAlignment;
@property float textDetailTextSpacing;

- (void).cxx_destruct;
- (id)_button;
- (void)_configureButton:(id)arg1 withType:(int)arg2 size:(int)arg3 animated:(BOOL)arg4;
- (id)_delegate;
- (id)_detailLabel;
- (void)_handleButton:(id)arg1;
- (id)_iconImageView;
- (id)_label;
- (id)_labelBackgroundColor;
- (struct CGSize { float x1; float x2; })_maximumPossibleTextSizeForButtonWithType:(int)arg1 size:(int)arg2;
- (void)_setButton:(id)arg1;
- (void)_setDetailLabel:(id)arg1;
- (void)_setIconImageView:(id)arg1;
- (void)_setLabel:(id)arg1;
- (struct CGSize { float x1; float x2; })_textSizeForButtonWithType:(int)arg1 size:(int)arg2;
- (void)_updateButtonAnimated:(BOOL)arg1;
- (void)_updateDetailLabel;
- (void)_updateIconImageView;
- (void)_updateLabelsBackgroundColor;
- (id)attributedDetailText;
- (id)attributedText;
- (int)buttonHorizontalAlignment;
- (struct UIOffset { float x1; float x2; })buttonOffset;
- (float)buttonPadding;
- (int)buttonSize;
- (int)buttonType;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)iconImage;
- (int)iconLocation;
- (struct UIOffset { float x1; float x2; })iconOffset;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })iconPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)numberOfDetailTextLines;
- (int)numberOfTextLines;
- (void)setAttributedDetailText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setButtonHorizontalAlignment:(int)arg1;
- (void)setButtonOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setButtonPadding:(float)arg1;
- (void)setButtonSize:(int)arg1;
- (void)setButtonType:(int)arg1 animated:(BOOL)arg2;
- (void)setButtonType:(int)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconLocation:(int)arg1;
- (void)setIconOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setIconPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setNumberOfDetailTextLines:(int)arg1;
- (void)setNumberOfTextLines:(int)arg1;
- (void)setShouldUseOpaqueBackground:(BOOL)arg1;
- (void)setTappableArea:(int)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextDetailTextSpacing:(float)arg1;
- (BOOL)shouldRecognizerTap:(id)arg1;
- (BOOL)shouldUseOpaqueBackground;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)tappableArea;
- (int)textAlignment;
- (float)textDetailTextSpacing;

@end