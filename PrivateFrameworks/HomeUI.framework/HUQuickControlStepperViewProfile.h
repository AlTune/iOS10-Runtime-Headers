/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlStepperViewProfile : HUQuickControlViewProfile {
    unsigned long long  _numberOfSegments;
    NSArray * _segmentTitles;
    bool  _showSegmentTitles;
    unsigned long long  _stepperBehavior;
}

@property (nonatomic) unsigned long long numberOfSegments;
@property (nonatomic, copy) NSArray *segmentTitles;
@property (nonatomic) bool showSegmentTitles;
@property (nonatomic) unsigned long long stepperBehavior;

- (void).cxx_destruct;
- (unsigned long long)numberOfSegments;
- (double)percentageValueForViewValue:(id)arg1;
- (id)segmentTitles;
- (void)setNumberOfSegments:(unsigned long long)arg1;
- (void)setSegmentTitles:(id)arg1;
- (void)setShowSegmentTitles:(bool)arg1;
- (void)setStepperBehavior:(unsigned long long)arg1;
- (bool)showSegmentTitles;
- (unsigned long long)stepperBehavior;
- (id)viewValueForPercentageValue:(double)arg1 round:(bool)arg2;

@end