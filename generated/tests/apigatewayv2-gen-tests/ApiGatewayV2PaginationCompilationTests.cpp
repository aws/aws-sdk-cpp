/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ApiGatewayV2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/apigatewayv2/ApiGatewayV2ClientPagination.h>
#include <aws/apigatewayv2/ApiGatewayV2PaginationBase.h>
#include <aws/apigatewayv2/model/ListRoutingRulesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ApiGatewayV2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ApiGatewayV2PaginationCompilationTest, ApiGatewayV2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
