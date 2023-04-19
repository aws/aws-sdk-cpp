/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/AssociatedPermission.h>
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

AssociatedPermission::AssociatedPermission() : 
    m_arnHasBeenSet(false),
    m_permissionVersionHasBeenSet(false),
    m_defaultVersion(false),
    m_defaultVersionHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_featureSet(PermissionFeatureSet::NOT_SET),
    m_featureSetHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_resourceShareArnHasBeenSet(false)
{
}

AssociatedPermission::AssociatedPermission(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_permissionVersionHasBeenSet(false),
    m_defaultVersion(false),
    m_defaultVersionHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_featureSet(PermissionFeatureSet::NOT_SET),
    m_featureSetHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_resourceShareArnHasBeenSet(false)
{
  *this = jsonValue;
}

AssociatedPermission& AssociatedPermission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("permissionVersion"))
  {
    m_permissionVersion = jsonValue.GetString("permissionVersion");

    m_permissionVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultVersion"))
  {
    m_defaultVersion = jsonValue.GetBool("defaultVersion");

    m_defaultVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("featureSet"))
  {
    m_featureSet = PermissionFeatureSetMapper::GetPermissionFeatureSetForName(jsonValue.GetString("featureSet"));

    m_featureSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceShareArn"))
  {
    m_resourceShareArn = jsonValue.GetString("resourceShareArn");

    m_resourceShareArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociatedPermission::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_permissionVersionHasBeenSet)
  {
   payload.WithString("permissionVersion", m_permissionVersion);

  }

  if(m_defaultVersionHasBeenSet)
  {
   payload.WithBool("defaultVersion", m_defaultVersion);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_featureSetHasBeenSet)
  {
   payload.WithString("featureSet", PermissionFeatureSetMapper::GetNameForPermissionFeatureSet(m_featureSet));
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_resourceShareArnHasBeenSet)
  {
   payload.WithString("resourceShareArn", m_resourceShareArn);

  }

  return payload;
}

} // namespace Model
} // namespace RAM
} // namespace Aws
