/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/ResourceSetOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

ResourceSetOutput::ResourceSetOutput() : 
    m_resourceSetArnHasBeenSet(false),
    m_resourceSetNameHasBeenSet(false),
    m_resourceSetTypeHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ResourceSetOutput::ResourceSetOutput(JsonView jsonValue) : 
    m_resourceSetArnHasBeenSet(false),
    m_resourceSetNameHasBeenSet(false),
    m_resourceSetTypeHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceSetOutput& ResourceSetOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceSetArn"))
  {
    m_resourceSetArn = jsonValue.GetString("resourceSetArn");

    m_resourceSetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceSetName"))
  {
    m_resourceSetName = jsonValue.GetString("resourceSetName");

    m_resourceSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceSetType"))
  {
    m_resourceSetType = jsonValue.GetString("resourceSetType");

    m_resourceSetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceSetOutput::Jsonize() const
{
  JsonValue payload;

  if(m_resourceSetArnHasBeenSet)
  {
   payload.WithString("resourceSetArn", m_resourceSetArn);

  }

  if(m_resourceSetNameHasBeenSet)
  {
   payload.WithString("resourceSetName", m_resourceSetName);

  }

  if(m_resourceSetTypeHasBeenSet)
  {
   payload.WithString("resourceSetType", m_resourceSetType);

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
