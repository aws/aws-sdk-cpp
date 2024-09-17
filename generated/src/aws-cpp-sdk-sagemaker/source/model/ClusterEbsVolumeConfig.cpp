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

ClusterEbsVolumeConfig::ClusterEbsVolumeConfig() : 
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false)
{
}

ClusterEbsVolumeConfig::ClusterEbsVolumeConfig(JsonView jsonValue)
  : ClusterEbsVolumeConfig()
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

  return *this;
}

JsonValue ClusterEbsVolumeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("VolumeSizeInGB", m_volumeSizeInGB);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
