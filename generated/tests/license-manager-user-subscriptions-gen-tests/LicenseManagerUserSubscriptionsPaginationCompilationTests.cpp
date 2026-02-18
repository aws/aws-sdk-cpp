/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for LicenseManagerUserSubscriptions pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsClientPagination.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsPaginationBase.h>
#include <aws/license-manager-user-subscriptions/model/ListUserAssociationsPaginationTraits.h>
#include <aws/license-manager-user-subscriptions/model/ListProductSubscriptionsPaginationTraits.h>
#include <aws/license-manager-user-subscriptions/model/ListInstancesPaginationTraits.h>
#include <aws/license-manager-user-subscriptions/model/ListLicenseServerEndpointsPaginationTraits.h>
#include <aws/license-manager-user-subscriptions/model/ListIdentityProvidersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class LicenseManagerUserSubscriptionsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LicenseManagerUserSubscriptionsPaginationCompilationTest, LicenseManagerUserSubscriptionsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
