/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingClusterConfig.h>
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

ProcessingClusterConfig::ProcessingClusterConfig() : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceType(ProcessingInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false)
{
}

ProcessingClusterConfig::ProcessingClusterConfig(JsonView jsonValue) : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceType(ProcessingInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingClusterConfig& ProcessingClusterConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ProcessingInstanceTypeMapper::GetProcessingInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
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

  return *this;
}

JsonValue ProcessingClusterConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ProcessingInstanceTypeMapper::GetNameForProcessingInstanceType(m_instanceType));
  }

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("VolumeSizeInGB", m_volumeSizeInGB);

  }

  if(m_volumeKmsKeyIdHasBeenSet)
  {
   payload.WithString("VolumeKmsKeyId", m_volumeKmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
