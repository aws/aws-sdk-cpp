/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SpaceIdleSettings.h>
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

SpaceIdleSettings::SpaceIdleSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

SpaceIdleSettings& SpaceIdleSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdleTimeoutInMinutes"))
  {
    m_idleTimeoutInMinutes = jsonValue.GetInteger("IdleTimeoutInMinutes");
    m_idleTimeoutInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue SpaceIdleSettings::Jsonize() const
{
  JsonValue payload;

  if(m_idleTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("IdleTimeoutInMinutes", m_idleTimeoutInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
