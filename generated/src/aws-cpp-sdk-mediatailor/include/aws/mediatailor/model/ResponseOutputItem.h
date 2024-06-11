﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/DashPlaylistSettings.h>
#include <aws/mediatailor/model/HlsPlaylistSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The output item response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ResponseOutputItem">AWS
   * API Reference</a></p>
   */
  class ResponseOutputItem
  {
  public:
    AWS_MEDIATAILOR_API ResponseOutputItem();
    AWS_MEDIATAILOR_API ResponseOutputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API ResponseOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>DASH manifest configuration settings.</p>
     */
    inline const DashPlaylistSettings& GetDashPlaylistSettings() const{ return m_dashPlaylistSettings; }
    inline bool DashPlaylistSettingsHasBeenSet() const { return m_dashPlaylistSettingsHasBeenSet; }
    inline void SetDashPlaylistSettings(const DashPlaylistSettings& value) { m_dashPlaylistSettingsHasBeenSet = true; m_dashPlaylistSettings = value; }
    inline void SetDashPlaylistSettings(DashPlaylistSettings&& value) { m_dashPlaylistSettingsHasBeenSet = true; m_dashPlaylistSettings = std::move(value); }
    inline ResponseOutputItem& WithDashPlaylistSettings(const DashPlaylistSettings& value) { SetDashPlaylistSettings(value); return *this;}
    inline ResponseOutputItem& WithDashPlaylistSettings(DashPlaylistSettings&& value) { SetDashPlaylistSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>HLS manifest configuration settings.</p>
     */
    inline const HlsPlaylistSettings& GetHlsPlaylistSettings() const{ return m_hlsPlaylistSettings; }
    inline bool HlsPlaylistSettingsHasBeenSet() const { return m_hlsPlaylistSettingsHasBeenSet; }
    inline void SetHlsPlaylistSettings(const HlsPlaylistSettings& value) { m_hlsPlaylistSettingsHasBeenSet = true; m_hlsPlaylistSettings = value; }
    inline void SetHlsPlaylistSettings(HlsPlaylistSettings&& value) { m_hlsPlaylistSettingsHasBeenSet = true; m_hlsPlaylistSettings = std::move(value); }
    inline ResponseOutputItem& WithHlsPlaylistSettings(const HlsPlaylistSettings& value) { SetHlsPlaylistSettings(value); return *this;}
    inline ResponseOutputItem& WithHlsPlaylistSettings(HlsPlaylistSettings&& value) { SetHlsPlaylistSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the manifest for the channel that will appear in the channel
     * output's playback URL.</p>
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }
    inline ResponseOutputItem& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}
    inline ResponseOutputItem& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}
    inline ResponseOutputItem& WithManifestName(const char* value) { SetManifestName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL used for playback by content players.</p>
     */
    inline const Aws::String& GetPlaybackUrl() const{ return m_playbackUrl; }
    inline bool PlaybackUrlHasBeenSet() const { return m_playbackUrlHasBeenSet; }
    inline void SetPlaybackUrl(const Aws::String& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = value; }
    inline void SetPlaybackUrl(Aws::String&& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = std::move(value); }
    inline void SetPlaybackUrl(const char* value) { m_playbackUrlHasBeenSet = true; m_playbackUrl.assign(value); }
    inline ResponseOutputItem& WithPlaybackUrl(const Aws::String& value) { SetPlaybackUrl(value); return *this;}
    inline ResponseOutputItem& WithPlaybackUrl(Aws::String&& value) { SetPlaybackUrl(std::move(value)); return *this;}
    inline ResponseOutputItem& WithPlaybackUrl(const char* value) { SetPlaybackUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string used to associate a package configuration source group with a
     * channel output.</p>
     */
    inline const Aws::String& GetSourceGroup() const{ return m_sourceGroup; }
    inline bool SourceGroupHasBeenSet() const { return m_sourceGroupHasBeenSet; }
    inline void SetSourceGroup(const Aws::String& value) { m_sourceGroupHasBeenSet = true; m_sourceGroup = value; }
    inline void SetSourceGroup(Aws::String&& value) { m_sourceGroupHasBeenSet = true; m_sourceGroup = std::move(value); }
    inline void SetSourceGroup(const char* value) { m_sourceGroupHasBeenSet = true; m_sourceGroup.assign(value); }
    inline ResponseOutputItem& WithSourceGroup(const Aws::String& value) { SetSourceGroup(value); return *this;}
    inline ResponseOutputItem& WithSourceGroup(Aws::String&& value) { SetSourceGroup(std::move(value)); return *this;}
    inline ResponseOutputItem& WithSourceGroup(const char* value) { SetSourceGroup(value); return *this;}
    ///@}
  private:

    DashPlaylistSettings m_dashPlaylistSettings;
    bool m_dashPlaylistSettingsHasBeenSet = false;

    HlsPlaylistSettings m_hlsPlaylistSettings;
    bool m_hlsPlaylistSettingsHasBeenSet = false;

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    Aws::String m_playbackUrl;
    bool m_playbackUrlHasBeenSet = false;

    Aws::String m_sourceGroup;
    bool m_sourceGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
