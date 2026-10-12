/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/TrainingSessionDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

TrainingSessionDetail::TrainingSessionDetail(JsonView jsonValue) { *this = jsonValue; }

TrainingSessionDetail& TrainingSessionDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TrainingSessionArn")) {
    m_trainingSessionArn = jsonValue.GetString("TrainingSessionArn");
    m_trainingSessionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrainingSessionName")) {
    m_trainingSessionName = jsonValue.GetString("TrainingSessionName");
    m_trainingSessionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrainingSessionStatus")) {
    m_trainingSessionStatus = TrainingSessionStatusMapper::GetTrainingSessionStatusForName(jsonValue.GetString("TrainingSessionStatus"));
    m_trainingSessionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelPackageGroupArn")) {
    m_modelPackageGroupArn = jsonValue.GetString("ModelPackageGroupArn");
    m_modelPackageGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorDetails")) {
    m_errorDetails = jsonValue.GetString("ErrorDetails");
    m_errorDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastReceivedSequenceNumber")) {
    m_lastReceivedSequenceNumber = jsonValue.GetInteger("LastReceivedSequenceNumber");
    m_lastReceivedSequenceNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BillableTokenUsage")) {
    m_billableTokenUsage = jsonValue.GetObject("BillableTokenUsage");
    m_billableTokenUsageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VpcConfig")) {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LoraConfig")) {
    m_loraConfig = jsonValue.GetObject("LoraConfig");
    m_loraConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelConfig")) {
    m_modelConfig = jsonValue.GetObject("ModelConfig");
    m_modelConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutputConfig")) {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingSessionDetail::Jsonize() const {
  JsonValue payload;

  if (m_trainingSessionArnHasBeenSet) {
    payload.WithString("TrainingSessionArn", m_trainingSessionArn);
  }

  if (m_trainingSessionNameHasBeenSet) {
    payload.WithString("TrainingSessionName", m_trainingSessionName);
  }

  if (m_trainingSessionStatusHasBeenSet) {
    payload.WithString("TrainingSessionStatus", TrainingSessionStatusMapper::GetNameForTrainingSessionStatus(m_trainingSessionStatus));
  }

  if (m_modelPackageGroupArnHasBeenSet) {
    payload.WithString("ModelPackageGroupArn", m_modelPackageGroupArn);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_errorDetailsHasBeenSet) {
    payload.WithString("ErrorDetails", m_errorDetails);
  }

  if (m_lastReceivedSequenceNumberHasBeenSet) {
    payload.WithInteger("LastReceivedSequenceNumber", m_lastReceivedSequenceNumber);
  }

  if (m_billableTokenUsageHasBeenSet) {
    payload.WithObject("BillableTokenUsage", m_billableTokenUsage.Jsonize());
  }

  if (m_vpcConfigHasBeenSet) {
    payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_loraConfigHasBeenSet) {
    payload.WithObject("LoraConfig", m_loraConfig.Jsonize());
  }

  if (m_modelConfigHasBeenSet) {
    payload.WithObject("ModelConfig", m_modelConfig.Jsonize());
  }

  if (m_outputConfigHasBeenSet) {
    payload.WithObject("OutputConfig", m_outputConfig.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
