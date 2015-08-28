// NSDate+CupertinoYankee.h
//
// Copyright (c) 2012–2014 Mattt Thompson (http://mattt.me)
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

/**
 Additions to the `NSDate` class to perform common relative date calculations.
 
 @discussion All date calculations are based on `NSCalendar +currentCalendar`.
 */
@interface NSDate (CupertinoYankee)
///-----------------------------------------
/// @name Calculating a relative day
///-----------------------------------------

/**
*  Returns a new date with the same hour, second, and minute on the day following the receiver.
*/
- (NSDate*)tomorrow;

/**
 *  Returns a new date with the same hour, second, and minute on the day preceding the receiver.
 */
- (NSDate*)yesterday;

///------------------------------------------------------------------------------
/// @name Calculating Hours In A Day
///------------------------------------------------------------------------------

/**
 *  Returns an array of date objects with the first second of each hour in the same day as the receiver.
 */
- (NSArray*)hoursOfDay;

///------------------------------------------------------------------------------
/// @name Calculating Beginning / End of Minute
///------------------------------------------------------------------------------

/**
 *  Returns a new date with the first second of the minute of the receiver
 */
- (NSDate*)beginningOfMinute;

/**
 *  Returns a new date with the last second of the minute of the receiver
 */
- (NSDate*)endOfMinute;

///------------------------------------------------------------------------------
/// @name Calculating Beginning / End of Hour
///------------------------------------------------------------------------------

/**
 *  Returns a new date with the first second of the hour of the receiver
 */
- (NSDate*)beginningOfHour;

/**
 * Returns a new date with the last second of the hour of the receiver
 */
- (NSDate*)endOfHour;

/**
 * Returns a new date with the first second of the hour following the receiver's
 */
- (NSDate*)nextHour;

///-----------------------------------------
/// @name Calculating Beginning / End of Day
///-----------------------------------------

/**
 Returns a new date with first second of the day of the receiver.
 */
- (NSDate *)beginningOfDay;

/**
 Returns a new date with the last second of the day of the receiver.
 */
- (NSDate *)endOfDay;

///------------------------------------------
/// @name Calculating Beginning / End of Week
///------------------------------------------

/**
 Returns a new date with first second of the first weekday of the receiver, taking into account the current calendar's `firstWeekday` property.
 */
- (NSDate *)beginningOfWeek;

/**
 Returns a new date with last second of the last weekday of the receiver, taking into account the current calendar's `firstWeekday` property.
 */
- (NSDate *)endOfWeek;

///-------------------------------------------
/// @name Calculating Beginning / End of Month
///-------------------------------------------

/**
 Returns a new date with the first second of the first day of the month of the receiver.
 */
- (NSDate *)beginningOfMonth;

/**
 Returns a new date with the last second of the last day of the month of the receiver.
 */
- (NSDate *)endOfMonth;

///------------------------------------------
/// @name Calculating Beginning / End of Year
///------------------------------------------

/**
 Returns a new date with the first second of the first day of the year of the receiver.
 */
- (NSDate *)beginningOfYear;

/**
 Returns a new date with the last second of the last day of the year of the receiver.
 */
- (NSDate *)endOfYear;

///------------------------------------------------------------------------------
/// @name Calculating Nearest Incremental Time
///------------------------------------------------------------------------------

/**
 Returns a new date with the nearest five minute increment before or after the receiver.
 */
- (NSDate *)nearestFiveMinutes;


@end
