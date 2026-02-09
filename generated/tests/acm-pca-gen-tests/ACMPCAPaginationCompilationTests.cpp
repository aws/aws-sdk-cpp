/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ACMPCA pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/acm-pca/ACMPCAClientPagination.h>
#include <aws/acm-pca/ACMPCAPaginationBase.h>
#include <aws/acm-pca/model/ListCertificateAuthoritiesPaginationTraits.h>
#include <aws/acm-pca/model/ListTagsPaginationTraits.h>
#include <aws/acm-pca/model/ListPermissionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ACMPCAPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ACMPCAPaginationCompilationTest, ACMPCAPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
