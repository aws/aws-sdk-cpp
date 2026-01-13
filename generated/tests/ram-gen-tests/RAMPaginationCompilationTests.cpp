/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for RAM pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ram/RAMClientPagination.h>
#include <aws/ram/RAMPaginationBase.h>
#include <aws/ram/model/ListPermissionAssociationsPaginationTraits.h>
#include <aws/ram/model/ListPendingInvitationResourcesPaginationTraits.h>
#include <aws/ram/model/ListPermissionVersionsPaginationTraits.h>
#include <aws/ram/model/ListPermissionsPaginationTraits.h>
#include <aws/ram/model/GetResourceShareAssociationsPaginationTraits.h>
#include <aws/ram/model/ListReplacePermissionAssociationsWorkPaginationTraits.h>
#include <aws/ram/model/ListResourcesPaginationTraits.h>
#include <aws/ram/model/ListResourceSharePermissionsPaginationTraits.h>
#include <aws/ram/model/ListResourceTypesPaginationTraits.h>
#include <aws/ram/model/GetResourcePoliciesPaginationTraits.h>
#include <aws/ram/model/ListPrincipalsPaginationTraits.h>
#include <aws/ram/model/ListSourceAssociationsPaginationTraits.h>
#include <aws/ram/model/GetResourceShareInvitationsPaginationTraits.h>
#include <aws/ram/model/GetResourceSharesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class RAMPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(RAMPaginationCompilationTest, RAMPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
