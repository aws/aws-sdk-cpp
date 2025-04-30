/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/timestream-query/TimestreamQueryClient.h>
#include <aws/timestream-query/TimestreamQueryClientConfiguration.h>
#include <aws/timestream-query/TimestreamQueryEndpointProvider.h>
#include <aws/timestream-query/TimestreamQueryEndpointRules.h>
#include <aws/timestream-query/TimestreamQueryErrorMarshaller.h>
#include <aws/timestream-query/TimestreamQueryErrors.h>
#include <aws/timestream-query/TimestreamQueryRequest.h>
#include <aws/timestream-query/TimestreamQueryServiceClientModel.h>
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/AccountSettingsNotificationConfiguration.h>
#include <aws/timestream-query/model/CancelQueryRequest.h>
#include <aws/timestream-query/model/CancelQueryResult.h>
#include <aws/timestream-query/model/ColumnInfo.h>
#include <aws/timestream-query/model/ComputeMode.h>
#include <aws/timestream-query/model/CreateScheduledQueryRequest.h>
#include <aws/timestream-query/model/CreateScheduledQueryResult.h>
#include <aws/timestream-query/model/Datum.h>
#include <aws/timestream-query/model/DeleteScheduledQueryRequest.h>
#include <aws/timestream-query/model/DescribeAccountSettingsRequest.h>
#include <aws/timestream-query/model/DescribeAccountSettingsResult.h>
#include <aws/timestream-query/model/DescribeEndpointsRequest.h>
#include <aws/timestream-query/model/DescribeEndpointsResult.h>
#include <aws/timestream-query/model/DescribeScheduledQueryRequest.h>
#include <aws/timestream-query/model/DescribeScheduledQueryResult.h>
#include <aws/timestream-query/model/DimensionMapping.h>
#include <aws/timestream-query/model/DimensionValueType.h>
#include <aws/timestream-query/model/Endpoint.h>
#include <aws/timestream-query/model/ErrorReportConfiguration.h>
#include <aws/timestream-query/model/ErrorReportLocation.h>
#include <aws/timestream-query/model/ExecuteScheduledQueryRequest.h>
#include <aws/timestream-query/model/ExecutionStats.h>
#include <aws/timestream-query/model/LastUpdate.h>
#include <aws/timestream-query/model/LastUpdateStatus.h>
#include <aws/timestream-query/model/ListScheduledQueriesRequest.h>
#include <aws/timestream-query/model/ListScheduledQueriesResult.h>
#include <aws/timestream-query/model/ListTagsForResourceRequest.h>
#include <aws/timestream-query/model/ListTagsForResourceResult.h>
#include <aws/timestream-query/model/MeasureValueType.h>
#include <aws/timestream-query/model/MixedMeasureMapping.h>
#include <aws/timestream-query/model/MultiMeasureAttributeMapping.h>
#include <aws/timestream-query/model/MultiMeasureMappings.h>
#include <aws/timestream-query/model/NotificationConfiguration.h>
#include <aws/timestream-query/model/ParameterMapping.h>
#include <aws/timestream-query/model/PrepareQueryRequest.h>
#include <aws/timestream-query/model/PrepareQueryResult.h>
#include <aws/timestream-query/model/ProvisionedCapacityRequest.h>
#include <aws/timestream-query/model/ProvisionedCapacityResponse.h>
#include <aws/timestream-query/model/QueryComputeRequest.h>
#include <aws/timestream-query/model/QueryComputeResponse.h>
#include <aws/timestream-query/model/QueryInsights.h>
#include <aws/timestream-query/model/QueryInsightsMode.h>
#include <aws/timestream-query/model/QueryInsightsResponse.h>
#include <aws/timestream-query/model/QueryPricingModel.h>
#include <aws/timestream-query/model/QueryRequest.h>
#include <aws/timestream-query/model/QueryResult.h>
#include <aws/timestream-query/model/QuerySpatialCoverage.h>
#include <aws/timestream-query/model/QuerySpatialCoverageMax.h>
#include <aws/timestream-query/model/QueryStatus.h>
#include <aws/timestream-query/model/QueryTemporalRange.h>
#include <aws/timestream-query/model/QueryTemporalRangeMax.h>
#include <aws/timestream-query/model/ResourceNotFoundException.h>
#include <aws/timestream-query/model/Row.h>
#include <aws/timestream-query/model/S3Configuration.h>
#include <aws/timestream-query/model/S3EncryptionOption.h>
#include <aws/timestream-query/model/S3ReportLocation.h>
#include <aws/timestream-query/model/ScalarMeasureValueType.h>
#include <aws/timestream-query/model/ScalarType.h>
#include <aws/timestream-query/model/ScheduleConfiguration.h>
#include <aws/timestream-query/model/ScheduledQuery.h>
#include <aws/timestream-query/model/ScheduledQueryDescription.h>
#include <aws/timestream-query/model/ScheduledQueryInsights.h>
#include <aws/timestream-query/model/ScheduledQueryInsightsMode.h>
#include <aws/timestream-query/model/ScheduledQueryInsightsResponse.h>
#include <aws/timestream-query/model/ScheduledQueryRunStatus.h>
#include <aws/timestream-query/model/ScheduledQueryRunSummary.h>
#include <aws/timestream-query/model/ScheduledQueryState.h>
#include <aws/timestream-query/model/SelectColumn.h>
#include <aws/timestream-query/model/SnsConfiguration.h>
#include <aws/timestream-query/model/Tag.h>
#include <aws/timestream-query/model/TagResourceRequest.h>
#include <aws/timestream-query/model/TagResourceResult.h>
#include <aws/timestream-query/model/TargetConfiguration.h>
#include <aws/timestream-query/model/TargetDestination.h>
#include <aws/timestream-query/model/TimeSeriesDataPoint.h>
#include <aws/timestream-query/model/TimestreamConfiguration.h>
#include <aws/timestream-query/model/TimestreamDestination.h>
#include <aws/timestream-query/model/Type.h>
#include <aws/timestream-query/model/UntagResourceRequest.h>
#include <aws/timestream-query/model/UntagResourceResult.h>
#include <aws/timestream-query/model/UpdateAccountSettingsRequest.h>
#include <aws/timestream-query/model/UpdateAccountSettingsResult.h>
#include <aws/timestream-query/model/UpdateScheduledQueryRequest.h>

using TimestreamQueryIncludeTest = ::testing::Test;

TEST_F(TimestreamQueryIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::TimestreamQuery::TimestreamQueryClient>("TimestreamQueryIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
