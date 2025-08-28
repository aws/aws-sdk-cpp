/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ContainerRegistryMap.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

ContainerRegistryMap::ContainerRegistryMap(JsonView jsonValue)
{
  *this = jsonValue;
}

ContainerRegistryMap& ContainerRegistryMap::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("registryMappings"))
  {
    Aws::Utils::Array<JsonView> registryMappingsJsonList = jsonValue.GetArray("registryMappings");
    for(unsigned registryMappingsIndex = 0; registryMappingsIndex < registryMappingsJsonList.GetLength(); ++registryMappingsIndex)
    {
      m_registryMappings.push_back(registryMappingsJsonList[registryMappingsIndex].AsObject());
    }
    m_registryMappingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imageMappings"))
  {
    Aws::Utils::Array<JsonView> imageMappingsJsonList = jsonValue.GetArray("imageMappings");
    for(unsigned imageMappingsIndex = 0; imageMappingsIndex < imageMappingsJsonList.GetLength(); ++imageMappingsIndex)
    {
      m_imageMappings.push_back(imageMappingsJsonList[imageMappingsIndex].AsObject());
    }
    m_imageMappingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerRegistryMap::Jsonize() const
{
  JsonValue payload;

  if(m_registryMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> registryMappingsJsonList(m_registryMappings.size());
   for(unsigned registryMappingsIndex = 0; registryMappingsIndex < registryMappingsJsonList.GetLength(); ++registryMappingsIndex)
   {
     registryMappingsJsonList[registryMappingsIndex].AsObject(m_registryMappings[registryMappingsIndex].Jsonize());
   }
   payload.WithArray("registryMappings", std::move(registryMappingsJsonList));

  }

  if(m_imageMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imageMappingsJsonList(m_imageMappings.size());
   for(unsigned imageMappingsIndex = 0; imageMappingsIndex < imageMappingsJsonList.GetLength(); ++imageMappingsIndex)
   {
     imageMappingsJsonList[imageMappingsIndex].AsObject(m_imageMappings[imageMappingsIndex].Jsonize());
   }
   payload.WithArray("imageMappings", std::move(imageMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
