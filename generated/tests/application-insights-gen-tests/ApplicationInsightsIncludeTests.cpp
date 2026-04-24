/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/application-insights/ApplicationInsightsClient.h>
#include <aws/application-insights/ApplicationInsightsEndpointProvider.h>
#include <aws/application-insights/ApplicationInsightsEndpointRules.h>
#include <aws/application-insights/ApplicationInsightsErrorMarshaller.h>
#include <aws/application-insights/ApplicationInsightsErrors.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/application-insights/ApplicationInsightsServiceClientModel.h>
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/AddWorkloadRequest.h>
#include <aws/application-insights/model/AddWorkloadResult.h>
#include <aws/application-insights/model/ApplicationComponent.h>
#include <aws/application-insights/model/ApplicationInfo.h>
#include <aws/application-insights/model/CloudWatchEventSource.h>
#include <aws/application-insights/model/ConfigurationEvent.h>
#include <aws/application-insights/model/ConfigurationEventResourceType.h>
#include <aws/application-insights/model/ConfigurationEventStatus.h>
#include <aws/application-insights/model/CreateApplicationRequest.h>
#include <aws/application-insights/model/CreateApplicationResult.h>
#include <aws/application-insights/model/CreateComponentRequest.h>
#include <aws/application-insights/model/CreateComponentResult.h>
#include <aws/application-insights/model/CreateLogPatternRequest.h>
#include <aws/application-insights/model/CreateLogPatternResult.h>
#include <aws/application-insights/model/DeleteApplicationRequest.h>
#include <aws/application-insights/model/DeleteApplicationResult.h>
#include <aws/application-insights/model/DeleteComponentRequest.h>
#include <aws/application-insights/model/DeleteComponentResult.h>
#include <aws/application-insights/model/DeleteLogPatternRequest.h>
#include <aws/application-insights/model/DeleteLogPatternResult.h>
#include <aws/application-insights/model/DescribeApplicationRequest.h>
#include <aws/application-insights/model/DescribeApplicationResult.h>
#include <aws/application-insights/model/DescribeComponentConfigurationRecommendationRequest.h>
#include <aws/application-insights/model/DescribeComponentConfigurationRecommendationResult.h>
#include <aws/application-insights/model/DescribeComponentConfigurationRequest.h>
#include <aws/application-insights/model/DescribeComponentConfigurationResult.h>
#include <aws/application-insights/model/DescribeComponentRequest.h>
#include <aws/application-insights/model/DescribeComponentResult.h>
#include <aws/application-insights/model/DescribeLogPatternRequest.h>
#include <aws/application-insights/model/DescribeLogPatternResult.h>
#include <aws/application-insights/model/DescribeObservationRequest.h>
#include <aws/application-insights/model/DescribeObservationResult.h>
#include <aws/application-insights/model/DescribeProblemObservationsRequest.h>
#include <aws/application-insights/model/DescribeProblemObservationsResult.h>
#include <aws/application-insights/model/DescribeProblemRequest.h>
#include <aws/application-insights/model/DescribeProblemResult.h>
#include <aws/application-insights/model/DescribeWorkloadRequest.h>
#include <aws/application-insights/model/DescribeWorkloadResult.h>
#include <aws/application-insights/model/DiscoveryType.h>
#include <aws/application-insights/model/FeedbackKey.h>
#include <aws/application-insights/model/FeedbackValue.h>
#include <aws/application-insights/model/GroupingType.h>
#include <aws/application-insights/model/ListApplicationsRequest.h>
#include <aws/application-insights/model/ListApplicationsResult.h>
#include <aws/application-insights/model/ListComponentsRequest.h>
#include <aws/application-insights/model/ListComponentsResult.h>
#include <aws/application-insights/model/ListConfigurationHistoryRequest.h>
#include <aws/application-insights/model/ListConfigurationHistoryResult.h>
#include <aws/application-insights/model/ListLogPatternSetsRequest.h>
#include <aws/application-insights/model/ListLogPatternSetsResult.h>
#include <aws/application-insights/model/ListLogPatternsRequest.h>
#include <aws/application-insights/model/ListLogPatternsResult.h>
#include <aws/application-insights/model/ListProblemsRequest.h>
#include <aws/application-insights/model/ListProblemsResult.h>
#include <aws/application-insights/model/ListTagsForResourceRequest.h>
#include <aws/application-insights/model/ListTagsForResourceResult.h>
#include <aws/application-insights/model/ListWorkloadsRequest.h>
#include <aws/application-insights/model/ListWorkloadsResult.h>
#include <aws/application-insights/model/LogFilter.h>
#include <aws/application-insights/model/LogPattern.h>
#include <aws/application-insights/model/Observation.h>
#include <aws/application-insights/model/OsType.h>
#include <aws/application-insights/model/Problem.h>
#include <aws/application-insights/model/RecommendationType.h>
#include <aws/application-insights/model/RelatedObservations.h>
#include <aws/application-insights/model/RemoveWorkloadRequest.h>
#include <aws/application-insights/model/RemoveWorkloadResult.h>
#include <aws/application-insights/model/ResolutionMethod.h>
#include <aws/application-insights/model/SeverityLevel.h>
#include <aws/application-insights/model/Status.h>
#include <aws/application-insights/model/Tag.h>
#include <aws/application-insights/model/TagResourceRequest.h>
#include <aws/application-insights/model/TagResourceResult.h>
#include <aws/application-insights/model/Tier.h>
#include <aws/application-insights/model/TooManyTagsException.h>
#include <aws/application-insights/model/UntagResourceRequest.h>
#include <aws/application-insights/model/UntagResourceResult.h>
#include <aws/application-insights/model/UpdateApplicationRequest.h>
#include <aws/application-insights/model/UpdateApplicationResult.h>
#include <aws/application-insights/model/UpdateComponentConfigurationRequest.h>
#include <aws/application-insights/model/UpdateComponentConfigurationResult.h>
#include <aws/application-insights/model/UpdateComponentRequest.h>
#include <aws/application-insights/model/UpdateComponentResult.h>
#include <aws/application-insights/model/UpdateLogPatternRequest.h>
#include <aws/application-insights/model/UpdateLogPatternResult.h>
#include <aws/application-insights/model/UpdateProblemRequest.h>
#include <aws/application-insights/model/UpdateProblemResult.h>
#include <aws/application-insights/model/UpdateStatus.h>
#include <aws/application-insights/model/UpdateWorkloadRequest.h>
#include <aws/application-insights/model/UpdateWorkloadResult.h>
#include <aws/application-insights/model/Visibility.h>
#include <aws/application-insights/model/Workload.h>
#include <aws/application-insights/model/WorkloadConfiguration.h>

using ApplicationInsightsIncludeTest = ::testing::Test;

TEST_F(ApplicationInsightsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ApplicationInsights::ApplicationInsightsClient>("ApplicationInsightsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
