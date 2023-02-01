/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DocumentMetadata.h>
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

DocumentMetadata::DocumentMetadata() : 
    m_idHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_parentFolderIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_modifiedTimestampHasBeenSet(false),
    m_latestVersionMetadataHasBeenSet(false),
    m_resourceState(ResourceStateType::NOT_SET),
    m_resourceStateHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

DocumentMetadata::DocumentMetadata(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_parentFolderIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_modifiedTimestampHasBeenSet(false),
    m_latestVersionMetadataHasBeenSet(false),
    m_resourceState(ResourceStateType::NOT_SET),
    m_resourceStateHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentMetadata& DocumentMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorId"))
  {
    m_creatorId = jsonValue.GetString("CreatorId");

    m_creatorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentFolderId"))
  {
    m_parentFolderId = jsonValue.GetString("ParentFolderId");

    m_parentFolderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModifiedTimestamp"))
  {
    m_modifiedTimestamp = jsonValue.GetDouble("ModifiedTimestamp");

    m_modifiedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestVersionMetadata"))
  {
    m_latestVersionMetadata = jsonValue.GetObject("LatestVersionMetadata");

    m_latestVersionMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceState"))
  {
    m_resourceState = ResourceStateTypeMapper::GetResourceStateTypeForName(jsonValue.GetString("ResourceState"));

    m_resourceStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("Labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsString());
    }
    m_labelsHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_creatorIdHasBeenSet)
  {
   payload.WithString("CreatorId", m_creatorId);

  }

  if(m_parentFolderIdHasBeenSet)
  {
   payload.WithString("ParentFolderId", m_parentFolderId);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_modifiedTimestampHasBeenSet)
  {
   payload.WithDouble("ModifiedTimestamp", m_modifiedTimestamp.SecondsWithMSPrecision());
  }

  if(m_latestVersionMetadataHasBeenSet)
  {
   payload.WithObject("LatestVersionMetadata", m_latestVersionMetadata.Jsonize());

  }

  if(m_resourceStateHasBeenSet)
  {
   payload.WithString("ResourceState", ResourceStateTypeMapper::GetNameForResourceStateType(m_resourceState));
  }

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsString(m_labels[labelsIndex]);
   }
   payload.WithArray("Labels", std::move(labelsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
