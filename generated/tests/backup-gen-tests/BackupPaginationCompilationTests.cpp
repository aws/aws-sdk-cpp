/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Backup pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/backup/BackupClientPagination.h>
#include <aws/backup/BackupPaginationBase.h>
#include <aws/backup/model/ListBackupPlanVersionsPaginationTraits.h>
#include <aws/backup/model/ListBackupSelectionsPaginationTraits.h>
#include <aws/backup/model/ListBackupJobSummariesPaginationTraits.h>
#include <aws/backup/model/ListRestoreAccessBackupVaultsPaginationTraits.h>
#include <aws/backup/model/ListIndexedRecoveryPointsPaginationTraits.h>
#include <aws/backup/model/ListProtectedResourcesByBackupVaultPaginationTraits.h>
#include <aws/backup/model/ListReportPlansPaginationTraits.h>
#include <aws/backup/model/ListScanJobSummariesPaginationTraits.h>
#include <aws/backup/model/ListTieringConfigurationsPaginationTraits.h>
#include <aws/backup/model/ListBackupJobsPaginationTraits.h>
#include <aws/backup/model/ListFrameworksPaginationTraits.h>
#include <aws/backup/model/ListRestoreTestingSelectionsPaginationTraits.h>
#include <aws/backup/model/ListRecoveryPointsByLegalHoldPaginationTraits.h>
#include <aws/backup/model/ListProtectedResourcesPaginationTraits.h>
#include <aws/backup/model/ListTagsPaginationTraits.h>
#include <aws/backup/model/ListRecoveryPointsByResourcePaginationTraits.h>
#include <aws/backup/model/ListRestoreJobsByProtectedResourcePaginationTraits.h>
#include <aws/backup/model/ListRestoreJobSummariesPaginationTraits.h>
#include <aws/backup/model/ListBackupPlansPaginationTraits.h>
#include <aws/backup/model/ListCopyJobsPaginationTraits.h>
#include <aws/backup/model/ListCopyJobSummariesPaginationTraits.h>
#include <aws/backup/model/ListRecoveryPointsByBackupVaultPaginationTraits.h>
#include <aws/backup/model/ListRestoreJobsPaginationTraits.h>
#include <aws/backup/model/ListLegalHoldsPaginationTraits.h>
#include <aws/backup/model/ListRestoreTestingPlansPaginationTraits.h>
#include <aws/backup/model/ListBackupVaultsPaginationTraits.h>
#include <aws/backup/model/ListScanJobsPaginationTraits.h>
#include <aws/backup/model/ListBackupPlanTemplatesPaginationTraits.h>
#include <aws/backup/model/ListReportJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BackupPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BackupPaginationCompilationTest, BackupPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
