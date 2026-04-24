/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for StorageGateway pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/storagegateway/StorageGatewayClientPagination.h>
#include <aws/storagegateway/StorageGatewayPaginationBase.h>
#include <aws/storagegateway/model/DescribeTapesPaginationTraits.h>
#include <aws/storagegateway/model/ListTapePoolsPaginationTraits.h>
#include <aws/storagegateway/model/DescribeTapeRecoveryPointsPaginationTraits.h>
#include <aws/storagegateway/model/ListTagsForResourcePaginationTraits.h>
#include <aws/storagegateway/model/DescribeTapeArchivesPaginationTraits.h>
#include <aws/storagegateway/model/ListGatewaysPaginationTraits.h>
#include <aws/storagegateway/model/ListVolumesPaginationTraits.h>
#include <aws/storagegateway/model/DescribeVTLDevicesPaginationTraits.h>
#include <aws/storagegateway/model/ListFileSharesPaginationTraits.h>
#include <aws/storagegateway/model/ListFileSystemAssociationsPaginationTraits.h>
#include <aws/storagegateway/model/ListCacheReportsPaginationTraits.h>
#include <aws/storagegateway/model/ListTapesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class StorageGatewayPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(StorageGatewayPaginationCompilationTest, StorageGatewayPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
