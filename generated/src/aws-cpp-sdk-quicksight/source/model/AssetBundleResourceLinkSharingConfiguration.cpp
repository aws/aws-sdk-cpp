/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleResourceLinkSharingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AssetBundleResourceLinkSharingConfiguration::AssetBundleResourceLinkSharingConfiguration() : 
    m_permissionsHasBeenSet(false)
{
}

AssetBundleResourceLinkSharingConfiguration::AssetBundleResourceLinkSharingConfiguration(JsonView jsonValue) : 
    m_permissionsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleResourceLinkSharingConfiguration& AssetBundleResourceLinkSharingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Permissions"))
  {
    m_permissions = jsonValue.GetObject("Permissions");

    m_permissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleResourceLinkSharingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_permissionsHasBeenSet)
  {
   payload.WithObject("Permissions", m_permissions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
