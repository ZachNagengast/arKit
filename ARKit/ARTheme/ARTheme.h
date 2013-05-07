//
//  ARTheme.h
//  ARKit
//
//  Created by Brian Bal on 4/26/13.
//  Copyright (c) 2013 AlpineReplay. All rights reserved.
//

#import "ARKit.h"

@interface ARTheme : NSObject

@property (nonatomic, strong) NSDictionary *styles;
@property (nonatomic, strong) NSDictionary *colors;
@property (nonatomic, strong) NSDictionary *fonts;
@property (nonatomic, strong) NSDictionary *images;
@property (nonatomic, strong) NSDictionary *strings;

+ (void)setupWithThemePath:(NSString *)path;
+ (id)sharedTheme;

#pragma mark - Colors
- (UIColor *)colorFromStyle:(NSObject *)style;

#pragma mark - Fonts
- (UIFont *)fontFromStyle:(NSObject *)style;

#pragma mark - Text Attributes
- (NSDictionary *)textAttributesFromStyle:(NSDictionary *)attrs;
- (NSTextAlignment)textAlignmentFromStyle:(NSString *)style;

#pragma mark - Images
- (UIImage *)imageFromStyle:(NSString *)style;
+ (UIImage *)imageWithColor:(UIColor *)color;
+ (UIImage *)imageWithColor:(UIColor *)color cornerRadius:(CGFloat)radius;

@end