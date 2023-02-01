/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ComponentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

ComponentSummary::ComponentSummary() : 
    m_applicationIdHasBeenSet(false),
    m_componentIdHasBeenSet(false),
    m_componentType(ComponentType::NOT_SET),
    m_componentTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ComponentSummary::ComponentSummary(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_componentIdHasBeenSet(false),
    m_componentType(ComponentType::NOT_SET),
    m_componentTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentSummary& ComponentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentId"))
  {
    m_componentId = jsonValue.GetString("ComponentId");

    m_componentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentType"))
  {
    m_componentType = ComponentTypeMapper::GetComponentTypeForName(jsonValue.GetString("ComponentType"));

    m_componentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_componentIdHasBeenSet)
  {
   payload.WithString("ComponentId", m_componentId);

  }

  if(m_componentTypeHasBeenSet)
  {
   payload.WithString("ComponentType", ComponentTypeMapper::GetNameForComponentType(m_componentType));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
