/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Comprehend pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/comprehend/ComprehendClientPagination.h>
#include <aws/comprehend/ComprehendPaginationBase.h>
#include <aws/comprehend/model/ListFlywheelIterationHistoryPaginationTraits.h>
#include <aws/comprehend/model/ListEntitiesDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListPiiEntitiesDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListEntityRecognizersPaginationTraits.h>
#include <aws/comprehend/model/ListKeyPhrasesDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListDatasetsPaginationTraits.h>
#include <aws/comprehend/model/ListFlywheelsPaginationTraits.h>
#include <aws/comprehend/model/ListTopicsDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListEntityRecognizerSummariesPaginationTraits.h>
#include <aws/comprehend/model/ListEventsDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListSentimentDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListDominantLanguageDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListDocumentClassificationJobsPaginationTraits.h>
#include <aws/comprehend/model/ListTargetedSentimentDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListDocumentClassifiersPaginationTraits.h>
#include <aws/comprehend/model/ListEndpointsPaginationTraits.h>
#include <aws/comprehend/model/ListDocumentClassifierSummariesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ComprehendPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ComprehendPaginationCompilationTest, ComprehendPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
