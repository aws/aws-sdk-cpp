/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MailManager pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mailmanager/MailManagerClientPagination.h>
#include <aws/mailmanager/MailManagerPaginationBase.h>
#include <aws/mailmanager/model/ListRelaysPaginationTraits.h>
#include <aws/mailmanager/model/ListAddressListImportJobsPaginationTraits.h>
#include <aws/mailmanager/model/ListAddonSubscriptionsPaginationTraits.h>
#include <aws/mailmanager/model/ListRuleSetsPaginationTraits.h>
#include <aws/mailmanager/model/ListArchivesPaginationTraits.h>
#include <aws/mailmanager/model/ListAddonInstancesPaginationTraits.h>
#include <aws/mailmanager/model/ListAddressListsPaginationTraits.h>
#include <aws/mailmanager/model/ListIngressPointsPaginationTraits.h>
#include <aws/mailmanager/model/ListArchiveSearchesPaginationTraits.h>
#include <aws/mailmanager/model/ListMembersOfAddressListPaginationTraits.h>
#include <aws/mailmanager/model/ListArchiveExportsPaginationTraits.h>
#include <aws/mailmanager/model/ListTrafficPoliciesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MailManagerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MailManagerPaginationCompilationTest, MailManagerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
