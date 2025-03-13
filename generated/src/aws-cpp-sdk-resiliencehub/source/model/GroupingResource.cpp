/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/GroupingResource.h>
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

GroupingResource::GroupingResource(JsonView jsonValue)
{
  *this = jsonValue;
}

GroupingResource& GroupingResource::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("resourceName"))
  {
    m_resourceName = jsonValue.GetString("resourceName");
    m_resourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceAppComponentIds"))
  {
    Aws::Utils::Array<JsonView> sourceAppComponentIdsJsonList = jsonValue.GetArray("sourceAppComponentIds");
    for(unsigned sourceAppComponentIdsIndex = 0; sourceAppComponentIdsIndex < sourceAppComponentIdsJsonList.GetLength(); ++sourceAppComponentIdsIndex)
    {
      m_sourceAppComponentIds.push_back(sourceAppComponentIdsJsonList[sourceAppComponentIdsIndex].AsString());
    }
    m_sourceAppComponentIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue GroupingResource::Jsonize() const
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

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_sourceAppComponentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceAppComponentIdsJsonList(m_sourceAppComponentIds.size());
   for(unsigned sourceAppComponentIdsIndex = 0; sourceAppComponentIdsIndex < sourceAppComponentIdsJsonList.GetLength(); ++sourceAppComponentIdsIndex)
   {
     sourceAppComponentIdsJsonList[sourceAppComponentIdsIndex].AsString(m_sourceAppComponentIds[sourceAppComponentIdsIndex]);
   }
   payload.WithArray("sourceAppComponentIds", std::move(sourceAppComponentIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
