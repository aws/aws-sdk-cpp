/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sagemaker-metrics/SageMakerMetricsClient.h>
#include <aws/sagemaker-metrics/SageMakerMetricsEndpointProvider.h>
#include <aws/sagemaker-metrics/SageMakerMetricsEndpointRules.h>
#include <aws/sagemaker-metrics/SageMakerMetricsErrorMarshaller.h>
#include <aws/sagemaker-metrics/SageMakerMetricsErrors.h>
#include <aws/sagemaker-metrics/SageMakerMetricsRequest.h>
#include <aws/sagemaker-metrics/SageMakerMetricsServiceClientModel.h>
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/sagemaker-metrics/model/BatchGetMetricsRequest.h>
#include <aws/sagemaker-metrics/model/BatchGetMetricsResult.h>
#include <aws/sagemaker-metrics/model/BatchPutMetricsError.h>
#include <aws/sagemaker-metrics/model/BatchPutMetricsRequest.h>
#include <aws/sagemaker-metrics/model/BatchPutMetricsResult.h>
#include <aws/sagemaker-metrics/model/MetricQuery.h>
#include <aws/sagemaker-metrics/model/MetricQueryResult.h>
#include <aws/sagemaker-metrics/model/MetricQueryResultStatus.h>
#include <aws/sagemaker-metrics/model/MetricStatistic.h>
#include <aws/sagemaker-metrics/model/Period.h>
#include <aws/sagemaker-metrics/model/PutMetricsErrorCode.h>
#include <aws/sagemaker-metrics/model/RawMetricData.h>
#include <aws/sagemaker-metrics/model/XAxisType.h>

using SageMakerMetricsIncludeTest = ::testing::Test;

TEST_F(SageMakerMetricsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SageMakerMetrics::SageMakerMetricsClient>("SageMakerMetricsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
