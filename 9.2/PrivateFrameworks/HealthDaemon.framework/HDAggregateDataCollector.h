/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAggregateDataCollector : HDDataCollector {
    BOOL  _didReceiveSensorDatum;
    BOOL  _fetchingHistoricalData;
    _HKDataCollectorDelayedOperation * _historicalFetchOperation;
    NSDictionary * _lastReceivedSecondaryContext;
    <HDSensorDatum> * _lastReceivedSensorDatum;
    double  _maxDatumDuration;
    BOOL  _needsHistoricalFetch;
}

@property double maxDatumDuration;

- (void).cxx_destruct;
- (double)_queue_aggregationInterval;
- (void)_queue_beginStreaming;
- (void)_queue_beginUpdates;
- (void)_queue_fetchHistoricalDataWithCompletion:(id /* block */)arg1;
- (void)_queue_handleCMDatabaseReset;
- (void)_queue_handleUpdatingHistoricalDataWithCompletion:(id /* block */)arg1;
- (id)_queue_lastReceivedSecondaryContext;
- (id)_queue_lastReceivedSensorDatum;
- (double)_queue_maxDatumDuration;
- (void)_queue_processSensorData:(id)arg1 lastSensorDatum:(id)arg2 completion:(id /* block */)arg3;
- (id)_queue_processSensorDataBatched:(id)arg1 firstDatum:(id)arg2 lastSensorDatum:(id*)arg3;
- (void)_queue_updateLastReceivedSecondaryContext:(id)arg1;
- (void)_queue_updateLastReceivedSensorDatum:(id)arg1;
- (void)beginUpdatesFromDatum:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)initWithHealthDaemon:(id)arg1;
- (double)maxDatumDuration;
- (void)setMaxDatumDuration:(double)arg1;
- (void)updateHistoricalData;
- (void)updateHistoricalDataWithCompletion:(id /* block */)arg1;

@end
