/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for EntityResolution pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/entityresolution/EntityResolutionClientPagination.h>
#include <aws/entityresolution/EntityResolutionPaginationBase.h>
#include <aws/entityresolution/model/ListMatchingJobsPaginationTraits.h>
#include <aws/entityresolution/model/ListSchemaMappingsPaginationTraits.h>
#include <aws/entityresolution/model/ListIdMappingJobsPaginationTraits.h>
#include <aws/entityresolution/model/ListIdNamespacesPaginationTraits.h>
#include <aws/entityresolution/model/ListMatchingWorkflowsPaginationTraits.h>
#include <aws/entityresolution/model/ListIdMappingWorkflowsPaginationTraits.h>
#include <aws/entityresolution/model/ListProviderServicesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class EntityResolutionPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EntityResolutionPaginationCompilationTest, EntityResolutionPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
