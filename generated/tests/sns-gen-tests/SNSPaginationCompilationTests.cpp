/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SNS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/sns/SNSClientPagination.h>
#include <aws/sns/SNSPaginationBase.h>
#include <aws/sns/model/ListPhoneNumbersOptedOutPaginationTraits.h>
#include <aws/sns/model/ListSubscriptionsByTopicPaginationTraits.h>
#include <aws/sns/model/ListSMSSandboxPhoneNumbersPaginationTraits.h>
#include <aws/sns/model/ListTopicsPaginationTraits.h>
#include <aws/sns/model/ListSubscriptionsPaginationTraits.h>
#include <aws/sns/model/ListOriginationNumbersPaginationTraits.h>
#include <aws/sns/model/ListPlatformApplicationsPaginationTraits.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SNSPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SNSPaginationCompilationTest, SNSPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
