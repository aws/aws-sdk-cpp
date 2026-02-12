/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Neptune pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/neptune/NeptuneClientPagination.h>
#include <aws/neptune/NeptunePaginationBase.h>
#include <aws/neptune/model/DescribeDBClusterEndpointsPaginationTraits.h>
#include <aws/neptune/model/DescribeEventsPaginationTraits.h>
#include <aws/neptune/model/DescribeDBParameterGroupsPaginationTraits.h>
#include <aws/neptune/model/DescribeDBParametersPaginationTraits.h>
#include <aws/neptune/model/DescribeDBInstancesPaginationTraits.h>
#include <aws/neptune/model/DescribeDBClusterParametersPaginationTraits.h>
#include <aws/neptune/model/DescribeDBClustersPaginationTraits.h>
#include <aws/neptune/model/DescribeDBClusterParameterGroupsPaginationTraits.h>
#include <aws/neptune/model/DescribeDBEngineVersionsPaginationTraits.h>
#include <aws/neptune/model/DescribePendingMaintenanceActionsPaginationTraits.h>
#include <aws/neptune/model/DescribeEngineDefaultParametersPaginationTraits.h>
#include <aws/neptune/model/DescribeDBSubnetGroupsPaginationTraits.h>
#include <aws/neptune/model/DescribeDBClusterSnapshotsPaginationTraits.h>
#include <aws/neptune/model/DescribeEventSubscriptionsPaginationTraits.h>
#include <aws/neptune/model/DescribeGlobalClustersPaginationTraits.h>
#include <aws/neptune/model/DescribeOrderableDBInstanceOptionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class NeptunePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(NeptunePaginationCompilationTest, NeptunePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
