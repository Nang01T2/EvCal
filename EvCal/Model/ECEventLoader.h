//
//  ECEventLoader.h
//  EvCal
//
//  Created by Tom on 5/17/15.
//  Copyright (c) 2015 spitzgoby LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ECEventLoaderAuthorizationStatusChangedNotification @"AuthorizationStatusChanged"
#define ECEventLoaderCalendarChangedNotification            @"CalendarChanged"

typedef NS_ENUM(NSUInteger, ECAuthorizationStatus) {
    ECAuthorizationStatusNotDetermined,
    ECAuthorizationStatusDenied,
    ECAuthorizationStatusAuthorized,
};

@interface ECEventLoader : NSObject


@property (nonatomic, readonly) ECAuthorizationStatus authorizationStatus;

//------------------------------------------------------------------------------
// @name Accessing shared instance
//------------------------------------------------------------------------------

/**
 *  Returns the shared instance of ECEventLoader
 */
+ (instancetype)sharedInstance;

//------------------------------------------------------------------------------
// @name Loading User Events
//------------------------------------------------------------------------------

/**
 *  Creates and returns an array of all of the user's events which fall within 
 *  a given date range.
 *
 *  @param startDate The start date of the range of user events to load.
 *  @param endDate   The end date of the range of user events to load.
 *
 *  @return An array (possibly empty) of EKEvents or nil if user has denied 
 *          calendar access.
 */
- (NSArray*)loadEventsFrom:(NSDate*)startDate to:(NSDate*)endDate;

/**
 *  Creates and returns an array of the user's events in the given calendar which
 *  fall within the given date range.
 *
 *  @param startDate The start date of the range of user events to load.
 *  @param endDate   The end date of the range of user events to load.
 *  @param calendars The calendars from which to load events. Passing nil
 *                   indicates that events from all calendars should be loaded.
 *
 *  @return An array (possibly empty) of EKEvents or nil if user had denied 
 *          calendar access.
 */
- (NSArray*)loadEventsFrom:(NSDate*)startDate to:(NSDate*)endDate in:(NSArray*)calendars;

@end
