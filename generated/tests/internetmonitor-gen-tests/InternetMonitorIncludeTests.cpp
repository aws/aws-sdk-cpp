/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/internetmonitor/InternetMonitorClient.h>
#include <aws/internetmonitor/InternetMonitorEndpointProvider.h>
#include <aws/internetmonitor/InternetMonitorEndpointRules.h>
#include <aws/internetmonitor/InternetMonitorErrorMarshaller.h>
#include <aws/internetmonitor/InternetMonitorErrors.h>
#include <aws/internetmonitor/InternetMonitorRequest.h>
#include <aws/internetmonitor/InternetMonitorServiceClientModel.h>
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/model/AvailabilityMeasurement.h>
#include <aws/internetmonitor/model/ClientLocation.h>
#include <aws/internetmonitor/model/CreateMonitorRequest.h>
#include <aws/internetmonitor/model/CreateMonitorResult.h>
#include <aws/internetmonitor/model/DeleteMonitorRequest.h>
#include <aws/internetmonitor/model/DeleteMonitorResult.h>
#include <aws/internetmonitor/model/FilterParameter.h>
#include <aws/internetmonitor/model/GetHealthEventRequest.h>
#include <aws/internetmonitor/model/GetHealthEventResult.h>
#include <aws/internetmonitor/model/GetInternetEventRequest.h>
#include <aws/internetmonitor/model/GetInternetEventResult.h>
#include <aws/internetmonitor/model/GetMonitorRequest.h>
#include <aws/internetmonitor/model/GetMonitorResult.h>
#include <aws/internetmonitor/model/GetQueryResultsRequest.h>
#include <aws/internetmonitor/model/GetQueryResultsResult.h>
#include <aws/internetmonitor/model/GetQueryStatusRequest.h>
#include <aws/internetmonitor/model/GetQueryStatusResult.h>
#include <aws/internetmonitor/model/HealthEvent.h>
#include <aws/internetmonitor/model/HealthEventImpactType.h>
#include <aws/internetmonitor/model/HealthEventStatus.h>
#include <aws/internetmonitor/model/HealthEventsConfig.h>
#include <aws/internetmonitor/model/ImpactedLocation.h>
#include <aws/internetmonitor/model/InternetEventStatus.h>
#include <aws/internetmonitor/model/InternetEventSummary.h>
#include <aws/internetmonitor/model/InternetEventType.h>
#include <aws/internetmonitor/model/InternetHealth.h>
#include <aws/internetmonitor/model/InternetMeasurementsLogDelivery.h>
#include <aws/internetmonitor/model/ListHealthEventsRequest.h>
#include <aws/internetmonitor/model/ListHealthEventsResult.h>
#include <aws/internetmonitor/model/ListInternetEventsRequest.h>
#include <aws/internetmonitor/model/ListInternetEventsResult.h>
#include <aws/internetmonitor/model/ListMonitorsRequest.h>
#include <aws/internetmonitor/model/ListMonitorsResult.h>
#include <aws/internetmonitor/model/ListTagsForResourceRequest.h>
#include <aws/internetmonitor/model/ListTagsForResourceResult.h>
#include <aws/internetmonitor/model/LocalHealthEventsConfig.h>
#include <aws/internetmonitor/model/LocalHealthEventsConfigStatus.h>
#include <aws/internetmonitor/model/LogDeliveryStatus.h>
#include <aws/internetmonitor/model/Monitor.h>
#include <aws/internetmonitor/model/MonitorConfigState.h>
#include <aws/internetmonitor/model/MonitorProcessingStatusCode.h>
#include <aws/internetmonitor/model/Network.h>
#include <aws/internetmonitor/model/NetworkImpairment.h>
#include <aws/internetmonitor/model/Operator.h>
#include <aws/internetmonitor/model/PerformanceMeasurement.h>
#include <aws/internetmonitor/model/QueryField.h>
#include <aws/internetmonitor/model/QueryStatus.h>
#include <aws/internetmonitor/model/QueryType.h>
#include <aws/internetmonitor/model/RoundTripTime.h>
#include <aws/internetmonitor/model/S3Config.h>
#include <aws/internetmonitor/model/StartQueryRequest.h>
#include <aws/internetmonitor/model/StartQueryResult.h>
#include <aws/internetmonitor/model/StopQueryRequest.h>
#include <aws/internetmonitor/model/StopQueryResult.h>
#include <aws/internetmonitor/model/TagResourceRequest.h>
#include <aws/internetmonitor/model/TagResourceResult.h>
#include <aws/internetmonitor/model/TriangulationEventType.h>
#include <aws/internetmonitor/model/UntagResourceRequest.h>
#include <aws/internetmonitor/model/UntagResourceResult.h>
#include <aws/internetmonitor/model/UpdateMonitorRequest.h>
#include <aws/internetmonitor/model/UpdateMonitorResult.h>

using InternetMonitorIncludeTest = ::testing::Test;

TEST_F(InternetMonitorIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::InternetMonitor::InternetMonitorClient>("InternetMonitorIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
