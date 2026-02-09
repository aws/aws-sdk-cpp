/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BackupSearch pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/backupsearch/BackupSearchClientPagination.h>
#include <aws/backupsearch/BackupSearchPaginationBase.h>
#include <aws/backupsearch/model/ListSearchResultExportJobsPaginationTraits.h>
#include <aws/backupsearch/model/ListSearchJobBackupsPaginationTraits.h>
#include <aws/backupsearch/model/ListSearchJobResultsPaginationTraits.h>
#include <aws/backupsearch/model/ListSearchJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BackupSearchPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BackupSearchPaginationCompilationTest, BackupSearchPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
