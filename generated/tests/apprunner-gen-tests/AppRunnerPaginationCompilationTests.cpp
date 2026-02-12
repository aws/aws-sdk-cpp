/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AppRunner pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/apprunner/AppRunnerClientPagination.h>
#include <aws/apprunner/AppRunnerPaginationBase.h>
#include <aws/apprunner/model/ListServicesForAutoScalingConfigurationPaginationTraits.h>
#include <aws/apprunner/model/ListVpcConnectorsPaginationTraits.h>
#include <aws/apprunner/model/ListObservabilityConfigurationsPaginationTraits.h>
#include <aws/apprunner/model/ListOperationsPaginationTraits.h>
#include <aws/apprunner/model/ListConnectionsPaginationTraits.h>
#include <aws/apprunner/model/ListAutoScalingConfigurationsPaginationTraits.h>
#include <aws/apprunner/model/ListServicesPaginationTraits.h>
#include <aws/apprunner/model/DescribeCustomDomainsPaginationTraits.h>
#include <aws/apprunner/model/ListVpcIngressConnectionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AppRunnerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AppRunnerPaginationCompilationTest, AppRunnerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
