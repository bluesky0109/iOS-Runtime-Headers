/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLearnMoreButton : SXMaterialButton <SXVideoControlItem> {
    bool  hideable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAutoAppearance;

- (id)accessibilityElements;
- (id)accessibilityLabel;
- (void)hide:(bool)arg1 withAnimationCoordinator:(id)arg2;
- (bool)hideable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAccessibilityElement;
- (bool)isVisible;
- (void)setHighlighted:(bool)arg1;
- (bool)supportsAutoAppearance;

@end
