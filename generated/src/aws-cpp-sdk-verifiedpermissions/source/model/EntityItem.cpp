/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/EntityItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

EntityItem::EntityItem() : 
    m_identifierHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_parentsHasBeenSet(false)
{
}

EntityItem::EntityItem(JsonView jsonValue) : 
    m_identifierHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_parentsHasBeenSet(false)
{
  *this = jsonValue;
}

EntityItem& EntityItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetObject("identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsObject();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parents"))
  {
    Aws::Utils::Array<JsonView> parentsJsonList = jsonValue.GetArray("parents");
    for(unsigned parentsIndex = 0; parentsIndex < parentsJsonList.GetLength(); ++parentsIndex)
    {
      m_parents.push_back(parentsJsonList[parentsIndex].AsObject());
    }
    m_parentsHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityItem::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithObject("identifier", m_identifier.Jsonize());

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithObject(attributesItem.first, attributesItem.second.Jsonize());
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_parentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parentsJsonList(m_parents.size());
   for(unsigned parentsIndex = 0; parentsIndex < parentsJsonList.GetLength(); ++parentsIndex)
   {
     parentsJsonList[parentsIndex].AsObject(m_parents[parentsIndex].Jsonize());
   }
   payload.WithArray("parents", std::move(parentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
