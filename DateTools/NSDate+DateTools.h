// Copyright (C) 2014 by Matthew York
//
// Permission is hereby granted, free of charge, to any
// person obtaining a copy of this software and
// associated documentation files (the "Software"), to
// deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge,
// publish, distribute, sublicense, and/or sell copies of the
// Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall
// be included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
// BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
// ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>
#import "DTConstants.h"

@interface NSDate (DateTools)

#pragma mark - Time Ago
+ (NSString*)timeAgoSinceDate:(NSDate*)date;
+ (NSString*)shortTimeAgoSinceDate:(NSDate*)date;
- (NSString*)timeAgoSinceNow;
-(NSString *)shortTimeAgoSinceNow;

#pragma mark - Date Components Without Calendar
- (NSInteger)era;
- (NSInteger)year;
- (NSInteger)month;
- (NSInteger)day;
- (NSInteger)hour;
- (NSInteger)minute;
- (NSInteger)second;
- (NSInteger)weekday;
- (NSInteger)weekdayOrdinal;
- (NSInteger)quarter;
- (NSInteger)weekOfMonth;
- (NSInteger)weekOfYear;
- (NSInteger)yearForWeekOfYear;
- (NSInteger)daysInMonth;
- (NSInteger)dayOfYear;
-(NSInteger)daysInYear;
-(BOOL)isInLeapYear;


#pragma mark - Date Components With Calendar
- (NSInteger)eraWithCalendar:(NSCalendar *)calendar;
- (NSInteger)yearWithCalendar:(NSCalendar *)calendar;
- (NSInteger)monthWithCalendar:(NSCalendar *)calendar;
- (NSInteger)dayWithCalendar:(NSCalendar *)calendar;
- (NSInteger)hourWithCalendar:(NSCalendar *)calendar;
- (NSInteger)minuteWithCalendar:(NSCalendar *)calendar;
- (NSInteger)secondWithCalendar:(NSCalendar *)calendar;
- (NSInteger)weekdayWithCalendar:(NSCalendar *)calendar;
- (NSInteger)weekdayOrdinalWithCalendar:(NSCalendar *)calendar;
- (NSInteger)quarterWithCalendar:(NSCalendar *)calendar;
- (NSInteger)weekOfMonthWithCalendar:(NSCalendar *)calendar;
- (NSInteger)weekOfYearWithCalendar:(NSCalendar *)calendar;
- (NSInteger)yearForWeekOfYearWithCalendar:(NSCalendar *)calendar;

#pragma mark - Date Editing
#pragma mark Date By Adding
- (NSDate *)dateByAddingYears:(NSInteger)years;
- (NSDate *)dateByAddingMonths:(NSInteger)months;
- (NSDate *)dateByAddingWeeks:(NSInteger)weeks;
- (NSDate *)dateByAddingDays:(NSInteger)days;
- (NSDate *)dateByAddingHours:(NSInteger)hours;
- (NSDate *)dateByAddingMinutes:(NSInteger)minutes;
- (NSDate *)dateByAddingSeconds:(NSInteger)seconds;
#pragma mark Date By Subtracting
- (NSDate *)dateBySubtractingYears:(NSInteger)years;
- (NSDate *)dateBySubtractingMonths:(NSInteger)months;
- (NSDate *)dateBySubtractingWeeks:(NSInteger)weeks;
- (NSDate *)dateBySubtractingDays:(NSInteger)days;
- (NSDate *)dateBySubtractingHours:(NSInteger)hours;
- (NSDate *)dateBySubtractingMinutes:(NSInteger)minutes;
- (NSDate *)dateBySubtractingSeconds:(NSInteger)seconds;

#pragma mark - Date Comparison
#pragma mark Time From
-(double)yearsFrom:(NSDate *)date;
-(double)monthsFrom:(NSDate *)date;
-(double)weeksFrom:(NSDate *)date;
-(double)daysFrom:(NSDate *)date;
-(double)hoursFrom:(NSDate *)date;
-(double)minutesFrom:(NSDate *)date;
-(double)secondsFrom:(NSDate *)date;
#pragma mark Time From With Calendar
-(double)yearsFrom:(NSDate *)date calendar:(NSCalendar *)calendar;
-(double)monthsFrom:(NSDate *)date calendar:(NSCalendar *)calendar;
-(double)weeksFrom:(NSDate *)date calendar:(NSCalendar *)calendar;
-(double)daysFrom:(NSDate *)date calendar:(NSCalendar *)calendar;

#pragma mark Time Until
-(double)yearsUntil;
-(double)monthsUntil;
-(double)weeksUntil;
-(double)daysUntil;
-(double)hoursUntil;
-(double)minutesUntil;
-(double)secondsUntil;
#pragma mark Time Ago
-(double)yearsAgo;
-(double)monthsAgo;
-(double)weeksAgo;
-(double)daysAgo;
-(double)hoursAgo;
-(double)minutesAgo;
-(double)secondsAgo;
#pragma mark Earlier Than
-(double)yearsEarlierThan:(NSDate *)date;
-(double)monthsEarlierThan:(NSDate *)date;
-(double)weeksEarlierThan:(NSDate *)date;
-(double)daysEarlierThan:(NSDate *)date;
-(double)hoursEarlierThan:(NSDate *)date;
-(double)minutesEarlierThan:(NSDate *)date;
-(double)secondsEarlierThan:(NSDate *)date;
#pragma mark Later Than
-(double)yearsLaterThan:(NSDate *)date;
-(double)monthsLaterThan:(NSDate *)date;
-(double)weeksLaterThan:(NSDate *)date;
-(double)daysLaterThan:(NSDate *)date;
-(double)hoursLaterThan:(NSDate *)date;
-(double)minutesLaterThan:(NSDate *)date;
-(double)secondsLaterThan:(NSDate *)date;
#pragma mark Comparators
-(BOOL)isEarlierThan:(NSDate *)date;
-(BOOL)isLaterThan:(NSDate *)date;
-(BOOL)isEarlierThanOrEqualToDate:(NSDate *)date;
-(BOOL)isLaterThanOrEqualToDate:(NSDate *)date;

#pragma mark - Formatted Dates
#pragma mark Formatted With Style
-(NSString *)formattedDateWithStyle:(NSDateFormatterStyle)style;
-(NSString *)formattedDateWithStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone;
-(NSString *)formattedDateWithStyle:(NSDateFormatterStyle)style locale:(NSLocale *)locale;
-(NSString *)formattedDateWithStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone locale:(NSLocale *)locale;
#pragma mark Formatted With Format
-(NSString *)formattedDateWithFormat:(NSString *)format;
-(NSString *)formattedDateWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone;
-(NSString *)formattedDateWithFormat:(NSString *)format locale:(NSLocale *)locale;
-(NSString *)formattedDateWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone locale:(NSLocale *)locale;

#pragma mark - Helpers
+(NSString *)defaultCalendar;
@end
