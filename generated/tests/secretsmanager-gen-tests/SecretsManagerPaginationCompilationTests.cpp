/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SecretsManager pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/secretsmanager/SecretsManagerClientPagination.h>
#include <aws/secretsmanager/SecretsManagerPaginationBase.h>
#include <aws/secretsmanager/model/BatchGetSecretValuePaginationTraits.h>
#include <aws/secretsmanager/model/ListSecretsPaginationTraits.h>
#include <aws/secretsmanager/model/ListSecretVersionIdsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SecretsManagerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SecretsManagerPaginationCompilationTest, SecretsManagerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
