/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelAvailability : PBCodable <NSCopying> {
    int  _availability;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int availability : 1; 
        unsigned int precisionRecall : 1; 
    }  _has;
    unsigned int  _precisionRecall;
    unsigned long long  _timestamp;
}

@property (nonatomic) int availability;
@property (nonatomic) bool hasAvailability;
@property (nonatomic) bool hasPrecisionRecall;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int precisionRecall;
@property (nonatomic) unsigned long long timestamp;

- (int)availability;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAvailability;
- (bool)hasPrecisionRecall;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)precisionRecall;
- (bool)readFrom:(id)arg1;
- (void)setAvailability:(int)arg1;
- (void)setHasAvailability:(bool)arg1;
- (void)setHasPrecisionRecall:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPrecisionRecall:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end