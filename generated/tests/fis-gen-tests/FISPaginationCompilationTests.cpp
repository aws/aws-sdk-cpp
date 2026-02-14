/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for FIS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/fis/FISClientPagination.h>
#include <aws/fis/FISPaginationBase.h>
#include <aws/fis/model/ListExperimentTemplatesPaginationTraits.h>
#include <aws/fis/model/ListActionsPaginationTraits.h>
#include <aws/fis/model/ListExperimentsPaginationTraits.h>
#include <aws/fis/model/ListTargetResourceTypesPaginationTraits.h>
#include <aws/fis/model/ListExperimentResolvedTargetsPaginationTraits.h>
#include <aws/fis/model/ListTargetAccountConfigurationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class FISPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(FISPaginationCompilationTest, FISPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
