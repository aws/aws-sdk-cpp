/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DirectoryServiceData pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/directory-service-data/DirectoryServiceDataClientPagination.h>
#include <aws/directory-service-data/DirectoryServiceDataPaginationBase.h>
#include <aws/directory-service-data/model/ListUsersPaginationTraits.h>
#include <aws/directory-service-data/model/ListGroupsPaginationTraits.h>
#include <aws/directory-service-data/model/SearchUsersPaginationTraits.h>
#include <aws/directory-service-data/model/SearchGroupsPaginationTraits.h>
#include <aws/directory-service-data/model/ListGroupMembersPaginationTraits.h>
#include <aws/directory-service-data/model/ListGroupsForMemberPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DirectoryServiceDataPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DirectoryServiceDataPaginationCompilationTest, DirectoryServiceDataPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
