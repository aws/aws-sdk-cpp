/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BackupGateway pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/backup-gateway/BackupGatewayClientPagination.h>
#include <aws/backup-gateway/BackupGatewayPaginationBase.h>
#include <aws/backup-gateway/model/ListHypervisorsPaginationTraits.h>
#include <aws/backup-gateway/model/ListGatewaysPaginationTraits.h>
#include <aws/backup-gateway/model/ListVirtualMachinesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BackupGatewayPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BackupGatewayPaginationCompilationTest, BackupGatewayPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
