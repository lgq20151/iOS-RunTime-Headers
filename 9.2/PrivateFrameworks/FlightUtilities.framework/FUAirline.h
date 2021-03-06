/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUAirline : NSObject <NSCopying> {
    NSString * _FAACode;
    NSString * _IATACode;
    NSURL * _URL;
    NSString * _name;
    NSString * _phoneNumber;
}

@property (retain) NSString *FAACode;
@property (retain) NSString *IATACode;
@property (retain) NSURL *URL;
@property (retain) NSString *name;
@property (retain) NSString *phoneNumber;

- (void).cxx_destruct;
- (id)FAACode;
- (id)IATACode;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)phoneNumber;
- (void)setFAACode:(id)arg1;
- (void)setIATACode:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setURL:(id)arg1;

@end
