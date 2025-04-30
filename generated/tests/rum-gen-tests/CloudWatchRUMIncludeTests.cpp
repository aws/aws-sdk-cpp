/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/rum/CloudWatchRUMClient.h>
#include <aws/rum/CloudWatchRUMEndpointProvider.h>
#include <aws/rum/CloudWatchRUMEndpointRules.h>
#include <aws/rum/CloudWatchRUMErrorMarshaller.h>
#include <aws/rum/CloudWatchRUMErrors.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/rum/CloudWatchRUMServiceClientModel.h>
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/model/AppMonitor.h>
#include <aws/rum/model/AppMonitorConfiguration.h>
#include <aws/rum/model/AppMonitorDetails.h>
#include <aws/rum/model/AppMonitorSummary.h>
#include <aws/rum/model/BatchCreateRumMetricDefinitionsError.h>
#include <aws/rum/model/BatchCreateRumMetricDefinitionsRequest.h>
#include <aws/rum/model/BatchCreateRumMetricDefinitionsResult.h>
#include <aws/rum/model/BatchDeleteRumMetricDefinitionsError.h>
#include <aws/rum/model/BatchDeleteRumMetricDefinitionsRequest.h>
#include <aws/rum/model/BatchDeleteRumMetricDefinitionsResult.h>
#include <aws/rum/model/BatchGetRumMetricDefinitionsRequest.h>
#include <aws/rum/model/BatchGetRumMetricDefinitionsResult.h>
#include <aws/rum/model/ConflictException.h>
#include <aws/rum/model/CreateAppMonitorRequest.h>
#include <aws/rum/model/CreateAppMonitorResult.h>
#include <aws/rum/model/CustomEvents.h>
#include <aws/rum/model/CustomEventsStatus.h>
#include <aws/rum/model/CwLog.h>
#include <aws/rum/model/DataStorage.h>
#include <aws/rum/model/DeleteAppMonitorRequest.h>
#include <aws/rum/model/DeleteAppMonitorResult.h>
#include <aws/rum/model/DeleteResourcePolicyRequest.h>
#include <aws/rum/model/DeleteResourcePolicyResult.h>
#include <aws/rum/model/DeleteRumMetricsDestinationRequest.h>
#include <aws/rum/model/DeleteRumMetricsDestinationResult.h>
#include <aws/rum/model/DeobfuscationConfiguration.h>
#include <aws/rum/model/DeobfuscationStatus.h>
#include <aws/rum/model/GetAppMonitorDataRequest.h>
#include <aws/rum/model/GetAppMonitorDataResult.h>
#include <aws/rum/model/GetAppMonitorRequest.h>
#include <aws/rum/model/GetAppMonitorResult.h>
#include <aws/rum/model/GetResourcePolicyRequest.h>
#include <aws/rum/model/GetResourcePolicyResult.h>
#include <aws/rum/model/InternalServerException.h>
#include <aws/rum/model/JavaScriptSourceMaps.h>
#include <aws/rum/model/ListAppMonitorsRequest.h>
#include <aws/rum/model/ListAppMonitorsResult.h>
#include <aws/rum/model/ListRumMetricsDestinationsRequest.h>
#include <aws/rum/model/ListRumMetricsDestinationsResult.h>
#include <aws/rum/model/ListTagsForResourceRequest.h>
#include <aws/rum/model/ListTagsForResourceResult.h>
#include <aws/rum/model/MetricDefinition.h>
#include <aws/rum/model/MetricDefinitionRequest.h>
#include <aws/rum/model/MetricDestination.h>
#include <aws/rum/model/MetricDestinationSummary.h>
#include <aws/rum/model/PutResourcePolicyRequest.h>
#include <aws/rum/model/PutResourcePolicyResult.h>
#include <aws/rum/model/PutRumEventsRequest.h>
#include <aws/rum/model/PutRumEventsResult.h>
#include <aws/rum/model/PutRumMetricsDestinationRequest.h>
#include <aws/rum/model/PutRumMetricsDestinationResult.h>
#include <aws/rum/model/QueryFilter.h>
#include <aws/rum/model/ResourceNotFoundException.h>
#include <aws/rum/model/RumEvent.h>
#include <aws/rum/model/StateEnum.h>
#include <aws/rum/model/TagResourceRequest.h>
#include <aws/rum/model/TagResourceResult.h>
#include <aws/rum/model/Telemetry.h>
#include <aws/rum/model/ThrottlingException.h>
#include <aws/rum/model/TimeRange.h>
#include <aws/rum/model/UntagResourceRequest.h>
#include <aws/rum/model/UntagResourceResult.h>
#include <aws/rum/model/UpdateAppMonitorRequest.h>
#include <aws/rum/model/UpdateAppMonitorResult.h>
#include <aws/rum/model/UpdateRumMetricDefinitionRequest.h>
#include <aws/rum/model/UpdateRumMetricDefinitionResult.h>
#include <aws/rum/model/UserDetails.h>

using CloudWatchRUMIncludeTest = ::testing::Test;

TEST_F(CloudWatchRUMIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CloudWatchRUM::CloudWatchRUMClient>("CloudWatchRUMIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
