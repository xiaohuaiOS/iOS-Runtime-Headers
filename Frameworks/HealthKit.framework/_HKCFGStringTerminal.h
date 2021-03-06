/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCFGStringTerminal : _HKCFGTerminal {
    BOOL  _caseSensitive;
    NSString * _string;
}

@property (nonatomic) BOOL caseSensitive;
@property (nonatomic, copy) NSString *string;

- (void).cxx_destruct;
- (id)_label;
- (unsigned int)_minimumLength;
- (BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2;
- (BOOL)caseSensitive;
- (id)characterSet;
- (void)setCaseSensitive:(BOOL)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
