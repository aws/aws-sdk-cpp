/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for WorkSpacesWeb pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/workspaces-web/WorkSpacesWebClientPagination.h>
#include <aws/workspaces-web/WorkSpacesWebPaginationBase.h>
#include <aws/workspaces-web/model/ListPortalsPaginationTraits.h>
#include <aws/workspaces-web/model/ListBrowserSettingsPaginationTraits.h>
#include <aws/workspaces-web/model/ListSessionLoggersPaginationTraits.h>
#include <aws/workspaces-web/model/ListIpAccessSettingsPaginationTraits.h>
#include <aws/workspaces-web/model/ListNetworkSettingsPaginationTraits.h>
#include <aws/workspaces-web/model/ListUserAccessLoggingSettingsPaginationTraits.h>
#include <aws/workspaces-web/model/ListDataProtectionSettingsPaginationTraits.h>
#include <aws/workspaces-web/model/ListUserSettingsPaginationTraits.h>
#include <aws/workspaces-web/model/ListIdentityProvidersPaginationTraits.h>
#include <aws/workspaces-web/model/ListSessionsPaginationTraits.h>
#include <aws/workspaces-web/model/ListTrustStoresPaginationTraits.h>
#include <aws/workspaces-web/model/ListTrustStoreCertificatesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class WorkSpacesWebPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(WorkSpacesWebPaginationCompilationTest, WorkSpacesWebPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
