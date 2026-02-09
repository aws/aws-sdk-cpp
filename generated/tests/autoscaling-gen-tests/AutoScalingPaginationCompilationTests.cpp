/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AutoScaling pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/autoscaling/AutoScalingClientPagination.h>
#include <aws/autoscaling/AutoScalingPaginationBase.h>
#include <aws/autoscaling/model/DescribeTagsPaginationTraits.h>
#include <aws/autoscaling/model/DescribeScheduledActionsPaginationTraits.h>
#include <aws/autoscaling/model/DescribeAutoScalingInstancesPaginationTraits.h>
#include <aws/autoscaling/model/DescribeLoadBalancersPaginationTraits.h>
#include <aws/autoscaling/model/DescribeLaunchConfigurationsPaginationTraits.h>
#include <aws/autoscaling/model/DescribeLoadBalancerTargetGroupsPaginationTraits.h>
#include <aws/autoscaling/model/DescribeWarmPoolPaginationTraits.h>
#include <aws/autoscaling/model/DescribeNotificationConfigurationsPaginationTraits.h>
#include <aws/autoscaling/model/DescribeInstanceRefreshesPaginationTraits.h>
#include <aws/autoscaling/model/DescribeTrafficSourcesPaginationTraits.h>
#include <aws/autoscaling/model/DescribePoliciesPaginationTraits.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsPaginationTraits.h>
#include <aws/autoscaling/model/DescribeScalingActivitiesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AutoScalingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AutoScalingPaginationCompilationTest, AutoScalingPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
