/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ServiceDiscovery pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/servicediscovery/ServiceDiscoveryClientPagination.h>
#include <aws/servicediscovery/ServiceDiscoveryPaginationBase.h>
#include <aws/servicediscovery/model/ListOperationsPaginationTraits.h>
#include <aws/servicediscovery/model/ListInstancesPaginationTraits.h>
#include <aws/servicediscovery/model/ListNamespacesPaginationTraits.h>
#include <aws/servicediscovery/model/GetInstancesHealthStatusPaginationTraits.h>
#include <aws/servicediscovery/model/ListServicesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ServiceDiscoveryPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ServiceDiscoveryPaginationCompilationTest, ServiceDiscoveryPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
