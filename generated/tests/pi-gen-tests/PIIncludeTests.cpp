/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/pi/PIClient.h>
#include <aws/pi/PIEndpointProvider.h>
#include <aws/pi/PIEndpointRules.h>
#include <aws/pi/PIErrorMarshaller.h>
#include <aws/pi/PIErrors.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/PIServiceClientModel.h>
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/model/AcceptLanguage.h>
#include <aws/pi/model/AnalysisReport.h>
#include <aws/pi/model/AnalysisReportSummary.h>
#include <aws/pi/model/AnalysisStatus.h>
#include <aws/pi/model/ContextType.h>
#include <aws/pi/model/CreatePerformanceAnalysisReportRequest.h>
#include <aws/pi/model/CreatePerformanceAnalysisReportResult.h>
#include <aws/pi/model/Data.h>
#include <aws/pi/model/DataPoint.h>
#include <aws/pi/model/DeletePerformanceAnalysisReportRequest.h>
#include <aws/pi/model/DeletePerformanceAnalysisReportResult.h>
#include <aws/pi/model/DescribeDimensionKeysRequest.h>
#include <aws/pi/model/DescribeDimensionKeysResult.h>
#include <aws/pi/model/DetailStatus.h>
#include <aws/pi/model/DimensionDetail.h>
#include <aws/pi/model/DimensionGroup.h>
#include <aws/pi/model/DimensionGroupDetail.h>
#include <aws/pi/model/DimensionKeyDescription.h>
#include <aws/pi/model/DimensionKeyDetail.h>
#include <aws/pi/model/FeatureMetadata.h>
#include <aws/pi/model/FeatureStatus.h>
#include <aws/pi/model/FineGrainedAction.h>
#include <aws/pi/model/GetDimensionKeyDetailsRequest.h>
#include <aws/pi/model/GetDimensionKeyDetailsResult.h>
#include <aws/pi/model/GetPerformanceAnalysisReportRequest.h>
#include <aws/pi/model/GetPerformanceAnalysisReportResult.h>
#include <aws/pi/model/GetResourceMetadataRequest.h>
#include <aws/pi/model/GetResourceMetadataResult.h>
#include <aws/pi/model/GetResourceMetricsRequest.h>
#include <aws/pi/model/GetResourceMetricsResult.h>
#include <aws/pi/model/Insight.h>
#include <aws/pi/model/ListAvailableResourceDimensionsRequest.h>
#include <aws/pi/model/ListAvailableResourceDimensionsResult.h>
#include <aws/pi/model/ListAvailableResourceMetricsRequest.h>
#include <aws/pi/model/ListAvailableResourceMetricsResult.h>
#include <aws/pi/model/ListPerformanceAnalysisReportsRequest.h>
#include <aws/pi/model/ListPerformanceAnalysisReportsResult.h>
#include <aws/pi/model/ListTagsForResourceRequest.h>
#include <aws/pi/model/ListTagsForResourceResult.h>
#include <aws/pi/model/MetricDimensionGroups.h>
#include <aws/pi/model/MetricKeyDataPoints.h>
#include <aws/pi/model/MetricQuery.h>
#include <aws/pi/model/PerformanceInsightsMetric.h>
#include <aws/pi/model/PeriodAlignment.h>
#include <aws/pi/model/Recommendation.h>
#include <aws/pi/model/ResponsePartitionKey.h>
#include <aws/pi/model/ResponseResourceMetric.h>
#include <aws/pi/model/ResponseResourceMetricKey.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/pi/model/Severity.h>
#include <aws/pi/model/Tag.h>
#include <aws/pi/model/TagResourceRequest.h>
#include <aws/pi/model/TagResourceResult.h>
#include <aws/pi/model/TextFormat.h>
#include <aws/pi/model/UntagResourceRequest.h>
#include <aws/pi/model/UntagResourceResult.h>

using PIIncludeTest = ::testing::Test;

TEST_F(PIIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PI::PIClient>("PIIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
