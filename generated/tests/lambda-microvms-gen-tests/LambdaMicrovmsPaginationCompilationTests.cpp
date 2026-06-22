/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for LambdaMicrovms pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/lambda-microvms/LambdaMicrovmsClientPagination.h>
#include <aws/lambda-microvms/LambdaMicrovmsPaginationBase.h>
#include <aws/lambda-microvms/model/ListMicrovmImagesPaginationTraits.h>
#include <aws/lambda-microvms/model/ListMicrovmImageVersionsPaginationTraits.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImagesPaginationTraits.h>
#include <aws/lambda-microvms/model/ListMicrovmsPaginationTraits.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImageVersionsPaginationTraits.h>
#include <aws/lambda-microvms/model/ListMicrovmImageBuildsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class LambdaMicrovmsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LambdaMicrovmsPaginationCompilationTest, LambdaMicrovmsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
