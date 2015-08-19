//
//  ECDualViewSwitcher.h
//  EvCal
//
//  Created by Tom on 8/16/15.
//  Copyright (c) 2015 spitzgoby LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ECDualViewSwitcher;
@protocol ECDualViewSwitcherDelegate <NSObject>

@optional

/**
 *  Informs the delegate that the dual view switcher's visible view was changed.
 *
 *  @param switcher The switcher that changed views.
 *  @param view     The new visible view.
 */
- (void)dualViewSwitcher:(nonnull ECDualViewSwitcher*)switcher didSwitchViewToVisible:(nullable UIView*)view;

@end

@interface ECDualViewSwitcher : UIView

//------------------------------------------------------------------------------
// @name Properties
//------------------------------------------------------------------------------

@property (nonatomic, weak) UIView* __nullable primaryView;
@property (nonatomic, weak) UIView* __nullable secondaryView;
@property (nonatomic, weak, readonly) UIView* __nullable visibleView;
@property (nonatomic, weak) IBOutlet UIButton* __nullable switchPickerButton;

//------------------------------------------------------------------------------
// @name Initializing
//------------------------------------------------------------------------------

/**
 *  Creates and returns a new view switcher with the given views. The primary 
 *  view is set as the visible view.
 *
 *  @param frame         The frame for the view switcher.
 *  @param primaryView   The primaryView for the view switcher, defaults to 
 *                       visible view.
 *  @param secondaryView The secondary view for the view switcher.
 *
 *  @return The newly created view switcher.
 */
- (nonnull instancetype)initWithFrame:(CGRect)frame primaryView:(nonnull UIView*)primaryView secondaryView:(nonnull UIView*)secondaryView;


//------------------------------------------------------------------------------
// @name Switching Views
//------------------------------------------------------------------------------

/**
 *  Switches the currently visible view with the switchers other view.
 *
 *  @param animated Determines whether the view transition should be animated.
 */
- (void)switchView:(BOOL)animated;

/**
 *  Switches to the primary view. If the primary view is already visible this 
 *  method has no effect.
 *
 *  @param animated Determines whether the view transition should be animated.
 */
- (void)switchToPrimaryView:(BOOL)animated;

/**
 *  Switches to the secondary view. If the primary view is already visible this
 *  method has no effect.
 *
 *  @param animated Determines whether the view transition should be animated.
 */
- (void)switchToSecondayView:(BOOL)animated;

@end
