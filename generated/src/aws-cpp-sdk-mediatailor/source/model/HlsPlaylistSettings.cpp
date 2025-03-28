﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/HlsPlaylistSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

HlsPlaylistSettings::HlsPlaylistSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

HlsPlaylistSettings& HlsPlaylistSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestWindowSeconds"))
  {
    m_manifestWindowSeconds = jsonValue.GetInteger("ManifestWindowSeconds");
    m_manifestWindowSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdMarkupType"))
  {
    Aws::Utils::Array<JsonView> adMarkupTypeJsonList = jsonValue.GetArray("AdMarkupType");
    for(unsigned adMarkupTypeIndex = 0; adMarkupTypeIndex < adMarkupTypeJsonList.GetLength(); ++adMarkupTypeIndex)
    {
      m_adMarkupType.push_back(AdMarkupTypeMapper::GetAdMarkupTypeForName(adMarkupTypeJsonList[adMarkupTypeIndex].AsString()));
    }
    m_adMarkupTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue HlsPlaylistSettings::Jsonize() const
{
  JsonValue payload;

  if(m_manifestWindowSecondsHasBeenSet)
  {
   payload.WithInteger("ManifestWindowSeconds", m_manifestWindowSeconds);

  }

  if(m_adMarkupTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adMarkupTypeJsonList(m_adMarkupType.size());
   for(unsigned adMarkupTypeIndex = 0; adMarkupTypeIndex < adMarkupTypeJsonList.GetLength(); ++adMarkupTypeIndex)
   {
     adMarkupTypeJsonList[adMarkupTypeIndex].AsString(AdMarkupTypeMapper::GetNameForAdMarkupType(m_adMarkupType[adMarkupTypeIndex]));
   }
   payload.WithArray("AdMarkupType", std::move(adMarkupTypeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
