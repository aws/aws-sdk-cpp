/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/AssetInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

AssetInfo::AssetInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetInfo& AssetInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssetId"))
  {
    m_assetId = jsonValue.GetString("AssetId");
    m_assetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RackId"))
  {
    m_rackId = jsonValue.GetString("RackId");
    m_rackIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssetType"))
  {
    m_assetType = AssetTypeMapper::GetAssetTypeForName(jsonValue.GetString("AssetType"));
    m_assetTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeAttributes"))
  {
    m_computeAttributes = jsonValue.GetObject("ComputeAttributes");
    m_computeAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssetLocation"))
  {
    m_assetLocation = jsonValue.GetObject("AssetLocation");
    m_assetLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetInfo::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("AssetId", m_assetId);

  }

  if(m_rackIdHasBeenSet)
  {
   payload.WithString("RackId", m_rackId);

  }

  if(m_assetTypeHasBeenSet)
  {
   payload.WithString("AssetType", AssetTypeMapper::GetNameForAssetType(m_assetType));
  }

  if(m_computeAttributesHasBeenSet)
  {
   payload.WithObject("ComputeAttributes", m_computeAttributes.Jsonize());

  }

  if(m_assetLocationHasBeenSet)
  {
   payload.WithObject("AssetLocation", m_assetLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
