/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Lambda pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/lambda/LambdaClientPagination.h>
#include <aws/lambda/LambdaPaginationBase.h>
#include <aws/lambda/model/ListCapacityProvidersPaginationTraits.h>
#include <aws/lambda/model/ListFunctionEventInvokeConfigsPaginationTraits.h>
#include <aws/lambda/model/ListProvisionedConcurrencyConfigsPaginationTraits.h>
#include <aws/lambda/model/ListVersionsByFunctionPaginationTraits.h>
#include <aws/lambda/model/ListLayerVersionsPaginationTraits.h>
#include <aws/lambda/model/GetDurableExecutionHistoryPaginationTraits.h>
#include <aws/lambda/model/ListCodeSigningConfigsPaginationTraits.h>
#include <aws/lambda/model/ListLayersPaginationTraits.h>
#include <aws/lambda/model/ListFunctionVersionsByCapacityProviderPaginationTraits.h>
#include <aws/lambda/model/ListFunctionsPaginationTraits.h>
#include <aws/lambda/model/ListDurableExecutionsByFunctionPaginationTraits.h>
#include <aws/lambda/model/ListAliasesPaginationTraits.h>
#include <aws/lambda/model/GetDurableExecutionStatePaginationTraits.h>
#include <aws/lambda/model/ListFunctionsByCodeSigningConfigPaginationTraits.h>
#include <aws/lambda/model/ListFunctionUrlConfigsPaginationTraits.h>
#include <aws/lambda/model/ListEventSourceMappingsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class LambdaPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LambdaPaginationCompilationTest, LambdaPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
