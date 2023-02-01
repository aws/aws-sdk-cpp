/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ResourceConfig::ResourceConfig() : 
    m_instanceType(TrainingInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_instanceGroupsHasBeenSet(false),
    m_keepAlivePeriodInSeconds(0),
    m_keepAlivePeriodInSecondsHasBeenSet(false)
{
}

ResourceConfig::ResourceConfig(JsonView jsonValue) : 
    m_instanceType(TrainingInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_instanceGroupsHasBeenSet(false),
    m_keepAlivePeriodInSeconds(0),
    m_keepAlivePeriodInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceConfig& ResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = TrainingInstanceTypeMapper::GetTrainingInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeSizeInGB"))
  {
    m_volumeSizeInGB = jsonValue.GetInteger("VolumeSizeInGB");

    m_volumeSizeInGBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeKmsKeyId"))
  {
    m_volumeKmsKeyId = jsonValue.GetString("VolumeKmsKeyId");

    m_volumeKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceGroups"))
  {
    Aws::Utils::Array<JsonView> instanceGroupsJsonList = jsonValue.GetArray("InstanceGroups");
    for(unsigned instanceGroupsIndex = 0; instanceGroupsIndex < instanceGroupsJsonList.GetLength(); ++instanceGroupsIndex)
    {
      m_instanceGroups.push_back(instanceGroupsJsonList[instanceGroupsIndex].AsObject());
    }
    m_instanceGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeepAlivePeriodInSeconds"))
  {
    m_keepAlivePeriodInSeconds = jsonValue.GetInteger("KeepAlivePeriodInSeconds");

    m_keepAlivePeriodInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", TrainingInstanceTypeMapper::GetNameForTrainingInstanceType(m_instanceType));
  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("VolumeSizeInGB", m_volumeSizeInGB);

  }

  if(m_volumeKmsKeyIdHasBeenSet)
  {
   payload.WithString("VolumeKmsKeyId", m_volumeKmsKeyId);

  }

  if(m_instanceGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceGroupsJsonList(m_instanceGroups.size());
   for(unsigned instanceGroupsIndex = 0; instanceGroupsIndex < instanceGroupsJsonList.GetLength(); ++instanceGroupsIndex)
   {
     instanceGroupsJsonList[instanceGroupsIndex].AsObject(m_instanceGroups[instanceGroupsIndex].Jsonize());
   }
   payload.WithArray("InstanceGroups", std::move(instanceGroupsJsonList));

  }

  if(m_keepAlivePeriodInSecondsHasBeenSet)
  {
   payload.WithInteger("KeepAlivePeriodInSeconds", m_keepAlivePeriodInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
