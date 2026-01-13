/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for GlueDataBrew pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/databrew/GlueDataBrewClientPagination.h>
#include <aws/databrew/GlueDataBrewPaginationBase.h>
#include <aws/databrew/model/ListProjectsPaginationTraits.h>
#include <aws/databrew/model/ListRecipesPaginationTraits.h>
#include <aws/databrew/model/ListJobsPaginationTraits.h>
#include <aws/databrew/model/ListRulesetsPaginationTraits.h>
#include <aws/databrew/model/ListDatasetsPaginationTraits.h>
#include <aws/databrew/model/ListJobRunsPaginationTraits.h>
#include <aws/databrew/model/ListSchedulesPaginationTraits.h>
#include <aws/databrew/model/ListRecipeVersionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class GlueDataBrewPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(GlueDataBrewPaginationCompilationTest, GlueDataBrewPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
