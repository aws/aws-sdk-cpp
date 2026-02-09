/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for LexModelsV2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/lexv2-models/LexModelsV2ClientPagination.h>
#include <aws/lexv2-models/LexModelsV2PaginationBase.h>
#include <aws/lexv2-models/model/ListIntentStageMetricsPaginationTraits.h>
#include <aws/lexv2-models/model/ListBuiltInIntentsPaginationTraits.h>
#include <aws/lexv2-models/model/ListCustomVocabularyItemsPaginationTraits.h>
#include <aws/lexv2-models/model/ListUtteranceMetricsPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotResourceGenerationsPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotAliasesPaginationTraits.h>
#include <aws/lexv2-models/model/ListRecommendedIntentsPaginationTraits.h>
#include <aws/lexv2-models/model/ListExportsPaginationTraits.h>
#include <aws/lexv2-models/model/ListUtteranceAnalyticsDataPaginationTraits.h>
#include <aws/lexv2-models/model/ListBuiltInSlotTypesPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotVersionReplicasPaginationTraits.h>
#include <aws/lexv2-models/model/ListTestExecutionsPaginationTraits.h>
#include <aws/lexv2-models/model/ListSlotTypesPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotVersionsPaginationTraits.h>
#include <aws/lexv2-models/model/ListSessionAnalyticsDataPaginationTraits.h>
#include <aws/lexv2-models/model/ListTestExecutionResultItemsPaginationTraits.h>
#include <aws/lexv2-models/model/ListAggregatedUtterancesPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotRecommendationsPaginationTraits.h>
#include <aws/lexv2-models/model/ListIntentMetricsPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotAliasReplicasPaginationTraits.h>
#include <aws/lexv2-models/model/ListTestSetsPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotLocalesPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotsPaginationTraits.h>
#include <aws/lexv2-models/model/ListImportsPaginationTraits.h>
#include <aws/lexv2-models/model/ListIntentsPaginationTraits.h>
#include <aws/lexv2-models/model/ListTestSetRecordsPaginationTraits.h>
#include <aws/lexv2-models/model/ListSlotsPaginationTraits.h>
#include <aws/lexv2-models/model/ListSessionMetricsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class LexModelsV2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LexModelsV2PaginationCompilationTest, LexModelsV2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
