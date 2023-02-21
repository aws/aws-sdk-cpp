/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AppComponent.h>
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

AppComponent::AppComponent() : 
    m_additionalInfoHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AppComponent::AppComponent(JsonView jsonValue) : 
    m_additionalInfoHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AppComponent& AppComponent::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AppComponent::Jsonize() const
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

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
