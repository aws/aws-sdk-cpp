/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for WorkMail pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/workmail/WorkMailClientPagination.h>
#include <aws/workmail/WorkMailPaginationBase.h>
#include <aws/workmail/model/ListResourceDelegatesPaginationTraits.h>
#include <aws/workmail/model/ListGroupsPaginationTraits.h>
#include <aws/workmail/model/ListMailboxExportJobsPaginationTraits.h>
#include <aws/workmail/model/ListUsersPaginationTraits.h>
#include <aws/workmail/model/ListAvailabilityConfigurationsPaginationTraits.h>
#include <aws/workmail/model/ListAliasesPaginationTraits.h>
#include <aws/workmail/model/ListGroupsForEntityPaginationTraits.h>
#include <aws/workmail/model/ListGroupMembersPaginationTraits.h>
#include <aws/workmail/model/ListImpersonationRolesPaginationTraits.h>
#include <aws/workmail/model/ListMobileDeviceAccessOverridesPaginationTraits.h>
#include <aws/workmail/model/ListMailDomainsPaginationTraits.h>
#include <aws/workmail/model/ListOrganizationsPaginationTraits.h>
#include <aws/workmail/model/ListMailboxPermissionsPaginationTraits.h>
#include <aws/workmail/model/ListPersonalAccessTokensPaginationTraits.h>
#include <aws/workmail/model/ListResourcesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class WorkMailPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(WorkMailPaginationCompilationTest, WorkMailPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
