/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ApplicationDiscoveryService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/discovery/ApplicationDiscoveryServiceClientPagination.h>
#include <aws/discovery/ApplicationDiscoveryServicePaginationBase.h>
#include <aws/discovery/model/ListConfigurationsPaginationTraits.h>
#include <aws/discovery/model/DescribeImportTasksPaginationTraits.h>
#include <aws/discovery/model/DescribeContinuousExportsPaginationTraits.h>
#include <aws/discovery/model/DescribeTagsPaginationTraits.h>
#include <aws/discovery/model/DescribeAgentsPaginationTraits.h>
#include <aws/discovery/model/DescribeExportTasksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ApplicationDiscoveryServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ApplicationDiscoveryServicePaginationCompilationTest, ApplicationDiscoveryServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
