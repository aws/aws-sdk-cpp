/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ELBProxy pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/elb-proxy/ELBProxyClientPagination.h>
#include <aws/elb-proxy/ELBProxyPaginationBase.h>
#include <aws/elb-proxy/model/ListProxiesPaginationTraits.h>
#include <aws/elb-proxy/model/ListProxyUpdatesPaginationTraits.h>
#include <aws/elb-proxy/model/ListCertificateAssociationsPaginationTraits.h>
#include <aws/elb-proxy/model/ListProxyVersionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ELBProxyPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ELBProxyPaginationCompilationTest, ELBProxyPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
