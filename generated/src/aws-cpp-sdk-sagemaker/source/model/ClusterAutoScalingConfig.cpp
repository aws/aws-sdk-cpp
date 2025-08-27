/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterAutoScalingConfig.h>
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

ClusterAutoScalingConfig::ClusterAutoScalingConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterAutoScalingConfig& ClusterAutoScalingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = ClusterAutoScalingModeMapper::GetClusterAutoScalingModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoScalerType"))
  {
    m_autoScalerType = ClusterAutoScalerTypeMapper::GetClusterAutoScalerTypeForName(jsonValue.GetString("AutoScalerType"));
    m_autoScalerTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterAutoScalingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", ClusterAutoScalingModeMapper::GetNameForClusterAutoScalingMode(m_mode));
  }

  if(m_autoScalerTypeHasBeenSet)
  {
   payload.WithString("AutoScalerType", ClusterAutoScalerTypeMapper::GetNameForClusterAutoScalerType(m_autoScalerType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
