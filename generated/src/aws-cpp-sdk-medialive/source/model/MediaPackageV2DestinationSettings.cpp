/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MediaPackageV2DestinationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MediaPackageV2DestinationSettings::MediaPackageV2DestinationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MediaPackageV2DestinationSettings& MediaPackageV2DestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioGroupId"))
  {
    m_audioGroupId = jsonValue.GetString("audioGroupId");
    m_audioGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioRenditionSets"))
  {
    m_audioRenditionSets = jsonValue.GetString("audioRenditionSets");
    m_audioRenditionSetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hlsAutoSelect"))
  {
    m_hlsAutoSelect = HlsAutoSelectMapper::GetHlsAutoSelectForName(jsonValue.GetString("hlsAutoSelect"));
    m_hlsAutoSelectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hlsDefault"))
  {
    m_hlsDefault = HlsDefaultMapper::GetHlsDefaultForName(jsonValue.GetString("hlsDefault"));
    m_hlsDefaultHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaPackageV2DestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioGroupIdHasBeenSet)
  {
   payload.WithString("audioGroupId", m_audioGroupId);

  }

  if(m_audioRenditionSetsHasBeenSet)
  {
   payload.WithString("audioRenditionSets", m_audioRenditionSets);

  }

  if(m_hlsAutoSelectHasBeenSet)
  {
   payload.WithString("hlsAutoSelect", HlsAutoSelectMapper::GetNameForHlsAutoSelect(m_hlsAutoSelect));
  }

  if(m_hlsDefaultHasBeenSet)
  {
   payload.WithString("hlsDefault", HlsDefaultMapper::GetNameForHlsDefault(m_hlsDefault));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
