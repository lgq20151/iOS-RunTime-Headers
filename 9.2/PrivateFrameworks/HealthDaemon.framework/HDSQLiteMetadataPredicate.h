/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteMetadataPredicate : HDSQLitePredicate <NSCopying> {
    BOOL  _includeNullPredicate;
    HDSQLitePredicate * _keyPredicate;
    HDSQLitePredicate * _valuePredicate;
}

+ (id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned int)arg3;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)_valuePredicateForValue:(id)arg1 operatorType:(unsigned int)arg2;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;

@end
