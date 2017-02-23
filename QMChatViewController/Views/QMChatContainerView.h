//
//  QMChatContainerView.h
//  QMChatViewController
//
//  Created by Andrey Ivanov on 14.05.15.
//  Copyright (c) 2015 QuickBlox Team. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  Customisable chat container view.
 */
@interface QMChatContainerView : UIView

@property (strong, nonatomic) UIColor *bgColor;
@property (strong, nonatomic) UIColor *highlightColor;
@property (assign, nonatomic) CGFloat cornerRadius;
@property (assign, nonatomic) BOOL arrow;
@property (assign, nonatomic) BOOL leftArrow;
@property (assign, nonatomic) CGSize arrowSize;

@property (assign, nonatomic) BOOL highlighted;

@end
