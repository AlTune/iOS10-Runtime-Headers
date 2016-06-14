/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5DiagnosticsTestResult : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _configuration;
    bool  _didPass;
    NSError * _error;
    NSDictionary * _info;
    bool  _result;
    double  _testCompleted;
    long long  _testID;
    double  _testStarted;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic) bool didPass;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSDictionary *info;
@property (nonatomic) bool result;
@property (nonatomic) double testCompleted;
@property (nonatomic) long long testID;
@property (nonatomic) double testStarted;
@property (nonatomic) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (id)configuration;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)didPass;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDiagnosticsTestResult:(id)arg1;
- (bool)result;
- (void)setConfiguration:(id)arg1;
- (void)setDidPass:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setResult:(bool)arg1;
- (void)setTestCompleted:(double)arg1;
- (void)setTestID:(long long)arg1;
- (void)setTestStarted:(double)arg1;
- (void)setUuid:(id)arg1;
- (double)testCompleted;
- (long long)testID;
- (double)testStarted;
- (id)uuid;

@end