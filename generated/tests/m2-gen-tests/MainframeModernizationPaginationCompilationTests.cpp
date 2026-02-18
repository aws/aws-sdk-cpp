/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MainframeModernization pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/m2/MainframeModernizationClientPagination.h>
#include <aws/m2/MainframeModernizationPaginationBase.h>
#include <aws/m2/model/ListBatchJobDefinitionsPaginationTraits.h>
#include <aws/m2/model/ListEnvironmentsPaginationTraits.h>
#include <aws/m2/model/ListBatchJobExecutionsPaginationTraits.h>
#include <aws/m2/model/ListDataSetExportHistoryPaginationTraits.h>
#include <aws/m2/model/ListDeploymentsPaginationTraits.h>
#include <aws/m2/model/ListApplicationVersionsPaginationTraits.h>
#include <aws/m2/model/ListApplicationsPaginationTraits.h>
#include <aws/m2/model/ListDataSetImportHistoryPaginationTraits.h>
#include <aws/m2/model/ListDataSetsPaginationTraits.h>
#include <aws/m2/model/ListEngineVersionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MainframeModernizationPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MainframeModernizationPaginationCompilationTest, MainframeModernizationPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
