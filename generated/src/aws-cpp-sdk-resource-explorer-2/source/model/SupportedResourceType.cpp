/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/SupportedResourceType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

SupportedResourceType::SupportedResourceType() : 
    m_resourceTypeHasBeenSet(false),
    m_serviceHasBeenSet(false)
{
}

SupportedResourceType::SupportedResourceType(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_serviceHasBeenSet(false)
{
  *this = jsonValue;
}

SupportedResourceType& SupportedResourceType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Service"))
  {
    m_service = jsonValue.GetString("Service");

    m_serviceHasBeenSet = true;
  }

  return *this;
}

JsonValue SupportedResourceType::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("Service", m_service);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
