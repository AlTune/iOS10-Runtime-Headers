/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTextCheckingKeyEvent : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _flags;
    NSString * _identifier;
    unsigned long long  _keyboardType;
    NSString * _keys;
    long long  _layoutType;
    NSString * _primaryLanguage;
    double  _time;
    NSString * _ukeys;
}

@property (readonly, copy) NSString *characters;
@property (readonly, copy) NSString *charactersIgnoringModifiers;
@property (readonly) unsigned long long flags;
@property (readonly, copy) NSString *keyboardLayoutIdentifier;
@property (readonly) long long keyboardLayoutType;
@property (readonly) unsigned long long keyboardType;
@property (readonly, copy) NSString *primaryLanguage;
@property (readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (id)characters;
- (id)charactersIgnoringModifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flags;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardLayoutType:(long long)arg1 identifier:(id)arg2 flags:(unsigned long long)arg3 timestamp:(double)arg4 characters:(id)arg5 charactersIgnoringModifiers:(id)arg6;
- (id)initWithKeyboardLayoutType:(long long)arg1 keyboardType:(unsigned long long)arg2 identifier:(id)arg3 flags:(unsigned long long)arg4 timestamp:(double)arg5 characters:(id)arg6 charactersIgnoringModifiers:(id)arg7;
- (id)initWithKeyboardLayoutType:(long long)arg1 keyboardType:(unsigned long long)arg2 identifier:(id)arg3 primaryLanguage:(id)arg4 flags:(unsigned long long)arg5 timestamp:(double)arg6 characters:(id)arg7 charactersIgnoringModifiers:(id)arg8;
- (id)initWithKeyboardType:(unsigned long long)arg1 identifier:(id)arg2 flags:(unsigned long long)arg3 timestamp:(double)arg4 characters:(id)arg5 charactersIgnoringModifiers:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)keyboardLayoutIdentifier;
- (long long)keyboardLayoutType;
- (unsigned long long)keyboardType;
- (id)primaryLanguage;
- (double)timestamp;

@end
