/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DocDB pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/docdb/DocDBClientPagination.h>
#include <aws/docdb/DocDBPaginationBase.h>
#include <aws/docdb/model/DescribeDBClusterSnapshotsPaginationTraits.h>
#include <aws/docdb/model/DescribeDBClustersPaginationTraits.h>
#include <aws/docdb/model/DescribeDBEngineVersionsPaginationTraits.h>
#include <aws/docdb/model/DescribeEventsPaginationTraits.h>
#include <aws/docdb/model/DescribeCertificatesPaginationTraits.h>
#include <aws/docdb/model/DescribePendingMaintenanceActionsPaginationTraits.h>
#include <aws/docdb/model/DescribeDBClusterParametersPaginationTraits.h>
#include <aws/docdb/model/DescribeOrderableDBInstanceOptionsPaginationTraits.h>
#include <aws/docdb/model/DescribeEventSubscriptionsPaginationTraits.h>
#include <aws/docdb/model/DescribeGlobalClustersPaginationTraits.h>
#include <aws/docdb/model/DescribeDBClusterParameterGroupsPaginationTraits.h>
#include <aws/docdb/model/DescribeDBInstancesPaginationTraits.h>
#include <aws/docdb/model/DescribeDBSubnetGroupsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DocDBPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DocDBPaginationCompilationTest, DocDBPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
