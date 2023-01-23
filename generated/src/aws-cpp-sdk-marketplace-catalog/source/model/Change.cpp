/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/Change.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

Change::Change() : 
    m_changeTypeHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_entityTagsHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_changeNameHasBeenSet(false)
{
}

Change::Change(JsonView jsonValue) : 
    m_changeTypeHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_entityTagsHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_changeNameHasBeenSet(false)
{
  *this = jsonValue;
}

Change& Change::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChangeType"))
  {
    m_changeType = jsonValue.GetString("ChangeType");

    m_changeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Entity"))
  {
    m_entity = jsonValue.GetObject("Entity");

    m_entityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityTags"))
  {
    Aws::Utils::Array<JsonView> entityTagsJsonList = jsonValue.GetArray("EntityTags");
    for(unsigned entityTagsIndex = 0; entityTagsIndex < entityTagsJsonList.GetLength(); ++entityTagsIndex)
    {
      m_entityTags.push_back(entityTagsJsonList[entityTagsIndex].AsObject());
    }
    m_entityTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetString("Details");

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChangeName"))
  {
    m_changeName = jsonValue.GetString("ChangeName");

    m_changeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Change::Jsonize() const
{
  JsonValue payload;

  if(m_changeTypeHasBeenSet)
  {
   payload.WithString("ChangeType", m_changeType);

  }

  if(m_entityHasBeenSet)
  {
   payload.WithObject("Entity", m_entity.Jsonize());

  }

  if(m_entityTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityTagsJsonList(m_entityTags.size());
   for(unsigned entityTagsIndex = 0; entityTagsIndex < entityTagsJsonList.GetLength(); ++entityTagsIndex)
   {
     entityTagsJsonList[entityTagsIndex].AsObject(m_entityTags[entityTagsIndex].Jsonize());
   }
   payload.WithArray("EntityTags", std::move(entityTagsJsonList));

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("Details", m_details);

  }

  if(m_changeNameHasBeenSet)
  {
   payload.WithString("ChangeName", m_changeName);

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
