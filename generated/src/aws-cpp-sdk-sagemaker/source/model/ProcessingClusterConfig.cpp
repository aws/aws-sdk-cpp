/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ProcessingClusterConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ProcessingClusterConfig::ProcessingClusterConfig(JsonView jsonValue) { *this = jsonValue; }

ProcessingClusterConfig& ProcessingClusterConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceCount")) {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");
    m_instanceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = ProcessingInstanceTypeMapper::GetProcessingInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VolumeSizeInGB")) {
    m_volumeSizeInGB = jsonValue.GetInteger("VolumeSizeInGB");
    m_volumeSizeInGBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VolumeKmsKeyId")) {
    m_volumeKmsKeyId = jsonValue.GetString("VolumeKmsKeyId");
    m_volumeKmsKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstancePreferences")) {
    Aws::Utils::Array<JsonView> instancePreferencesJsonList = jsonValue.GetArray("InstancePreferences");
    for (unsigned instancePreferencesIndex = 0; instancePreferencesIndex < instancePreferencesJsonList.GetLength();
         ++instancePreferencesIndex) {
      m_instancePreferences.push_back(instancePreferencesJsonList[instancePreferencesIndex].AsObject());
    }
    m_instancePreferencesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelectedInstanceType")) {
    m_selectedInstanceType = ProcessingInstanceTypeMapper::GetProcessingInstanceTypeForName(jsonValue.GetString("SelectedInstanceType"));
    m_selectedInstanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelectedInstanceCount")) {
    m_selectedInstanceCount = jsonValue.GetInteger("SelectedInstanceCount");
    m_selectedInstanceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ProcessingClusterConfig::Jsonize() const {
  JsonValue payload;

  if (m_instanceCountHasBeenSet) {
    payload.WithInteger("InstanceCount", m_instanceCount);
  }

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", ProcessingInstanceTypeMapper::GetNameForProcessingInstanceType(m_instanceType));
  }

  if (m_volumeSizeInGBHasBeenSet) {
    payload.WithInteger("VolumeSizeInGB", m_volumeSizeInGB);
  }

  if (m_volumeKmsKeyIdHasBeenSet) {
    payload.WithString("VolumeKmsKeyId", m_volumeKmsKeyId);
  }

  if (m_instancePreferencesHasBeenSet) {
    Aws::Utils::Array<JsonValue> instancePreferencesJsonList(m_instancePreferences.size());
    for (unsigned instancePreferencesIndex = 0; instancePreferencesIndex < instancePreferencesJsonList.GetLength();
         ++instancePreferencesIndex) {
      instancePreferencesJsonList[instancePreferencesIndex].AsObject(m_instancePreferences[instancePreferencesIndex].Jsonize());
    }
    payload.WithArray("InstancePreferences", std::move(instancePreferencesJsonList));
  }

  if (m_selectedInstanceTypeHasBeenSet) {
    payload.WithString("SelectedInstanceType", ProcessingInstanceTypeMapper::GetNameForProcessingInstanceType(m_selectedInstanceType));
  }

  if (m_selectedInstanceCountHasBeenSet) {
    payload.WithInteger("SelectedInstanceCount", m_selectedInstanceCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
