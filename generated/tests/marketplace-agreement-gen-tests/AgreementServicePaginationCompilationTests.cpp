/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AgreementService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/marketplace-agreement/AgreementServiceClientPagination.h>
#include <aws/marketplace-agreement/AgreementServicePaginationBase.h>
#include <aws/marketplace-agreement/model/SearchAgreementsPaginationTraits.h>
#include <aws/marketplace-agreement/model/GetAgreementTermsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AgreementServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AgreementServicePaginationCompilationTest, AgreementServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
