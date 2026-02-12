/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SocialMessaging pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/socialmessaging/SocialMessagingClientPagination.h>
#include <aws/socialmessaging/SocialMessagingPaginationBase.h>
#include <aws/socialmessaging/model/ListLinkedWhatsAppBusinessAccountsPaginationTraits.h>
#include <aws/socialmessaging/model/ListWhatsAppMessageTemplatesPaginationTraits.h>
#include <aws/socialmessaging/model/ListWhatsAppTemplateLibraryPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SocialMessagingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SocialMessagingPaginationCompilationTest, SocialMessagingPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
