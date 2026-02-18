/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for FraudDetector pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/frauddetector/FraudDetectorClientPagination.h>
#include <aws/frauddetector/FraudDetectorPaginationBase.h>
#include <aws/frauddetector/model/GetVariablesPaginationTraits.h>
#include <aws/frauddetector/model/GetBatchImportJobsPaginationTraits.h>
#include <aws/frauddetector/model/GetExternalModelsPaginationTraits.h>
#include <aws/frauddetector/model/ListEventPredictionsPaginationTraits.h>
#include <aws/frauddetector/model/GetOutcomesPaginationTraits.h>
#include <aws/frauddetector/model/GetBatchPredictionJobsPaginationTraits.h>
#include <aws/frauddetector/model/GetEventTypesPaginationTraits.h>
#include <aws/frauddetector/model/GetRulesPaginationTraits.h>
#include <aws/frauddetector/model/GetLabelsPaginationTraits.h>
#include <aws/frauddetector/model/GetListsMetadataPaginationTraits.h>
#include <aws/frauddetector/model/GetListElementsPaginationTraits.h>
#include <aws/frauddetector/model/DescribeModelVersionsPaginationTraits.h>
#include <aws/frauddetector/model/GetModelsPaginationTraits.h>
#include <aws/frauddetector/model/ListTagsForResourcePaginationTraits.h>
#include <aws/frauddetector/model/GetDetectorsPaginationTraits.h>
#include <aws/frauddetector/model/GetEntityTypesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class FraudDetectorPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(FraudDetectorPaginationCompilationTest, FraudDetectorPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
