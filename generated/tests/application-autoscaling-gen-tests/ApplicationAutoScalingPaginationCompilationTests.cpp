/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ApplicationAutoScaling pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/application-autoscaling/ApplicationAutoScalingClientPagination.h>
#include <aws/application-autoscaling/ApplicationAutoScalingPaginationBase.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsPaginationTraits.h>
#include <aws/application-autoscaling/model/DescribeScalingActivitiesPaginationTraits.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesPaginationTraits.h>
#include <aws/application-autoscaling/model/DescribeScheduledActionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ApplicationAutoScalingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ApplicationAutoScalingPaginationCompilationTest, ApplicationAutoScalingPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
