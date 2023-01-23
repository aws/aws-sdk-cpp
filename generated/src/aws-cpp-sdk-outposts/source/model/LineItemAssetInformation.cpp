/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/LineItemAssetInformation.h>
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

LineItemAssetInformation::LineItemAssetInformation() : 
    m_assetIdHasBeenSet(false),
    m_macAddressListHasBeenSet(false)
{
}

LineItemAssetInformation::LineItemAssetInformation(JsonView jsonValue) : 
    m_assetIdHasBeenSet(false),
    m_macAddressListHasBeenSet(false)
{
  *this = jsonValue;
}

LineItemAssetInformation& LineItemAssetInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssetId"))
  {
    m_assetId = jsonValue.GetString("AssetId");

    m_assetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MacAddressList"))
  {
    Aws::Utils::Array<JsonView> macAddressListJsonList = jsonValue.GetArray("MacAddressList");
    for(unsigned macAddressListIndex = 0; macAddressListIndex < macAddressListJsonList.GetLength(); ++macAddressListIndex)
    {
      m_macAddressList.push_back(macAddressListJsonList[macAddressListIndex].AsString());
    }
    m_macAddressListHasBeenSet = true;
  }

  return *this;
}

JsonValue LineItemAssetInformation::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("AssetId", m_assetId);

  }

  if(m_macAddressListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> macAddressListJsonList(m_macAddressList.size());
   for(unsigned macAddressListIndex = 0; macAddressListIndex < macAddressListJsonList.GetLength(); ++macAddressListIndex)
   {
     macAddressListJsonList[macAddressListIndex].AsString(m_macAddressList[macAddressListIndex]);
   }
   payload.WithArray("MacAddressList", std::move(macAddressListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
