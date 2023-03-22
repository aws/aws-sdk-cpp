/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResourceMapping.h>
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

ResourceMapping::ResourceMapping() : 
    m_appRegistryAppNameHasBeenSet(false),
    m_eksSourceNameHasBeenSet(false),
    m_logicalStackNameHasBeenSet(false),
    m_mappingType(ResourceMappingType::NOT_SET),
    m_mappingTypeHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_terraformSourceNameHasBeenSet(false)
{
}

ResourceMapping::ResourceMapping(JsonView jsonValue) : 
    m_appRegistryAppNameHasBeenSet(false),
    m_eksSourceNameHasBeenSet(false),
    m_logicalStackNameHasBeenSet(false),
    m_mappingType(ResourceMappingType::NOT_SET),
    m_mappingTypeHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_terraformSourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceMapping& ResourceMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appRegistryAppName"))
  {
    m_appRegistryAppName = jsonValue.GetString("appRegistryAppName");

    m_appRegistryAppNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eksSourceName"))
  {
    m_eksSourceName = jsonValue.GetString("eksSourceName");

    m_eksSourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logicalStackName"))
  {
    m_logicalStackName = jsonValue.GetString("logicalStackName");

    m_logicalStackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mappingType"))
  {
    m_mappingType = ResourceMappingTypeMapper::GetResourceMappingTypeForName(jsonValue.GetString("mappingType"));

    m_mappingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("physicalResourceId"))
  {
    m_physicalResourceId = jsonValue.GetObject("physicalResourceId");

    m_physicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceGroupName"))
  {
    m_resourceGroupName = jsonValue.GetString("resourceGroupName");

    m_resourceGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceName"))
  {
    m_resourceName = jsonValue.GetString("resourceName");

    m_resourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("terraformSourceName"))
  {
    m_terraformSourceName = jsonValue.GetString("terraformSourceName");

    m_terraformSourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceMapping::Jsonize() const
{
  JsonValue payload;

  if(m_appRegistryAppNameHasBeenSet)
  {
   payload.WithString("appRegistryAppName", m_appRegistryAppName);

  }

  if(m_eksSourceNameHasBeenSet)
  {
   payload.WithString("eksSourceName", m_eksSourceName);

  }

  if(m_logicalStackNameHasBeenSet)
  {
   payload.WithString("logicalStackName", m_logicalStackName);

  }

  if(m_mappingTypeHasBeenSet)
  {
   payload.WithString("mappingType", ResourceMappingTypeMapper::GetNameForResourceMappingType(m_mappingType));
  }

  if(m_physicalResourceIdHasBeenSet)
  {
   payload.WithObject("physicalResourceId", m_physicalResourceId.Jsonize());

  }

  if(m_resourceGroupNameHasBeenSet)
  {
   payload.WithString("resourceGroupName", m_resourceGroupName);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_terraformSourceNameHasBeenSet)
  {
   payload.WithString("terraformSourceName", m_terraformSourceName);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
