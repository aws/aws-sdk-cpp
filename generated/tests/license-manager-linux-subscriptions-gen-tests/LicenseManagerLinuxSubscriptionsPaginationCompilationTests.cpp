/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for LicenseManagerLinuxSubscriptions pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsClientPagination.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsPaginationBase.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionInstancesPaginationTraits.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionsPaginationTraits.h>
#include <aws/license-manager-linux-subscriptions/model/ListRegisteredSubscriptionProvidersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class LicenseManagerLinuxSubscriptionsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LicenseManagerLinuxSubscriptionsPaginationCompilationTest, LicenseManagerLinuxSubscriptionsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
