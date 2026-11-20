/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Payments pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/payments/PaymentsClientPagination.h>
#include <aws/payments/PaymentsPaginationBase.h>
#include <aws/payments/model/GetAccountBalancePaginationTraits.h>
#include <aws/payments/model/ListPaymentInstrumentsPaginationTraits.h>
#include <aws/payments/model/ListFinancialRecordsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PaymentsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PaymentsPaginationCompilationTest, PaymentsPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
