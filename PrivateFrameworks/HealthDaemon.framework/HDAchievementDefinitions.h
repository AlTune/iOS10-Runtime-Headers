/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDefinitions : NSObject {
    NSIndexSet * _lifetimeCompleteDayMilestones;
    NSLocale * _locale;
    NSIndexSet * _stepCountMilestones;
    NSArray * _supportedWorkoutActivityTypes;
}

@property (nonatomic, retain) NSIndexSet *lifetimeCompleteDayMilestones;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) NSIndexSet *stepCountMilestones;
@property (nonatomic, retain) NSArray *supportedWorkoutActivityTypes;

- (void).cxx_destruct;
- (id)_locale;
- (bool)canHaveMultipleAchievementsForStepCount:(unsigned long long)arg1;
- (id)lifetimeCompleteDayMilestones;
- (id)locale;
- (unsigned long long)minimumDaysOfHistoryForBestBriskMinutesAchievement;
- (unsigned long long)minimumDaysOfHistoryForBestDailyCaloriesAchievement;
- (double)minimumDurationFor7WorkoutsInWeekAchievement;
- (double)minimumDurationForFirstWorkoutOfTypeAchievement;
- (void)setLifetimeCompleteDayMilestones:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setStepCountMilestones:(id)arg1;
- (void)setSupportedWorkoutActivityTypes:(id)arg1;
- (id)stepCountMilestones;
- (id)supportedWorkoutActivityTypes;
- (unsigned long long)totalWorkoutCountRequiredForBestWorkoutAchievements;

@end
