/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterEbsVolumeConfig.h>
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

ClusterEbsVolumeConfig::ClusterEbsVolumeConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterEbsVolumeConfig& ClusterEbsVolumeConfig::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("RootVolume"))
  {
    m_rootVolume = jsonValue.GetBool("RootVolume");
    m_rootVolumeHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterEbsVolumeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("VolumeSizeInGB", m_volumeSizeInGB);

  }

  if(m_volumeKmsKeyIdHasBeenSet)
  {
   payload.WithString("VolumeKmsKeyId", m_volumeKmsKeyId);

  }

  if(m_rootVolumeHasBeenSet)
  {
   payload.WithBool("RootVolume", m_rootVolume);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
