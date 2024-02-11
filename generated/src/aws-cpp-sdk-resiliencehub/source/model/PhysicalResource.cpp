/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/PhysicalResource.h>
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

PhysicalResource::PhysicalResource() : 
    m_additionalInfoHasBeenSet(false),
    m_appComponentsHasBeenSet(false),
    m_excluded(false),
    m_excludedHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_parentResourceNameHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_sourceType(ResourceSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false)
{
}

PhysicalResource::PhysicalResource(JsonView jsonValue) : 
    m_additionalInfoHasBeenSet(false),
    m_appComponentsHasBeenSet(false),
    m_excluded(false),
    m_excludedHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_parentResourceNameHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_sourceType(ResourceSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

PhysicalResource& PhysicalResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalInfo"))
  {
    Aws::Map<Aws::String, JsonView> additionalInfoJsonMap = jsonValue.GetObject("additionalInfo").GetAllObjects();
    for(auto& additionalInfoItem : additionalInfoJsonMap)
    {
      Aws::Utils::Array<JsonView> additionalInfoValueListJsonList = additionalInfoItem.second.AsArray();
      Aws::Vector<Aws::String> additionalInfoValueListList;
      additionalInfoValueListList.reserve((size_t)additionalInfoValueListJsonList.GetLength());
      for(unsigned additionalInfoValueListIndex = 0; additionalInfoValueListIndex < additionalInfoValueListJsonList.GetLength(); ++additionalInfoValueListIndex)
      {
        additionalInfoValueListList.push_back(additionalInfoValueListJsonList[additionalInfoValueListIndex].AsString());
      }
      m_additionalInfo[additionalInfoItem.first] = std::move(additionalInfoValueListList);
    }
    m_additionalInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appComponents"))
  {
    Aws::Utils::Array<JsonView> appComponentsJsonList = jsonValue.GetArray("appComponents");
    for(unsigned appComponentsIndex = 0; appComponentsIndex < appComponentsJsonList.GetLength(); ++appComponentsIndex)
    {
      m_appComponents.push_back(appComponentsJsonList[appComponentsIndex].AsObject());
    }
    m_appComponentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("excluded"))
  {
    m_excluded = jsonValue.GetBool("excluded");

    m_excludedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logicalResourceId"))
  {
    m_logicalResourceId = jsonValue.GetObject("logicalResourceId");

    m_logicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentResourceName"))
  {
    m_parentResourceName = jsonValue.GetString("parentResourceName");

    m_parentResourceNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("sourceType"))
  {
    m_sourceType = ResourceSourceTypeMapper::GetResourceSourceTypeForName(jsonValue.GetString("sourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue PhysicalResource::Jsonize() const
{
  JsonValue payload;

  if(m_additionalInfoHasBeenSet)
  {
   JsonValue additionalInfoJsonMap;
   for(auto& additionalInfoItem : m_additionalInfo)
   {
     Aws::Utils::Array<JsonValue> additionalInfoValueListJsonList(additionalInfoItem.second.size());
     for(unsigned additionalInfoValueListIndex = 0; additionalInfoValueListIndex < additionalInfoValueListJsonList.GetLength(); ++additionalInfoValueListIndex)
     {
       additionalInfoValueListJsonList[additionalInfoValueListIndex].AsString(additionalInfoItem.second[additionalInfoValueListIndex]);
     }
     additionalInfoJsonMap.WithArray(additionalInfoItem.first, std::move(additionalInfoValueListJsonList));
   }
   payload.WithObject("additionalInfo", std::move(additionalInfoJsonMap));

  }

  if(m_appComponentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appComponentsJsonList(m_appComponents.size());
   for(unsigned appComponentsIndex = 0; appComponentsIndex < appComponentsJsonList.GetLength(); ++appComponentsIndex)
   {
     appComponentsJsonList[appComponentsIndex].AsObject(m_appComponents[appComponentsIndex].Jsonize());
   }
   payload.WithArray("appComponents", std::move(appComponentsJsonList));

  }

  if(m_excludedHasBeenSet)
  {
   payload.WithBool("excluded", m_excluded);

  }

  if(m_logicalResourceIdHasBeenSet)
  {
   payload.WithObject("logicalResourceId", m_logicalResourceId.Jsonize());

  }

  if(m_parentResourceNameHasBeenSet)
  {
   payload.WithString("parentResourceName", m_parentResourceName);

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

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("sourceType", ResourceSourceTypeMapper::GetNameForResourceSourceType(m_sourceType));
  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
