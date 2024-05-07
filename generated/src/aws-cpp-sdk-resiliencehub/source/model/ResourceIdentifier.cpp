/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResourceIdentifier.h>
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

ResourceIdentifier::ResourceIdentifier() : 
    m_logicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

ResourceIdentifier::ResourceIdentifier(JsonView jsonValue) : 
    m_logicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceIdentifier& ResourceIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logicalResourceId"))
  {
    m_logicalResourceId = jsonValue.GetObject("logicalResourceId");

    m_logicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_logicalResourceIdHasBeenSet)
  {
   payload.WithObject("logicalResourceId", m_logicalResourceId.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
