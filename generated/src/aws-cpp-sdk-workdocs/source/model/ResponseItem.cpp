/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/ResponseItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

ResponseItem::ResponseItem() : 
    m_resourceType(ResponseItemType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_webUrlHasBeenSet(false),
    m_documentMetadataHasBeenSet(false),
    m_folderMetadataHasBeenSet(false),
    m_commentMetadataHasBeenSet(false),
    m_documentVersionMetadataHasBeenSet(false)
{
}

ResponseItem::ResponseItem(JsonView jsonValue) : 
    m_resourceType(ResponseItemType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_webUrlHasBeenSet(false),
    m_documentMetadataHasBeenSet(false),
    m_folderMetadataHasBeenSet(false),
    m_commentMetadataHasBeenSet(false),
    m_documentVersionMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseItem& ResponseItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResponseItemTypeMapper::GetResponseItemTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebUrl"))
  {
    m_webUrl = jsonValue.GetString("WebUrl");

    m_webUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentMetadata"))
  {
    m_documentMetadata = jsonValue.GetObject("DocumentMetadata");

    m_documentMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FolderMetadata"))
  {
    m_folderMetadata = jsonValue.GetObject("FolderMetadata");

    m_folderMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommentMetadata"))
  {
    m_commentMetadata = jsonValue.GetObject("CommentMetadata");

    m_commentMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersionMetadata"))
  {
    m_documentVersionMetadata = jsonValue.GetObject("DocumentVersionMetadata");

    m_documentVersionMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseItem::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResponseItemTypeMapper::GetNameForResponseItemType(m_resourceType));
  }

  if(m_webUrlHasBeenSet)
  {
   payload.WithString("WebUrl", m_webUrl);

  }

  if(m_documentMetadataHasBeenSet)
  {
   payload.WithObject("DocumentMetadata", m_documentMetadata.Jsonize());

  }

  if(m_folderMetadataHasBeenSet)
  {
   payload.WithObject("FolderMetadata", m_folderMetadata.Jsonize());

  }

  if(m_commentMetadataHasBeenSet)
  {
   payload.WithObject("CommentMetadata", m_commentMetadata.Jsonize());

  }

  if(m_documentVersionMetadataHasBeenSet)
  {
   payload.WithObject("DocumentVersionMetadata", m_documentVersionMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
