/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for kendra pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/kendra/KendraClientPagination.h>
#include <aws/kendra/KendraPaginationBase.h>
#include <aws/kendra/model/ListQuerySuggestionsBlockListsPaginationTraits.h>
#include <aws/kendra/model/ListExperiencesPaginationTraits.h>
#include <aws/kendra/model/GetSnapshotsPaginationTraits.h>
#include <aws/kendra/model/ListExperienceEntitiesPaginationTraits.h>
#include <aws/kendra/model/ListGroupsOlderThanOrderingIdPaginationTraits.h>
#include <aws/kendra/model/ListEntityPersonasPaginationTraits.h>
#include <aws/kendra/model/ListDataSourceSyncJobsPaginationTraits.h>
#include <aws/kendra/model/ListIndicesPaginationTraits.h>
#include <aws/kendra/model/ListFaqsPaginationTraits.h>
#include <aws/kendra/model/ListAccessControlConfigurationsPaginationTraits.h>
#include <aws/kendra/model/ListDataSourcesPaginationTraits.h>
#include <aws/kendra/model/ListThesauriPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class kendraPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(kendraPaginationCompilationTest, kendraPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
