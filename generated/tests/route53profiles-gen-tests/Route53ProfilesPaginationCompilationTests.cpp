/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Route53Profiles pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/route53profiles/Route53ProfilesClientPagination.h>
#include <aws/route53profiles/Route53ProfilesPaginationBase.h>
#include <aws/route53profiles/model/ListProfileAssociationsPaginationTraits.h>
#include <aws/route53profiles/model/ListProfileResourceAssociationsPaginationTraits.h>
#include <aws/route53profiles/model/ListProfilesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class Route53ProfilesPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(Route53ProfilesPaginationCompilationTest, Route53ProfilesPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
