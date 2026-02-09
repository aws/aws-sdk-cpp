/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for FSx pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/fsx/FSxClientPagination.h>
#include <aws/fsx/FSxPaginationBase.h>
#include <aws/fsx/model/DescribeDataRepositoryAssociationsPaginationTraits.h>
#include <aws/fsx/model/DescribeStorageVirtualMachinesPaginationTraits.h>
#include <aws/fsx/model/DescribeS3AccessPointAttachmentsPaginationTraits.h>
#include <aws/fsx/model/DescribeFileCachesPaginationTraits.h>
#include <aws/fsx/model/DescribeFileSystemsPaginationTraits.h>
#include <aws/fsx/model/DescribeBackupsPaginationTraits.h>
#include <aws/fsx/model/DescribeVolumesPaginationTraits.h>
#include <aws/fsx/model/ListTagsForResourcePaginationTraits.h>
#include <aws/fsx/model/DescribeFileSystemAliasesPaginationTraits.h>
#include <aws/fsx/model/DescribeDataRepositoryTasksPaginationTraits.h>
#include <aws/fsx/model/DescribeSnapshotsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class FSxPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(FSxPaginationCompilationTest, FSxPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
