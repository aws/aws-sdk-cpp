/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StartReferenceImportJobSourceItem.h>
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

StartReferenceImportJobSourceItem::StartReferenceImportJobSourceItem() : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceFileHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

StartReferenceImportJobSourceItem::StartReferenceImportJobSourceItem(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceFileHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

StartReferenceImportJobSourceItem& StartReferenceImportJobSourceItem::operator =(JsonView jsonValue)
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

JsonValue StartReferenceImportJobSourceItem::Jsonize() const
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
