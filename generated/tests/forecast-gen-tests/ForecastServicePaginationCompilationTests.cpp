/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ForecastService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/forecast/ForecastServiceClientPagination.h>
#include <aws/forecast/ForecastServicePaginationBase.h>
#include <aws/forecast/model/ListWhatIfAnalysesPaginationTraits.h>
#include <aws/forecast/model/ListPredictorsPaginationTraits.h>
#include <aws/forecast/model/ListPredictorBacktestExportJobsPaginationTraits.h>
#include <aws/forecast/model/ListMonitorsPaginationTraits.h>
#include <aws/forecast/model/ListDatasetsPaginationTraits.h>
#include <aws/forecast/model/ListMonitorEvaluationsPaginationTraits.h>
#include <aws/forecast/model/ListWhatIfForecastExportsPaginationTraits.h>
#include <aws/forecast/model/ListDatasetImportJobsPaginationTraits.h>
#include <aws/forecast/model/ListWhatIfForecastsPaginationTraits.h>
#include <aws/forecast/model/ListExplainabilityExportsPaginationTraits.h>
#include <aws/forecast/model/ListForecastsPaginationTraits.h>
#include <aws/forecast/model/ListDatasetGroupsPaginationTraits.h>
#include <aws/forecast/model/ListForecastExportJobsPaginationTraits.h>
#include <aws/forecast/model/ListExplainabilitiesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ForecastServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ForecastServicePaginationCompilationTest, ForecastServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
