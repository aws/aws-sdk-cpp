/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/networkflowmonitor/NetworkFlowMonitorClient.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorEndpointProvider.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorEndpointRules.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorErrorMarshaller.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorErrors.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorRequest.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorServiceClientModel.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/CreateMonitorRequest.h>
#include <aws/networkflowmonitor/model/CreateMonitorResult.h>
#include <aws/networkflowmonitor/model/CreateScopeRequest.h>
#include <aws/networkflowmonitor/model/CreateScopeResult.h>
#include <aws/networkflowmonitor/model/DeleteMonitorRequest.h>
#include <aws/networkflowmonitor/model/DeleteMonitorResult.h>
#include <aws/networkflowmonitor/model/DeleteScopeRequest.h>
#include <aws/networkflowmonitor/model/DeleteScopeResult.h>
#include <aws/networkflowmonitor/model/DestinationCategory.h>
#include <aws/networkflowmonitor/model/GetMonitorRequest.h>
#include <aws/networkflowmonitor/model/GetMonitorResult.h>
#include <aws/networkflowmonitor/model/GetQueryResultsMonitorTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/GetQueryResultsMonitorTopContributorsResult.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsDataResult.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsResult.h>
#include <aws/networkflowmonitor/model/GetQueryStatusMonitorTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/GetQueryStatusMonitorTopContributorsResult.h>
#include <aws/networkflowmonitor/model/GetQueryStatusWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/networkflowmonitor/model/GetQueryStatusWorkloadInsightsTopContributorsDataResult.h>
#include <aws/networkflowmonitor/model/GetQueryStatusWorkloadInsightsTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/GetQueryStatusWorkloadInsightsTopContributorsResult.h>
#include <aws/networkflowmonitor/model/GetScopeRequest.h>
#include <aws/networkflowmonitor/model/GetScopeResult.h>
#include <aws/networkflowmonitor/model/KubernetesMetadata.h>
#include <aws/networkflowmonitor/model/ListMonitorsRequest.h>
#include <aws/networkflowmonitor/model/ListMonitorsResult.h>
#include <aws/networkflowmonitor/model/ListScopesRequest.h>
#include <aws/networkflowmonitor/model/ListScopesResult.h>
#include <aws/networkflowmonitor/model/ListTagsForResourceRequest.h>
#include <aws/networkflowmonitor/model/ListTagsForResourceResult.h>
#include <aws/networkflowmonitor/model/MetricUnit.h>
#include <aws/networkflowmonitor/model/MonitorLocalResource.h>
#include <aws/networkflowmonitor/model/MonitorLocalResourceType.h>
#include <aws/networkflowmonitor/model/MonitorMetric.h>
#include <aws/networkflowmonitor/model/MonitorRemoteResource.h>
#include <aws/networkflowmonitor/model/MonitorRemoteResourceType.h>
#include <aws/networkflowmonitor/model/MonitorStatus.h>
#include <aws/networkflowmonitor/model/MonitorSummary.h>
#include <aws/networkflowmonitor/model/MonitorTopContributorsRow.h>
#include <aws/networkflowmonitor/model/QueryStatus.h>
#include <aws/networkflowmonitor/model/ScopeStatus.h>
#include <aws/networkflowmonitor/model/ScopeSummary.h>
#include <aws/networkflowmonitor/model/StartQueryMonitorTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/StartQueryMonitorTopContributorsResult.h>
#include <aws/networkflowmonitor/model/StartQueryWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/networkflowmonitor/model/StartQueryWorkloadInsightsTopContributorsDataResult.h>
#include <aws/networkflowmonitor/model/StartQueryWorkloadInsightsTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/StartQueryWorkloadInsightsTopContributorsResult.h>
#include <aws/networkflowmonitor/model/StopQueryMonitorTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/StopQueryMonitorTopContributorsResult.h>
#include <aws/networkflowmonitor/model/StopQueryWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/networkflowmonitor/model/StopQueryWorkloadInsightsTopContributorsDataResult.h>
#include <aws/networkflowmonitor/model/StopQueryWorkloadInsightsTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/StopQueryWorkloadInsightsTopContributorsResult.h>
#include <aws/networkflowmonitor/model/TagResourceRequest.h>
#include <aws/networkflowmonitor/model/TagResourceResult.h>
#include <aws/networkflowmonitor/model/TargetId.h>
#include <aws/networkflowmonitor/model/TargetIdentifier.h>
#include <aws/networkflowmonitor/model/TargetResource.h>
#include <aws/networkflowmonitor/model/TargetType.h>
#include <aws/networkflowmonitor/model/TraversedComponent.h>
#include <aws/networkflowmonitor/model/UntagResourceRequest.h>
#include <aws/networkflowmonitor/model/UntagResourceResult.h>
#include <aws/networkflowmonitor/model/UpdateMonitorRequest.h>
#include <aws/networkflowmonitor/model/UpdateMonitorResult.h>
#include <aws/networkflowmonitor/model/UpdateScopeRequest.h>
#include <aws/networkflowmonitor/model/UpdateScopeResult.h>
#include <aws/networkflowmonitor/model/WorkloadInsightsMetric.h>
#include <aws/networkflowmonitor/model/WorkloadInsightsTopContributorsDataPoint.h>
#include <aws/networkflowmonitor/model/WorkloadInsightsTopContributorsRow.h>

using NetworkFlowMonitorIncludeTest = ::testing::Test;

TEST_F(NetworkFlowMonitorIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::NetworkFlowMonitor::NetworkFlowMonitorClient>("NetworkFlowMonitorIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
