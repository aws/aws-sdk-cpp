/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ResponseOutputItem.h>
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

ResponseOutputItem::ResponseOutputItem() : 
    m_dashPlaylistSettingsHasBeenSet(false),
    m_hlsPlaylistSettingsHasBeenSet(false),
    m_manifestNameHasBeenSet(false),
    m_playbackUrlHasBeenSet(false),
    m_sourceGroupHasBeenSet(false)
{
}

ResponseOutputItem::ResponseOutputItem(JsonView jsonValue) : 
    m_dashPlaylistSettingsHasBeenSet(false),
    m_hlsPlaylistSettingsHasBeenSet(false),
    m_manifestNameHasBeenSet(false),
    m_playbackUrlHasBeenSet(false),
    m_sourceGroupHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseOutputItem& ResponseOutputItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DashPlaylistSettings"))
  {
    m_dashPlaylistSettings = jsonValue.GetObject("DashPlaylistSettings");

    m_dashPlaylistSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HlsPlaylistSettings"))
  {
    m_hlsPlaylistSettings = jsonValue.GetObject("HlsPlaylistSettings");

    m_hlsPlaylistSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManifestName"))
  {
    m_manifestName = jsonValue.GetString("ManifestName");

    m_manifestNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlaybackUrl"))
  {
    m_playbackUrl = jsonValue.GetString("PlaybackUrl");

    m_playbackUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceGroup"))
  {
    m_sourceGroup = jsonValue.GetString("SourceGroup");

    m_sourceGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseOutputItem::Jsonize() const
{
  JsonValue payload;

  if(m_dashPlaylistSettingsHasBeenSet)
  {
   payload.WithObject("DashPlaylistSettings", m_dashPlaylistSettings.Jsonize());

  }

  if(m_hlsPlaylistSettingsHasBeenSet)
  {
   payload.WithObject("HlsPlaylistSettings", m_hlsPlaylistSettings.Jsonize());

  }

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("ManifestName", m_manifestName);

  }

  if(m_playbackUrlHasBeenSet)
  {
   payload.WithString("PlaybackUrl", m_playbackUrl);

  }

  if(m_sourceGroupHasBeenSet)
  {
   payload.WithString("SourceGroup", m_sourceGroup);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
