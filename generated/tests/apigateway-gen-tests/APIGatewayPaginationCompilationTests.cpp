/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for APIGateway pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/apigateway/APIGatewayClientPagination.h>
#include <aws/apigateway/APIGatewayPaginationBase.h>
#include <aws/apigateway/model/GetResourcesPaginationTraits.h>
#include <aws/apigateway/model/GetModelsPaginationTraits.h>
#include <aws/apigateway/model/GetDomainNamesPaginationTraits.h>
#include <aws/apigateway/model/GetUsagePlanKeysPaginationTraits.h>
#include <aws/apigateway/model/GetVpcLinksPaginationTraits.h>
#include <aws/apigateway/model/GetBasePathMappingsPaginationTraits.h>
#include <aws/apigateway/model/GetUsagePlansPaginationTraits.h>
#include <aws/apigateway/model/GetClientCertificatesPaginationTraits.h>
#include <aws/apigateway/model/GetUsagePaginationTraits.h>
#include <aws/apigateway/model/GetApiKeysPaginationTraits.h>
#include <aws/apigateway/model/GetDeploymentsPaginationTraits.h>
#include <aws/apigateway/model/GetRestApisPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class APIGatewayPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(APIGatewayPaginationCompilationTest, APIGatewayPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
