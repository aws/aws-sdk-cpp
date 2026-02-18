/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for KMS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/kms/KMSClientPagination.h>
#include <aws/kms/KMSPaginationBase.h>
#include <aws/kms/model/ListAliasesPaginationTraits.h>
#include <aws/kms/model/ListKeyPoliciesPaginationTraits.h>
#include <aws/kms/model/ListRetirableGrantsPaginationTraits.h>
#include <aws/kms/model/ListResourceTagsPaginationTraits.h>
#include <aws/kms/model/ListGrantsPaginationTraits.h>
#include <aws/kms/model/DescribeCustomKeyStoresPaginationTraits.h>
#include <aws/kms/model/ListKeyRotationsPaginationTraits.h>
#include <aws/kms/model/ListKeysPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class KMSPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(KMSPaginationCompilationTest, KMSPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
