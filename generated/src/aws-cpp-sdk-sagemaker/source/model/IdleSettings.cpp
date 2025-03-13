/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/IdleSettings.h>
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

IdleSettings::IdleSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

IdleSettings& IdleSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LifecycleManagement"))
  {
    m_lifecycleManagement = LifecycleManagementMapper::GetLifecycleManagementForName(jsonValue.GetString("LifecycleManagement"));
    m_lifecycleManagementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdleTimeoutInMinutes"))
  {
    m_idleTimeoutInMinutes = jsonValue.GetInteger("IdleTimeoutInMinutes");
    m_idleTimeoutInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinIdleTimeoutInMinutes"))
  {
    m_minIdleTimeoutInMinutes = jsonValue.GetInteger("MinIdleTimeoutInMinutes");
    m_minIdleTimeoutInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxIdleTimeoutInMinutes"))
  {
    m_maxIdleTimeoutInMinutes = jsonValue.GetInteger("MaxIdleTimeoutInMinutes");
    m_maxIdleTimeoutInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue IdleSettings::Jsonize() const
{
  JsonValue payload;

  if(m_lifecycleManagementHasBeenSet)
  {
   payload.WithString("LifecycleManagement", LifecycleManagementMapper::GetNameForLifecycleManagement(m_lifecycleManagement));
  }

  if(m_idleTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("IdleTimeoutInMinutes", m_idleTimeoutInMinutes);

  }

  if(m_minIdleTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("MinIdleTimeoutInMinutes", m_minIdleTimeoutInMinutes);

  }

  if(m_maxIdleTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("MaxIdleTimeoutInMinutes", m_maxIdleTimeoutInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
