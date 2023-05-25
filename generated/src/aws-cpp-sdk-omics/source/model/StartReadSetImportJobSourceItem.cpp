/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StartReadSetImportJobSourceItem.h>
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

StartReadSetImportJobSourceItem::StartReadSetImportJobSourceItem() : 
    m_descriptionHasBeenSet(false),
    m_generatedFromHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_referenceArnHasBeenSet(false),
    m_sampleIdHasBeenSet(false),
    m_sourceFileType(FileType::NOT_SET),
    m_sourceFileTypeHasBeenSet(false),
    m_sourceFilesHasBeenSet(false),
    m_subjectIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

StartReadSetImportJobSourceItem::StartReadSetImportJobSourceItem(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_generatedFromHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_referenceArnHasBeenSet(false),
    m_sampleIdHasBeenSet(false),
    m_sourceFileType(FileType::NOT_SET),
    m_sourceFileTypeHasBeenSet(false),
    m_sourceFilesHasBeenSet(false),
    m_subjectIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

StartReadSetImportJobSourceItem& StartReadSetImportJobSourceItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("generatedFrom"))
  {
    m_generatedFrom = jsonValue.GetString("generatedFrom");

    m_generatedFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referenceArn"))
  {
    m_referenceArn = jsonValue.GetString("referenceArn");

    m_referenceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleId"))
  {
    m_sampleId = jsonValue.GetString("sampleId");

    m_sampleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceFileType"))
  {
    m_sourceFileType = FileTypeMapper::GetFileTypeForName(jsonValue.GetString("sourceFileType"));

    m_sourceFileTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceFiles"))
  {
    m_sourceFiles = jsonValue.GetObject("sourceFiles");

    m_sourceFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subjectId"))
  {
    m_subjectId = jsonValue.GetString("subjectId");

    m_subjectIdHasBeenSet = true;
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

JsonValue StartReadSetImportJobSourceItem::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_generatedFromHasBeenSet)
  {
   payload.WithString("generatedFrom", m_generatedFrom);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_referenceArnHasBeenSet)
  {
   payload.WithString("referenceArn", m_referenceArn);

  }

  if(m_sampleIdHasBeenSet)
  {
   payload.WithString("sampleId", m_sampleId);

  }

  if(m_sourceFileTypeHasBeenSet)
  {
   payload.WithString("sourceFileType", FileTypeMapper::GetNameForFileType(m_sourceFileType));
  }

  if(m_sourceFilesHasBeenSet)
  {
   payload.WithObject("sourceFiles", m_sourceFiles.Jsonize());

  }

  if(m_subjectIdHasBeenSet)
  {
   payload.WithString("subjectId", m_subjectId);

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
