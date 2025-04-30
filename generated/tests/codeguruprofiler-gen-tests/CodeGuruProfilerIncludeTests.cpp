/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/codeguruprofiler/CodeGuruProfilerClient.h>
#include <aws/codeguruprofiler/CodeGuruProfilerEndpointProvider.h>
#include <aws/codeguruprofiler/CodeGuruProfilerEndpointRules.h>
#include <aws/codeguruprofiler/CodeGuruProfilerErrorMarshaller.h>
#include <aws/codeguruprofiler/CodeGuruProfilerErrors.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/codeguruprofiler/CodeGuruProfilerServiceClientModel.h>
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/ActionGroup.h>
#include <aws/codeguruprofiler/model/AddNotificationChannelsRequest.h>
#include <aws/codeguruprofiler/model/AddNotificationChannelsResult.h>
#include <aws/codeguruprofiler/model/AgentConfiguration.h>
#include <aws/codeguruprofiler/model/AgentOrchestrationConfig.h>
#include <aws/codeguruprofiler/model/AgentParameterField.h>
#include <aws/codeguruprofiler/model/AggregatedProfileTime.h>
#include <aws/codeguruprofiler/model/AggregationPeriod.h>
#include <aws/codeguruprofiler/model/Anomaly.h>
#include <aws/codeguruprofiler/model/AnomalyInstance.h>
#include <aws/codeguruprofiler/model/BatchGetFrameMetricDataRequest.h>
#include <aws/codeguruprofiler/model/BatchGetFrameMetricDataResult.h>
#include <aws/codeguruprofiler/model/Channel.h>
#include <aws/codeguruprofiler/model/ComputePlatform.h>
#include <aws/codeguruprofiler/model/ConfigureAgentRequest.h>
#include <aws/codeguruprofiler/model/ConfigureAgentResult.h>
#include <aws/codeguruprofiler/model/CreateProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/CreateProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/DeleteProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/DeleteProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/DescribeProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/DescribeProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/EventPublisher.h>
#include <aws/codeguruprofiler/model/FeedbackType.h>
#include <aws/codeguruprofiler/model/FindingsReportSummary.h>
#include <aws/codeguruprofiler/model/FrameMetric.h>
#include <aws/codeguruprofiler/model/FrameMetricDatum.h>
#include <aws/codeguruprofiler/model/GetFindingsReportAccountSummaryRequest.h>
#include <aws/codeguruprofiler/model/GetFindingsReportAccountSummaryResult.h>
#include <aws/codeguruprofiler/model/GetNotificationConfigurationRequest.h>
#include <aws/codeguruprofiler/model/GetNotificationConfigurationResult.h>
#include <aws/codeguruprofiler/model/GetPolicyRequest.h>
#include <aws/codeguruprofiler/model/GetPolicyResult.h>
#include <aws/codeguruprofiler/model/GetProfileRequest.h>
#include <aws/codeguruprofiler/model/GetProfileResult.h>
#include <aws/codeguruprofiler/model/GetRecommendationsRequest.h>
#include <aws/codeguruprofiler/model/GetRecommendationsResult.h>
#include <aws/codeguruprofiler/model/ListFindingsReportsRequest.h>
#include <aws/codeguruprofiler/model/ListFindingsReportsResult.h>
#include <aws/codeguruprofiler/model/ListProfileTimesRequest.h>
#include <aws/codeguruprofiler/model/ListProfileTimesResult.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsRequest.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsResult.h>
#include <aws/codeguruprofiler/model/ListTagsForResourceRequest.h>
#include <aws/codeguruprofiler/model/ListTagsForResourceResult.h>
#include <aws/codeguruprofiler/model/Match.h>
#include <aws/codeguruprofiler/model/MetadataField.h>
#include <aws/codeguruprofiler/model/Metric.h>
#include <aws/codeguruprofiler/model/MetricType.h>
#include <aws/codeguruprofiler/model/NotificationConfiguration.h>
#include <aws/codeguruprofiler/model/OrderBy.h>
#include <aws/codeguruprofiler/model/Pattern.h>
#include <aws/codeguruprofiler/model/PostAgentProfileRequest.h>
#include <aws/codeguruprofiler/model/PostAgentProfileResult.h>
#include <aws/codeguruprofiler/model/ProfileTime.h>
#include <aws/codeguruprofiler/model/ProfilingGroupDescription.h>
#include <aws/codeguruprofiler/model/ProfilingStatus.h>
#include <aws/codeguruprofiler/model/PutPermissionRequest.h>
#include <aws/codeguruprofiler/model/PutPermissionResult.h>
#include <aws/codeguruprofiler/model/Recommendation.h>
#include <aws/codeguruprofiler/model/RemoveNotificationChannelRequest.h>
#include <aws/codeguruprofiler/model/RemoveNotificationChannelResult.h>
#include <aws/codeguruprofiler/model/RemovePermissionRequest.h>
#include <aws/codeguruprofiler/model/RemovePermissionResult.h>
#include <aws/codeguruprofiler/model/SubmitFeedbackRequest.h>
#include <aws/codeguruprofiler/model/SubmitFeedbackResult.h>
#include <aws/codeguruprofiler/model/TagResourceRequest.h>
#include <aws/codeguruprofiler/model/TagResourceResult.h>
#include <aws/codeguruprofiler/model/TimestampStructure.h>
#include <aws/codeguruprofiler/model/UntagResourceRequest.h>
#include <aws/codeguruprofiler/model/UntagResourceResult.h>
#include <aws/codeguruprofiler/model/UpdateProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/UpdateProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/UserFeedback.h>

using CodeGuruProfilerIncludeTest = ::testing::Test;

TEST_F(CodeGuruProfilerIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CodeGuruProfiler::CodeGuruProfilerClient>("CodeGuruProfilerIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
