/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for TranscribeService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/transcribe/TranscribeServiceClientPagination.h>
#include <aws/transcribe/TranscribeServicePaginationBase.h>
#include <aws/transcribe/model/ListMedicalVocabulariesPaginationTraits.h>
#include <aws/transcribe/model/ListVocabulariesPaginationTraits.h>
#include <aws/transcribe/model/ListCallAnalyticsJobsPaginationTraits.h>
#include <aws/transcribe/model/ListMedicalTranscriptionJobsPaginationTraits.h>
#include <aws/transcribe/model/ListVocabularyFiltersPaginationTraits.h>
#include <aws/transcribe/model/ListMedicalScribeJobsPaginationTraits.h>
#include <aws/transcribe/model/ListLanguageModelsPaginationTraits.h>
#include <aws/transcribe/model/ListTranscriptionJobsPaginationTraits.h>
#include <aws/transcribe/model/ListCallAnalyticsCategoriesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class TranscribeServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(TranscribeServicePaginationCompilationTest, TranscribeServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
