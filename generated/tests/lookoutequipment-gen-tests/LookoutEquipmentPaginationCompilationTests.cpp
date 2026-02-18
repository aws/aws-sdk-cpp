/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for LookoutEquipment pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/lookoutequipment/LookoutEquipmentClientPagination.h>
#include <aws/lookoutequipment/LookoutEquipmentPaginationBase.h>
#include <aws/lookoutequipment/model/ListDataIngestionJobsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListLabelGroupsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListSensorStatisticsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListInferenceSchedulersPaginationTraits.h>
#include <aws/lookoutequipment/model/ListModelsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListDatasetsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListInferenceEventsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListModelVersionsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListRetrainingSchedulersPaginationTraits.h>
#include <aws/lookoutequipment/model/ListLabelsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListInferenceExecutionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class LookoutEquipmentPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LookoutEquipmentPaginationCompilationTest, LookoutEquipmentPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
