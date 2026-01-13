/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Schemas pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/schemas/SchemasClientPagination.h>
#include <aws/schemas/SchemasPaginationBase.h>
#include <aws/schemas/model/ListSchemasPaginationTraits.h>
#include <aws/schemas/model/ListSchemaVersionsPaginationTraits.h>
#include <aws/schemas/model/ListDiscoverersPaginationTraits.h>
#include <aws/schemas/model/ListRegistriesPaginationTraits.h>
#include <aws/schemas/model/SearchSchemasPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SchemasPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SchemasPaginationCompilationTest, SchemasPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
