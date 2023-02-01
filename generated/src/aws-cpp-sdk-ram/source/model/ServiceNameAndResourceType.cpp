/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ServiceNameAndResourceType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RAM
{
namespace Model
{

ServiceNameAndResourceType::ServiceNameAndResourceType() : 
    m_resourceTypeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_resourceRegionScope(ResourceRegionScope::NOT_SET),
    m_resourceRegionScopeHasBeenSet(false)
{
}

ServiceNameAndResourceType::ServiceNameAndResourceType(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_resourceRegionScope(ResourceRegionScope::NOT_SET),
    m_resourceRegionScopeHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceNameAndResourceType& ServiceNameAndResourceType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceRegionScope"))
  {
    m_resourceRegionScope = ResourceRegionScopeMapper::GetResourceRegionScopeForName(jsonValue.GetString("resourceRegionScope"));

    m_resourceRegionScopeHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceNameAndResourceType::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_resourceRegionScopeHasBeenSet)
  {
   payload.WithString("resourceRegionScope", ResourceRegionScopeMapper::GetNameForResourceRegionScope(m_resourceRegionScope));
  }

  return payload;
}

} // namespace Model
} // namespace RAM
} // namespace Aws
