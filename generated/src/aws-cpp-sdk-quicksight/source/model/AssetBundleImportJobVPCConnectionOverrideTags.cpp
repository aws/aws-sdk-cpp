/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobVPCConnectionOverrideTags.h>
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

AssetBundleImportJobVPCConnectionOverrideTags::AssetBundleImportJobVPCConnectionOverrideTags() : 
    m_vPCConnectionIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

AssetBundleImportJobVPCConnectionOverrideTags::AssetBundleImportJobVPCConnectionOverrideTags(JsonView jsonValue) : 
    m_vPCConnectionIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobVPCConnectionOverrideTags& AssetBundleImportJobVPCConnectionOverrideTags::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VPCConnectionIds"))
  {
    Aws::Utils::Array<JsonView> vPCConnectionIdsJsonList = jsonValue.GetArray("VPCConnectionIds");
    for(unsigned vPCConnectionIdsIndex = 0; vPCConnectionIdsIndex < vPCConnectionIdsJsonList.GetLength(); ++vPCConnectionIdsIndex)
    {
      m_vPCConnectionIds.push_back(vPCConnectionIdsJsonList[vPCConnectionIdsIndex].AsString());
    }
    m_vPCConnectionIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobVPCConnectionOverrideTags::Jsonize() const
{
  JsonValue payload;

  if(m_vPCConnectionIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vPCConnectionIdsJsonList(m_vPCConnectionIds.size());
   for(unsigned vPCConnectionIdsIndex = 0; vPCConnectionIdsIndex < vPCConnectionIdsJsonList.GetLength(); ++vPCConnectionIdsIndex)
   {
     vPCConnectionIdsJsonList[vPCConnectionIdsIndex].AsString(m_vPCConnectionIds[vPCConnectionIdsIndex]);
   }
   payload.WithArray("VPCConnectionIds", std::move(vPCConnectionIdsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
