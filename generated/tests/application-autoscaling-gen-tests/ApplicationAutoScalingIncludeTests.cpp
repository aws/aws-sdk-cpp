/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/application-autoscaling/ApplicationAutoScalingClient.h>
#include <aws/application-autoscaling/ApplicationAutoScalingEndpointProvider.h>
#include <aws/application-autoscaling/ApplicationAutoScalingEndpointRules.h>
#include <aws/application-autoscaling/ApplicationAutoScalingErrorMarshaller.h>
#include <aws/application-autoscaling/ApplicationAutoScalingErrors.h>
#include <aws/application-autoscaling/ApplicationAutoScalingRequest.h>
#include <aws/application-autoscaling/ApplicationAutoScalingServiceClientModel.h>
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/model/AdjustmentType.h>
#include <aws/application-autoscaling/model/Alarm.h>
#include <aws/application-autoscaling/model/CapacityForecast.h>
#include <aws/application-autoscaling/model/CustomizedMetricSpecification.h>
#include <aws/application-autoscaling/model/DeleteScalingPolicyRequest.h>
#include <aws/application-autoscaling/model/DeleteScalingPolicyResult.h>
#include <aws/application-autoscaling/model/DeleteScheduledActionRequest.h>
#include <aws/application-autoscaling/model/DeleteScheduledActionResult.h>
#include <aws/application-autoscaling/model/DeregisterScalableTargetRequest.h>
#include <aws/application-autoscaling/model/DeregisterScalableTargetResult.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsRequest.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsResult.h>
#include <aws/application-autoscaling/model/DescribeScalingActivitiesRequest.h>
#include <aws/application-autoscaling/model/DescribeScalingActivitiesResult.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesRequest.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesResult.h>
#include <aws/application-autoscaling/model/DescribeScheduledActionsRequest.h>
#include <aws/application-autoscaling/model/DescribeScheduledActionsResult.h>
#include <aws/application-autoscaling/model/GetPredictiveScalingForecastRequest.h>
#include <aws/application-autoscaling/model/GetPredictiveScalingForecastResult.h>
#include <aws/application-autoscaling/model/ListTagsForResourceRequest.h>
#include <aws/application-autoscaling/model/ListTagsForResourceResult.h>
#include <aws/application-autoscaling/model/LoadForecast.h>
#include <aws/application-autoscaling/model/MetricAggregationType.h>
#include <aws/application-autoscaling/model/MetricDimension.h>
#include <aws/application-autoscaling/model/MetricStatistic.h>
#include <aws/application-autoscaling/model/MetricType.h>
#include <aws/application-autoscaling/model/NotScaledReason.h>
#include <aws/application-autoscaling/model/PolicyType.h>
#include <aws/application-autoscaling/model/PredefinedMetricSpecification.h>
#include <aws/application-autoscaling/model/PredictiveScalingCustomizedMetricSpecification.h>
#include <aws/application-autoscaling/model/PredictiveScalingMaxCapacityBreachBehavior.h>
#include <aws/application-autoscaling/model/PredictiveScalingMetric.h>
#include <aws/application-autoscaling/model/PredictiveScalingMetricDataQuery.h>
#include <aws/application-autoscaling/model/PredictiveScalingMetricDimension.h>
#include <aws/application-autoscaling/model/PredictiveScalingMetricSpecification.h>
#include <aws/application-autoscaling/model/PredictiveScalingMetricStat.h>
#include <aws/application-autoscaling/model/PredictiveScalingMode.h>
#include <aws/application-autoscaling/model/PredictiveScalingPolicyConfiguration.h>
#include <aws/application-autoscaling/model/PredictiveScalingPredefinedLoadMetricSpecification.h>
#include <aws/application-autoscaling/model/PredictiveScalingPredefinedMetricPairSpecification.h>
#include <aws/application-autoscaling/model/PredictiveScalingPredefinedScalingMetricSpecification.h>
#include <aws/application-autoscaling/model/PutScalingPolicyRequest.h>
#include <aws/application-autoscaling/model/PutScalingPolicyResult.h>
#include <aws/application-autoscaling/model/PutScheduledActionRequest.h>
#include <aws/application-autoscaling/model/PutScheduledActionResult.h>
#include <aws/application-autoscaling/model/RegisterScalableTargetRequest.h>
#include <aws/application-autoscaling/model/RegisterScalableTargetResult.h>
#include <aws/application-autoscaling/model/ResourceNotFoundException.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <aws/application-autoscaling/model/ScalableTarget.h>
#include <aws/application-autoscaling/model/ScalableTargetAction.h>
#include <aws/application-autoscaling/model/ScalingActivity.h>
#include <aws/application-autoscaling/model/ScalingActivityStatusCode.h>
#include <aws/application-autoscaling/model/ScalingPolicy.h>
#include <aws/application-autoscaling/model/ScheduledAction.h>
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/application-autoscaling/model/StepAdjustment.h>
#include <aws/application-autoscaling/model/StepScalingPolicyConfiguration.h>
#include <aws/application-autoscaling/model/SuspendedState.h>
#include <aws/application-autoscaling/model/TagResourceRequest.h>
#include <aws/application-autoscaling/model/TagResourceResult.h>
#include <aws/application-autoscaling/model/TargetTrackingMetric.h>
#include <aws/application-autoscaling/model/TargetTrackingMetricDataQuery.h>
#include <aws/application-autoscaling/model/TargetTrackingMetricDimension.h>
#include <aws/application-autoscaling/model/TargetTrackingMetricStat.h>
#include <aws/application-autoscaling/model/TargetTrackingScalingPolicyConfiguration.h>
#include <aws/application-autoscaling/model/TooManyTagsException.h>
#include <aws/application-autoscaling/model/UntagResourceRequest.h>
#include <aws/application-autoscaling/model/UntagResourceResult.h>

using ApplicationAutoScalingIncludeTest = ::testing::Test;

TEST_F(ApplicationAutoScalingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ApplicationAutoScaling::ApplicationAutoScalingClient>("ApplicationAutoScalingIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
