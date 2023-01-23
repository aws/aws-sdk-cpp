/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ImportReferenceSourceItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

ImportReferenceSourceItem::ImportReferenceSourceItem() : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceFileHasBeenSet(false),
    m_status(ReferenceImportJobItemStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ImportReferenceSourceItem::ImportReferenceSourceItem(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceFileHasBeenSet(false),
    m_status(ReferenceImportJobItemStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ImportReferenceSourceItem& ImportReferenceSourceItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceFile"))
  {
    m_sourceFile = jsonValue.GetString("sourceFile");

    m_sourceFileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReferenceImportJobItemStatusMapper::GetReferenceImportJobItemStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportReferenceSourceItem::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sourceFileHasBeenSet)
  {
   payload.WithString("sourceFile", m_sourceFile);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReferenceImportJobItemStatusMapper::GetNameForReferenceImportJobItemStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
