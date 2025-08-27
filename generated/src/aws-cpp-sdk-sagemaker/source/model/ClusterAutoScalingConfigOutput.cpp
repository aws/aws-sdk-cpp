/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterAutoScalingConfigOutput.h>
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

ClusterAutoScalingConfigOutput::ClusterAutoScalingConfigOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterAutoScalingConfigOutput& ClusterAutoScalingConfigOutput::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ClusterAutoScalingStatusMapper::GetClusterAutoScalingStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");
    m_failureMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterAutoScalingConfigOutput::Jsonize() const
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ClusterAutoScalingStatusMapper::GetNameForClusterAutoScalingStatus(m_status));
  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("FailureMessage", m_failureMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
