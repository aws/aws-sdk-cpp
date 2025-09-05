/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterTieredStorageConfig.h>
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

ClusterTieredStorageConfig::ClusterTieredStorageConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterTieredStorageConfig& ClusterTieredStorageConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = ClusterConfigModeMapper::GetClusterConfigModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceMemoryAllocationPercentage"))
  {
    m_instanceMemoryAllocationPercentage = jsonValue.GetInteger("InstanceMemoryAllocationPercentage");
    m_instanceMemoryAllocationPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterTieredStorageConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", ClusterConfigModeMapper::GetNameForClusterConfigMode(m_mode));
  }

  if(m_instanceMemoryAllocationPercentageHasBeenSet)
  {
   payload.WithInteger("InstanceMemoryAllocationPercentage", m_instanceMemoryAllocationPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
