//
//  ATSurveys.h
//  ApptentiveSurveys
//
//  Created by Andrew Wooster on 11/4/11.
//  Copyright (c) 2011 Apptentive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATConnect.h"

extern NSString *const ATSurveyNewSurveyAvailableNotification;

@interface ATSurveys : NSObject
+ (BOOL)hasSurveyAvailable;
+ (void)checkForAvailableSurveys;
#if TARGET_OS_IPHONE
/*! 
 * Presents a survey controller in the window of the given view controller.
 */
+ (void)presentSurveyControllerFromViewController:(UIViewController *)viewController;
#endif
@end
