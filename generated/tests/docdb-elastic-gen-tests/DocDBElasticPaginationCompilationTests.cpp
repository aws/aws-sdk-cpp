/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DocDBElastic pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/docdb-elastic/DocDBElasticClientPagination.h>
#include <aws/docdb-elastic/DocDBElasticPaginationBase.h>
#include <aws/docdb-elastic/model/ListPendingMaintenanceActionsPaginationTraits.h>
#include <aws/docdb-elastic/model/ListClusterSnapshotsPaginationTraits.h>
#include <aws/docdb-elastic/model/ListClustersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DocDBElasticPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DocDBElasticPaginationCompilationTest, DocDBElasticPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
