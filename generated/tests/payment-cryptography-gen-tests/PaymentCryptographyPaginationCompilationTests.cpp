/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PaymentCryptography pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/payment-cryptography/PaymentCryptographyClientPagination.h>
#include <aws/payment-cryptography/PaymentCryptographyPaginationBase.h>
#include <aws/payment-cryptography/model/ListAliasesPaginationTraits.h>
#include <aws/payment-cryptography/model/ListKeysPaginationTraits.h>
#include <aws/payment-cryptography/model/ListTagsForResourcePaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PaymentCryptographyPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PaymentCryptographyPaginationCompilationTest, PaymentCryptographyPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
