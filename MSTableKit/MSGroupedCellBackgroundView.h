//
//  MSGroupedCellBackgroundView.h
//  MSTableKit
//
//  Created by Eric Horacek on 12/1/13.
//  Copyright 2012 Monospace Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MSGroupedCellBackgroundViewType) {
    MSGroupedCellBackgroundViewTypeTop,
    MSGroupedCellBackgroundViewTypeMiddle,
    MSGroupedCellBackgroundViewTypeBottom,
    MSGroupedCellBackgroundViewTypeSingle
};

@interface MSGroupedCellBackgroundView : UIView

@property(nonatomic, assign) CGFloat cornerRadius;
@property(nonatomic, assign) MSGroupedCellBackgroundViewType type;
@property(nonatomic, assign) BOOL backgroundColorGradientEnabled;
@property(nonatomic, assign) BOOL middleBottomUsesShadowColorForNormalInnerShadowColor;

- (void)setBorderColor:(UIColor *)borderColor forState:(UIControlState)state UI_APPEARANCE_SELECTOR;
- (void)setFillColor:(UIColor *)borderColor forState:(UIControlState)state UI_APPEARANCE_SELECTOR;
- (void)setShadowColor:(UIColor *)shadowColor forState:(UIControlState)state UI_APPEARANCE_SELECTOR;
- (void)setShadowOffset:(CGSize)shadowOffset forState:(UIControlState)state UI_APPEARANCE_SELECTOR;
- (void)setShadowBlur:(CGFloat)shadowBlur forState:(UIControlState)state UI_APPEARANCE_SELECTOR;
- (void)setInnerShadowColor:(UIColor *)shadowColor forState:(UIControlState)state UI_APPEARANCE_SELECTOR;
- (void)setInnerShadowOffset:(CGSize)shadowOffset forState:(UIControlState)state UI_APPEARANCE_SELECTOR;
- (void)setInnerShadowBlur:(CGFloat)shadowBlur forState:(UIControlState)state UI_APPEARANCE_SELECTOR;

- (UIColor *)borderColorForState:(UIControlState)state;
- (UIColor *)fillColorForState:(UIControlState)state;
- (UIColor *)shadowColorForState:(UIControlState)state;
- (CGSize)shadowOffsetForState:(UIControlState)state;
- (CGFloat)shadowBlurForState:(UIControlState)state;
- (UIColor *)innerShadowColorForState:(UIControlState)state;
- (CGSize)innerShadowOffsetForState:(UIControlState)state;
- (CGFloat)innerShadowBlurForState:(UIControlState)state;

@end