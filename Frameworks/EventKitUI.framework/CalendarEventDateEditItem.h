/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */



@interface CalendarEventDateEditItem : CalendarEventEditItem 
{
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _startGr;
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _endGr;
    BOOL _allDay;
}


- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDate;
- (id)identifier;
- (void)absorbValueFromView:(id)arg1;
- (void)absorbValueFromOccurrence:(struct CalEventOccurrence { }*)arg1 givenModel:(id)arg2 editModel:(id)arg3;
- (void)_postStartDateChange;
- (id)detailViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(NSInteger)arg2;
- (void)absorbValueFromOccurrence:(struct CalEventOccurrence { }*)arg1 givenModel:(id)arg2 editModel:(id)arg3 overrideDate:(NSInteger)arg4;
- (void)absorbValueFromDictionary:(id)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(NSInteger)arg1 forWidth:(float)arg2;
- (BOOL)configureForCalendarConstraints:(id)arg1 withOccurrence:(struct CalEventOccurrence { }*)arg2;
- (BOOL)editItemViewDirty:(id)arg1;
- (void)saveIntoEvent:(void*)arg1;
- (id)cellForSubitemAtIndex:(NSInteger)arg1 givenEditModel:(id)arg2;
- (id)serializedValue;

@end