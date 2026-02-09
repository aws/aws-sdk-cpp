/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Amplify pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/amplify/AmplifyClientPagination.h>
#include <aws/amplify/AmplifyPaginationBase.h>
#include <aws/amplify/model/ListJobsPaginationTraits.h>
#include <aws/amplify/model/ListBranchesPaginationTraits.h>
#include <aws/amplify/model/ListDomainAssociationsPaginationTraits.h>
#include <aws/amplify/model/ListAppsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AmplifyPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AmplifyPaginationCompilationTest, AmplifyPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
