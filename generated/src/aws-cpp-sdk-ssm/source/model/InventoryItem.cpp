/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InventoryItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InventoryItem::InventoryItem() : 
    m_typeNameHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_captureTimeHasBeenSet(false),
    m_contentHashHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

InventoryItem::InventoryItem(JsonView jsonValue) : 
    m_typeNameHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_captureTimeHasBeenSet(false),
    m_contentHashHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contextHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryItem& InventoryItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");

    m_typeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("SchemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaptureTime"))
  {
    m_captureTime = jsonValue.GetString("CaptureTime");

    m_captureTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentHash"))
  {
    m_contentHash = jsonValue.GetString("ContentHash");

    m_contentHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    Aws::Utils::Array<JsonView> contentJsonList = jsonValue.GetArray("Content");
    for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
    {
      Aws::Map<Aws::String, JsonView> inventoryItemEntryJsonMap = contentJsonList[contentIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> inventoryItemEntryMap;
      for(auto& inventoryItemEntryItem : inventoryItemEntryJsonMap)
      {
        inventoryItemEntryMap[inventoryItemEntryItem.first] = inventoryItemEntryItem.second.AsString();
      }
      m_content.push_back(std::move(inventoryItemEntryMap));
    }
    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Context"))
  {
    Aws::Map<Aws::String, JsonView> contextJsonMap = jsonValue.GetObject("Context").GetAllObjects();
    for(auto& contextItem : contextJsonMap)
    {
      m_context[contextItem.first] = contextItem.second.AsString();
    }
    m_contextHasBeenSet = true;
  }

  return *this;
}

JsonValue InventoryItem::Jsonize() const
{
  JsonValue payload;

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("SchemaVersion", m_schemaVersion);

  }

  if(m_captureTimeHasBeenSet)
  {
   payload.WithString("CaptureTime", m_captureTime);

  }

  if(m_contentHashHasBeenSet)
  {
   payload.WithString("ContentHash", m_contentHash);

  }

  if(m_contentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
   for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
   {
     JsonValue inventoryItemEntryJsonMap;
     for(auto& inventoryItemEntryItem : m_content[contentIndex])
     {
       inventoryItemEntryJsonMap.WithString(inventoryItemEntryItem.first, inventoryItemEntryItem.second);
     }
     contentJsonList[contentIndex].AsObject(std::move(inventoryItemEntryJsonMap));
   }
   payload.WithArray("Content", std::move(contentJsonList));

  }

  if(m_contextHasBeenSet)
  {
   JsonValue contextJsonMap;
   for(auto& contextItem : m_context)
   {
     contextJsonMap.WithString(contextItem.first, contextItem.second);
   }
   payload.WithObject("Context", std::move(contextJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
