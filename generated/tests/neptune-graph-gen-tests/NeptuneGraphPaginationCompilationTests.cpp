/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for NeptuneGraph pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/neptune-graph/NeptuneGraphClientPagination.h>
#include <aws/neptune-graph/NeptuneGraphPaginationBase.h>
#include <aws/neptune-graph/model/ListImportTasksPaginationTraits.h>
#include <aws/neptune-graph/model/ListGraphSnapshotsPaginationTraits.h>
#include <aws/neptune-graph/model/ListPrivateGraphEndpointsPaginationTraits.h>
#include <aws/neptune-graph/model/ListGraphsPaginationTraits.h>
#include <aws/neptune-graph/model/ListExportTasksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class NeptuneGraphPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(NeptuneGraphPaginationCompilationTest, NeptuneGraphPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
