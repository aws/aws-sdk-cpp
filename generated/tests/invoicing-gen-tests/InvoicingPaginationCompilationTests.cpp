/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Invoicing pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/invoicing/InvoicingClientPagination.h>
#include <aws/invoicing/InvoicingPaginationBase.h>
#include <aws/invoicing/model/ListProcurementPortalPreferencesPaginationTraits.h>
#include <aws/invoicing/model/ListInvoiceUnitsPaginationTraits.h>
#include <aws/invoicing/model/ListInvoiceSummariesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class InvoicingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(InvoicingPaginationCompilationTest, InvoicingPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
