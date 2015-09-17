/* Generated by RuntimeBrowser.
 */

@protocol CADEventInterface

@required

- (void)CADDatabaseActOnSuggestedEvent:(void *)arg1 action:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: struct { int x1; int x2; }, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)CADDatabaseCanModifySuggestedEventCalendar:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, BOOL, void*
- (void)CADDatabaseExportEventAsICS:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: struct { int x1; int x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)CADDatabaseGetBirthdayContactIdentifierForEvent:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: struct { int x1; int x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSString *, void*
- (void)CADDatabaseGetCountOfNotifiableEvents:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, int, void*
- (void)CADDatabaseGetCountOfUnacknowledgedEvents:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, int, void*
- (void)CADDatabaseGetDefaultCalendarForNewEventsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, struct { int x1; int x2; }, void*
- (void)CADDatabaseGetEndDateOfEarliestExpiringNotifiableEventAfterDate:(void *)arg1 timeZone:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSTimeZone *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSDate *, void*
- (void)CADDatabaseGetEventWithEventIdentifier:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, struct { int x1; int x2; }, void*
- (void)CADDatabaseGetEventWithUniqueID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, struct { int x1; int x2; }, void*
- (void)CADDatabaseGetSuggestedEventCalendarWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, struct { int x1; int x2; }, void*
- (void)CADDatabaseInsertSuggestedEventCalendarWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseSetDefaultCalendarForNewEvents:(struct { int x1; int x2; })arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1;
- (void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, BOOL, void*
- (void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1;
- (void)CADOccurrenceCacheDoEvents:(void *)arg1 haveOccurrencesAfterDate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(void *)arg1 nearestDate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: int, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSDate *, void*
- (void)CADOccurrenceCacheGetOccurrenceForCalendars:(void *)arg1 onDay:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADOccurrenceCacheSearchLocationsWithTerm:(void *)arg1 inCalendars:(void *)arg2 responseToken:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSArray *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADOccurrenceCacheSearchWithTerm:(void *)arg1 inCalendars:(void *)arg2 responseToken:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSArray *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end