/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/ListAttachedLinksItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OAM
{
namespace Model
{

ListAttachedLinksItem::ListAttachedLinksItem() : 
    m_labelHasBeenSet(false),
    m_linkArnHasBeenSet(false),
    m_resourceTypesHasBeenSet(false)
{
}

ListAttachedLinksItem::ListAttachedLinksItem(JsonView jsonValue) : 
    m_labelHasBeenSet(false),
    m_linkArnHasBeenSet(false),
    m_resourceTypesHasBeenSet(false)
{
  *this = jsonValue;
}

ListAttachedLinksItem& ListAttachedLinksItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkArn"))
  {
    m_linkArn = jsonValue.GetString("LinkArn");

    m_linkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTypes"))
  {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("ResourceTypes");
    for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
    {
      m_resourceTypes.push_back(resourceTypesJsonList[resourceTypesIndex].AsString());
    }
    m_resourceTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue ListAttachedLinksItem::Jsonize() const
{
  JsonValue payload;

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_linkArnHasBeenSet)
  {
   payload.WithString("LinkArn", m_linkArn);

  }

  if(m_resourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(m_resourceTypes[resourceTypesIndex]);
   }
   payload.WithArray("ResourceTypes", std::move(resourceTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OAM
} // namespace Aws
