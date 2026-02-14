/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ECS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ecs/ECSClientPagination.h>
#include <aws/ecs/ECSPaginationBase.h>
#include <aws/ecs/model/ListTaskDefinitionsPaginationTraits.h>
#include <aws/ecs/model/ListAttributesPaginationTraits.h>
#include <aws/ecs/model/ListClustersPaginationTraits.h>
#include <aws/ecs/model/ListContainerInstancesPaginationTraits.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesPaginationTraits.h>
#include <aws/ecs/model/ListServicesByNamespacePaginationTraits.h>
#include <aws/ecs/model/ListTasksPaginationTraits.h>
#include <aws/ecs/model/ListServicesPaginationTraits.h>
#include <aws/ecs/model/ListAccountSettingsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ECSPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ECSPaginationCompilationTest, ECSPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
