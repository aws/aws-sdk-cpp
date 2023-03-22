/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/UnsupportedResource.h>
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

UnsupportedResource::UnsupportedResource() : 
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_unsupportedResourceStatusHasBeenSet(false)
{
}

UnsupportedResource::UnsupportedResource(JsonView jsonValue) : 
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_unsupportedResourceStatusHasBeenSet(false)
{
  *this = jsonValue;
}

UnsupportedResource& UnsupportedResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logicalResourceId"))
  {
    m_logicalResourceId = jsonValue.GetObject("logicalResourceId");

    m_logicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("physicalResourceId"))
  {
    m_physicalResourceId = jsonValue.GetObject("physicalResourceId");

    m_physicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unsupportedResourceStatus"))
  {
    m_unsupportedResourceStatus = jsonValue.GetString("unsupportedResourceStatus");

    m_unsupportedResourceStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue UnsupportedResource::Jsonize() const
{
  JsonValue payload;

  if(m_logicalResourceIdHasBeenSet)
  {
   payload.WithObject("logicalResourceId", m_logicalResourceId.Jsonize());

  }

  if(m_physicalResourceIdHasBeenSet)
  {
   payload.WithObject("physicalResourceId", m_physicalResourceId.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_unsupportedResourceStatusHasBeenSet)
  {
   payload.WithString("unsupportedResourceStatus", m_unsupportedResourceStatus);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
