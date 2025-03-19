/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ImportReadSetSourceItem.h>
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

ImportReadSetSourceItem::ImportReadSetSourceItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ImportReadSetSourceItem& ImportReadSetSourceItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceFiles"))
  {
    m_sourceFiles = jsonValue.GetObject("sourceFiles");
    m_sourceFilesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceFileType"))
  {
    m_sourceFileType = FileTypeMapper::GetFileTypeForName(jsonValue.GetString("sourceFileType"));
    m_sourceFileTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetImportJobItemStatusMapper::GetReadSetImportJobItemStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subjectId"))
  {
    m_subjectId = jsonValue.GetString("subjectId");
    m_subjectIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleId"))
  {
    m_sampleId = jsonValue.GetString("sampleId");
    m_sampleIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("generatedFrom"))
  {
    m_generatedFrom = jsonValue.GetString("generatedFrom");
    m_generatedFromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("referenceArn"))
  {
    m_referenceArn = jsonValue.GetString("referenceArn");
    m_referenceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
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
  if(jsonValue.ValueExists("readSetId"))
  {
    m_readSetId = jsonValue.GetString("readSetId");
    m_readSetIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportReadSetSourceItem::Jsonize() const
{
  JsonValue payload;

  if(m_sourceFilesHasBeenSet)
  {
   payload.WithObject("sourceFiles", m_sourceFiles.Jsonize());

  }

  if(m_sourceFileTypeHasBeenSet)
  {
   payload.WithString("sourceFileType", FileTypeMapper::GetNameForFileType(m_sourceFileType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReadSetImportJobItemStatusMapper::GetNameForReadSetImportJobItemStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_subjectIdHasBeenSet)
  {
   payload.WithString("subjectId", m_subjectId);

  }

  if(m_sampleIdHasBeenSet)
  {
   payload.WithString("sampleId", m_sampleId);

  }

  if(m_generatedFromHasBeenSet)
  {
   payload.WithString("generatedFrom", m_generatedFrom);

  }

  if(m_referenceArnHasBeenSet)
  {
   payload.WithString("referenceArn", m_referenceArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

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

  if(m_readSetIdHasBeenSet)
  {
   payload.WithString("readSetId", m_readSetId);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
