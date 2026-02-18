/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CodeArtifact pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/codeartifact/CodeArtifactClientPagination.h>
#include <aws/codeartifact/CodeArtifactPaginationBase.h>
#include <aws/codeartifact/model/ListPackagesPaginationTraits.h>
#include <aws/codeartifact/model/ListPackageGroupsPaginationTraits.h>
#include <aws/codeartifact/model/ListPackageVersionsPaginationTraits.h>
#include <aws/codeartifact/model/ListSubPackageGroupsPaginationTraits.h>
#include <aws/codeartifact/model/ListAllowedRepositoriesForGroupPaginationTraits.h>
#include <aws/codeartifact/model/ListRepositoriesInDomainPaginationTraits.h>
#include <aws/codeartifact/model/ListDomainsPaginationTraits.h>
#include <aws/codeartifact/model/ListPackageVersionAssetsPaginationTraits.h>
#include <aws/codeartifact/model/ListRepositoriesPaginationTraits.h>
#include <aws/codeartifact/model/ListAssociatedPackagesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CodeArtifactPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CodeArtifactPaginationCompilationTest, CodeArtifactPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
