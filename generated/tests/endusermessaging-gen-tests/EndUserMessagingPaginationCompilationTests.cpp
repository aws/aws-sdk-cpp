/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for EndUserMessaging pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/endusermessaging/EndUserMessagingClientPagination.h>
#include <aws/endusermessaging/EndUserMessagingPaginationBase.h>
#include <aws/endusermessaging/model/ListBrandProfileAttributesPaginationTraits.h>
#include <aws/endusermessaging/model/ListJobsPaginationTraits.h>
#include <aws/endusermessaging/model/ListRegistrationsFromBrandProfilePaginationTraits.h>
#include <aws/endusermessaging/model/ListNotifyCodeConfigurationsPaginationTraits.h>
#include <aws/endusermessaging/model/ListBrandProfilesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class EndUserMessagingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EndUserMessagingPaginationCompilationTest, EndUserMessagingPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
