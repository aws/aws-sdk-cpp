/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppLifecycleManagement.h>
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

AppLifecycleManagement::AppLifecycleManagement(JsonView jsonValue)
{
  *this = jsonValue;
}

AppLifecycleManagement& AppLifecycleManagement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdleSettings"))
  {
    m_idleSettings = jsonValue.GetObject("IdleSettings");
    m_idleSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue AppLifecycleManagement::Jsonize() const
{
  JsonValue payload;

  if(m_idleSettingsHasBeenSet)
  {
   payload.WithObject("IdleSettings", m_idleSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
