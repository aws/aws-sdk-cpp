/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/AssetShallow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

AssetShallow::AssetShallow() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_idHasBeenSet(false),
    m_packagingGroupIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_sourceRoleArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

AssetShallow::AssetShallow(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_idHasBeenSet(false),
    m_packagingGroupIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_sourceRoleArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetShallow& AssetShallow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packagingGroupId"))
  {
    m_packagingGroupId = jsonValue.GetString("packagingGroupId");

    m_packagingGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceArn"))
  {
    m_sourceArn = jsonValue.GetString("sourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceRoleArn"))
  {
    m_sourceRoleArn = jsonValue.GetString("sourceRoleArn");

    m_sourceRoleArnHasBeenSet = true;
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

JsonValue AssetShallow::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_packagingGroupIdHasBeenSet)
  {
   payload.WithString("packagingGroupId", m_packagingGroupId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("sourceArn", m_sourceArn);

  }

  if(m_sourceRoleArnHasBeenSet)
  {
   payload.WithString("sourceRoleArn", m_sourceRoleArn);

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
} // namespace MediaPackageVod
} // namespace Aws
