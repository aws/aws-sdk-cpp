/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/TagSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

TagSpecification::TagSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

TagSpecification& TagSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeEnumMapper::GetResourceTypeEnumForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue TagSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeEnumMapper::GetNameForResourceTypeEnum(m_resourceType));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
