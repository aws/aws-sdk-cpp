/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Translate pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/translate/TranslateClientPagination.h>
#include <aws/translate/TranslatePaginationBase.h>
#include <aws/translate/model/ListLanguagesPaginationTraits.h>
#include <aws/translate/model/ListParallelDataPaginationTraits.h>
#include <aws/translate/model/ListTerminologiesPaginationTraits.h>
#include <aws/translate/model/ListTextTranslationJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class TranslatePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(TranslatePaginationCompilationTest, TranslatePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
