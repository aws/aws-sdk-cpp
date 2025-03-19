/**
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
    AWS_MEDIATAILOR_API ResponseOutputItem() = default;
    AWS_MEDIATAILOR_API ResponseOutputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API ResponseOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>DASH manifest configuration settings.</p>
     */
    inline const DashPlaylistSettings& GetDashPlaylistSettings() const { return m_dashPlaylistSettings; }
    inline bool DashPlaylistSettingsHasBeenSet() const { return m_dashPlaylistSettingsHasBeenSet; }
    template<typename DashPlaylistSettingsT = DashPlaylistSettings>
    void SetDashPlaylistSettings(DashPlaylistSettingsT&& value) { m_dashPlaylistSettingsHasBeenSet = true; m_dashPlaylistSettings = std::forward<DashPlaylistSettingsT>(value); }
    template<typename DashPlaylistSettingsT = DashPlaylistSettings>
    ResponseOutputItem& WithDashPlaylistSettings(DashPlaylistSettingsT&& value) { SetDashPlaylistSettings(std::forward<DashPlaylistSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>HLS manifest configuration settings.</p>
     */
    inline const HlsPlaylistSettings& GetHlsPlaylistSettings() const { return m_hlsPlaylistSettings; }
    inline bool HlsPlaylistSettingsHasBeenSet() const { return m_hlsPlaylistSettingsHasBeenSet; }
    template<typename HlsPlaylistSettingsT = HlsPlaylistSettings>
    void SetHlsPlaylistSettings(HlsPlaylistSettingsT&& value) { m_hlsPlaylistSettingsHasBeenSet = true; m_hlsPlaylistSettings = std::forward<HlsPlaylistSettingsT>(value); }
    template<typename HlsPlaylistSettingsT = HlsPlaylistSettings>
    ResponseOutputItem& WithHlsPlaylistSettings(HlsPlaylistSettingsT&& value) { SetHlsPlaylistSettings(std::forward<HlsPlaylistSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the manifest for the channel that will appear in the channel
     * output's playback URL.</p>
     */
    inline const Aws::String& GetManifestName() const { return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    template<typename ManifestNameT = Aws::String>
    void SetManifestName(ManifestNameT&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::forward<ManifestNameT>(value); }
    template<typename ManifestNameT = Aws::String>
    ResponseOutputItem& WithManifestName(ManifestNameT&& value) { SetManifestName(std::forward<ManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL used for playback by content players.</p>
     */
    inline const Aws::String& GetPlaybackUrl() const { return m_playbackUrl; }
    inline bool PlaybackUrlHasBeenSet() const { return m_playbackUrlHasBeenSet; }
    template<typename PlaybackUrlT = Aws::String>
    void SetPlaybackUrl(PlaybackUrlT&& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = std::forward<PlaybackUrlT>(value); }
    template<typename PlaybackUrlT = Aws::String>
    ResponseOutputItem& WithPlaybackUrl(PlaybackUrlT&& value) { SetPlaybackUrl(std::forward<PlaybackUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string used to associate a package configuration source group with a
     * channel output.</p>
     */
    inline const Aws::String& GetSourceGroup() const { return m_sourceGroup; }
    inline bool SourceGroupHasBeenSet() const { return m_sourceGroupHasBeenSet; }
    template<typename SourceGroupT = Aws::String>
    void SetSourceGroup(SourceGroupT&& value) { m_sourceGroupHasBeenSet = true; m_sourceGroup = std::forward<SourceGroupT>(value); }
    template<typename SourceGroupT = Aws::String>
    ResponseOutputItem& WithSourceGroup(SourceGroupT&& value) { SetSourceGroup(std::forward<SourceGroupT>(value)); return *this;}
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
