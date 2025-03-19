/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/GroupingAppComponent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

GroupingAppComponent::GroupingAppComponent(JsonView jsonValue)
{
  *this = jsonValue;
}

GroupingAppComponent& GroupingAppComponent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appComponentId"))
  {
    m_appComponentId = jsonValue.GetString("appComponentId");
    m_appComponentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appComponentName"))
  {
    m_appComponentName = jsonValue.GetString("appComponentName");
    m_appComponentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appComponentType"))
  {
    m_appComponentType = jsonValue.GetString("appComponentType");
    m_appComponentTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue GroupingAppComponent::Jsonize() const
{
  JsonValue payload;

  if(m_appComponentIdHasBeenSet)
  {
   payload.WithString("appComponentId", m_appComponentId);

  }

  if(m_appComponentNameHasBeenSet)
  {
   payload.WithString("appComponentName", m_appComponentName);

  }

  if(m_appComponentTypeHasBeenSet)
  {
   payload.WithString("appComponentType", m_appComponentType);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
