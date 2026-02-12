/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Personalize pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/personalize/PersonalizeClientPagination.h>
#include <aws/personalize/PersonalizePaginationBase.h>
#include <aws/personalize/model/ListEventTrackersPaginationTraits.h>
#include <aws/personalize/model/ListDatasetGroupsPaginationTraits.h>
#include <aws/personalize/model/ListMetricAttributionsPaginationTraits.h>
#include <aws/personalize/model/ListDatasetExportJobsPaginationTraits.h>
#include <aws/personalize/model/ListSchemasPaginationTraits.h>
#include <aws/personalize/model/ListRecommendersPaginationTraits.h>
#include <aws/personalize/model/ListDatasetImportJobsPaginationTraits.h>
#include <aws/personalize/model/ListRecipesPaginationTraits.h>
#include <aws/personalize/model/ListSolutionsPaginationTraits.h>
#include <aws/personalize/model/ListBatchSegmentJobsPaginationTraits.h>
#include <aws/personalize/model/ListCampaignsPaginationTraits.h>
#include <aws/personalize/model/ListMetricAttributionMetricsPaginationTraits.h>
#include <aws/personalize/model/ListDatasetsPaginationTraits.h>
#include <aws/personalize/model/ListBatchInferenceJobsPaginationTraits.h>
#include <aws/personalize/model/ListFiltersPaginationTraits.h>
#include <aws/personalize/model/ListSolutionVersionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PersonalizePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PersonalizePaginationCompilationTest, PersonalizePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
