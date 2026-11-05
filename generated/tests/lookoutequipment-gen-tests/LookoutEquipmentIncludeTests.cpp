/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/lookoutequipment/LookoutEquipmentClient.h>
#include <aws/lookoutequipment/LookoutEquipmentEndpointProvider.h>
#include <aws/lookoutequipment/LookoutEquipmentErrorMarshaller.h>
#include <aws/lookoutequipment/LookoutEquipmentErrors.h>
#include <aws/lookoutequipment/LookoutEquipmentPaginationBase.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/lookoutequipment/LookoutEquipmentServiceClientModel.h>
#include <aws/lookoutequipment/LookoutEquipmentWaiter.h>
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/internal/LookoutEquipmentEndpointRules.h>
#include <aws/lookoutequipment/model/AutoPromotionResult.h>
#include <aws/lookoutequipment/model/CategoricalValues.h>
#include <aws/lookoutequipment/model/CountPercent.h>
#include <aws/lookoutequipment/model/DataIngestionJobSummary.h>
#include <aws/lookoutequipment/model/DataPreProcessingConfiguration.h>
#include <aws/lookoutequipment/model/DataQualitySummary.h>
#include <aws/lookoutequipment/model/DataUploadFrequency.h>
#include <aws/lookoutequipment/model/DatasetSchema.h>
#include <aws/lookoutequipment/model/DatasetStatus.h>
#include <aws/lookoutequipment/model/DatasetSummary.h>
#include <aws/lookoutequipment/model/DuplicateTimestamps.h>
#include <aws/lookoutequipment/model/InferenceDataImportStrategy.h>
#include <aws/lookoutequipment/model/InferenceEventSummary.h>
#include <aws/lookoutequipment/model/InferenceExecutionStatus.h>
#include <aws/lookoutequipment/model/InferenceExecutionSummary.h>
#include <aws/lookoutequipment/model/InferenceInputConfiguration.h>
#include <aws/lookoutequipment/model/InferenceInputNameConfiguration.h>
#include <aws/lookoutequipment/model/InferenceOutputConfiguration.h>
#include <aws/lookoutequipment/model/InferenceS3InputConfiguration.h>
#include <aws/lookoutequipment/model/InferenceS3OutputConfiguration.h>
#include <aws/lookoutequipment/model/InferenceSchedulerStatus.h>
#include <aws/lookoutequipment/model/InferenceSchedulerSummary.h>
#include <aws/lookoutequipment/model/IngestedFilesSummary.h>
#include <aws/lookoutequipment/model/IngestionInputConfiguration.h>
#include <aws/lookoutequipment/model/IngestionJobStatus.h>
#include <aws/lookoutequipment/model/IngestionS3InputConfiguration.h>
#include <aws/lookoutequipment/model/InsufficientSensorData.h>
#include <aws/lookoutequipment/model/InvalidSensorData.h>
#include <aws/lookoutequipment/model/LabelGroupSummary.h>
#include <aws/lookoutequipment/model/LabelRating.h>
#include <aws/lookoutequipment/model/LabelSummary.h>
#include <aws/lookoutequipment/model/LabelsInputConfiguration.h>
#include <aws/lookoutequipment/model/LabelsS3InputConfiguration.h>
#include <aws/lookoutequipment/model/LargeTimestampGaps.h>
#include <aws/lookoutequipment/model/LatestInferenceResult.h>
#include <aws/lookoutequipment/model/MissingCompleteSensorData.h>
#include <aws/lookoutequipment/model/MissingSensorData.h>
#include <aws/lookoutequipment/model/ModelDiagnosticsOutputConfiguration.h>
#include <aws/lookoutequipment/model/ModelDiagnosticsS3OutputConfiguration.h>
#include <aws/lookoutequipment/model/ModelPromoteMode.h>
#include <aws/lookoutequipment/model/ModelQuality.h>
#include <aws/lookoutequipment/model/ModelStatus.h>
#include <aws/lookoutequipment/model/ModelSummary.h>
#include <aws/lookoutequipment/model/ModelVersionSourceType.h>
#include <aws/lookoutequipment/model/ModelVersionStatus.h>
#include <aws/lookoutequipment/model/ModelVersionSummary.h>
#include <aws/lookoutequipment/model/MonotonicValues.h>
#include <aws/lookoutequipment/model/Monotonicity.h>
#include <aws/lookoutequipment/model/MultipleOperatingModes.h>
#include <aws/lookoutequipment/model/RetrainingSchedulerStatus.h>
#include <aws/lookoutequipment/model/RetrainingSchedulerSummary.h>
#include <aws/lookoutequipment/model/S3Object.h>
#include <aws/lookoutequipment/model/SensorStatisticsSummary.h>
#include <aws/lookoutequipment/model/SensorsWithShortDateRange.h>
#include <aws/lookoutequipment/model/StatisticalIssueStatus.h>
#include <aws/lookoutequipment/model/Tag.h>
#include <aws/lookoutequipment/model/TargetSamplingRate.h>
#include <aws/lookoutequipment/model/UnsupportedTimestamps.h>

using LookoutEquipmentIncludeTest = ::testing::Test;

TEST_F(LookoutEquipmentIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::LookoutEquipment::LookoutEquipmentClient>("LookoutEquipmentIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
