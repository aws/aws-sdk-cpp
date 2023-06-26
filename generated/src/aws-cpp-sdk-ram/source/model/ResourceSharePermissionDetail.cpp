/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ResourceSharePermissionDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RAM
{
namespace Model
{

ResourceSharePermissionDetail::ResourceSharePermissionDetail() : 
    m_arnHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_defaultVersion(false),
    m_defaultVersionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_isResourceTypeDefault(false),
    m_isResourceTypeDefaultHasBeenSet(false),
    m_permissionType(PermissionType::NOT_SET),
    m_permissionTypeHasBeenSet(false),
    m_featureSet(PermissionFeatureSet::NOT_SET),
    m_featureSetHasBeenSet(false),
    m_status(PermissionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ResourceSharePermissionDetail::ResourceSharePermissionDetail(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_defaultVersion(false),
    m_defaultVersionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_isResourceTypeDefault(false),
    m_isResourceTypeDefaultHasBeenSet(false),
    m_permissionType(PermissionType::NOT_SET),
    m_permissionTypeHasBeenSet(false),
    m_featureSet(PermissionFeatureSet::NOT_SET),
    m_featureSetHasBeenSet(false),
    m_status(PermissionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceSharePermissionDetail& ResourceSharePermissionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultVersion"))
  {
    m_defaultVersion = jsonValue.GetBool("defaultVersion");

    m_defaultVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("permission"))
  {
    m_permission = jsonValue.GetString("permission");

    m_permissionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isResourceTypeDefault"))
  {
    m_isResourceTypeDefault = jsonValue.GetBool("isResourceTypeDefault");

    m_isResourceTypeDefaultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("permissionType"))
  {
    m_permissionType = PermissionTypeMapper::GetPermissionTypeForName(jsonValue.GetString("permissionType"));

    m_permissionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("featureSet"))
  {
    m_featureSet = PermissionFeatureSetMapper::GetPermissionFeatureSetForName(jsonValue.GetString("featureSet"));

    m_featureSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PermissionStatusMapper::GetPermissionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceSharePermissionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_defaultVersionHasBeenSet)
  {
   payload.WithBool("defaultVersion", m_defaultVersion);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_permissionHasBeenSet)
  {
   payload.WithString("permission", m_permission);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_isResourceTypeDefaultHasBeenSet)
  {
   payload.WithBool("isResourceTypeDefault", m_isResourceTypeDefault);

  }

  if(m_permissionTypeHasBeenSet)
  {
   payload.WithString("permissionType", PermissionTypeMapper::GetNameForPermissionType(m_permissionType));
  }

  if(m_featureSetHasBeenSet)
  {
   payload.WithString("featureSet", PermissionFeatureSetMapper::GetNameForPermissionFeatureSet(m_featureSet));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PermissionStatusMapper::GetNameForPermissionStatus(m_status));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RAM
} // namespace Aws
