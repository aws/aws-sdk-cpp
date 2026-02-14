/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CleanRoomsML pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cleanroomsml/CleanRoomsMLClientPagination.h>
#include <aws/cleanroomsml/CleanRoomsMLPaginationBase.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelExportJobsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelInferenceJobsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListTrainedModelInferenceJobsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListTrainedModelVersionsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListCollaborationConfiguredModelAlgorithmAssociationsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListAudienceGenerationJobsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListConfiguredModelAlgorithmAssociationsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListConfiguredAudienceModelsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListTrainingDatasetsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListAudienceModelsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListConfiguredModelAlgorithmsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListAudienceExportJobsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListTrainedModelsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListCollaborationMLInputChannelsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListMLInputChannelsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CleanRoomsMLPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CleanRoomsMLPaginationCompilationTest, CleanRoomsMLPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
