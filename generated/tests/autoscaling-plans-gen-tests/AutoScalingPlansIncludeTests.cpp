/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/autoscaling-plans/AutoScalingPlansClient.h>
#include <aws/autoscaling-plans/AutoScalingPlansEndpointProvider.h>
#include <aws/autoscaling-plans/AutoScalingPlansEndpointRules.h>
#include <aws/autoscaling-plans/AutoScalingPlansErrorMarshaller.h>
#include <aws/autoscaling-plans/AutoScalingPlansErrors.h>
#include <aws/autoscaling-plans/AutoScalingPlansRequest.h>
#include <aws/autoscaling-plans/AutoScalingPlansServiceClientModel.h>
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/autoscaling-plans/model/ApplicationSource.h>
#include <aws/autoscaling-plans/model/CreateScalingPlanRequest.h>
#include <aws/autoscaling-plans/model/CreateScalingPlanResult.h>
#include <aws/autoscaling-plans/model/CustomizedLoadMetricSpecification.h>
#include <aws/autoscaling-plans/model/CustomizedScalingMetricSpecification.h>
#include <aws/autoscaling-plans/model/Datapoint.h>
#include <aws/autoscaling-plans/model/DeleteScalingPlanRequest.h>
#include <aws/autoscaling-plans/model/DeleteScalingPlanResult.h>
#include <aws/autoscaling-plans/model/DescribeScalingPlanResourcesRequest.h>
#include <aws/autoscaling-plans/model/DescribeScalingPlanResourcesResult.h>
#include <aws/autoscaling-plans/model/DescribeScalingPlansRequest.h>
#include <aws/autoscaling-plans/model/DescribeScalingPlansResult.h>
#include <aws/autoscaling-plans/model/ForecastDataType.h>
#include <aws/autoscaling-plans/model/GetScalingPlanResourceForecastDataRequest.h>
#include <aws/autoscaling-plans/model/GetScalingPlanResourceForecastDataResult.h>
#include <aws/autoscaling-plans/model/LoadMetricType.h>
#include <aws/autoscaling-plans/model/MetricDimension.h>
#include <aws/autoscaling-plans/model/MetricStatistic.h>
#include <aws/autoscaling-plans/model/PolicyType.h>
#include <aws/autoscaling-plans/model/PredefinedLoadMetricSpecification.h>
#include <aws/autoscaling-plans/model/PredefinedScalingMetricSpecification.h>
#include <aws/autoscaling-plans/model/PredictiveScalingMaxCapacityBehavior.h>
#include <aws/autoscaling-plans/model/PredictiveScalingMode.h>
#include <aws/autoscaling-plans/model/ScalableDimension.h>
#include <aws/autoscaling-plans/model/ScalingInstruction.h>
#include <aws/autoscaling-plans/model/ScalingMetricType.h>
#include <aws/autoscaling-plans/model/ScalingPlan.h>
#include <aws/autoscaling-plans/model/ScalingPlanResource.h>
#include <aws/autoscaling-plans/model/ScalingPlanStatusCode.h>
#include <aws/autoscaling-plans/model/ScalingPolicy.h>
#include <aws/autoscaling-plans/model/ScalingPolicyUpdateBehavior.h>
#include <aws/autoscaling-plans/model/ScalingStatusCode.h>
#include <aws/autoscaling-plans/model/ServiceNamespace.h>
#include <aws/autoscaling-plans/model/TagFilter.h>
#include <aws/autoscaling-plans/model/TargetTrackingConfiguration.h>
#include <aws/autoscaling-plans/model/UpdateScalingPlanRequest.h>
#include <aws/autoscaling-plans/model/UpdateScalingPlanResult.h>

using AutoScalingPlansIncludeTest = ::testing::Test;

TEST_F(AutoScalingPlansIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AutoScalingPlans::AutoScalingPlansClient>("AutoScalingPlansIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
