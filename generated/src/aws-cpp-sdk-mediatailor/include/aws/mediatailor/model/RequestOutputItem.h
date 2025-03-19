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
   * <p>The output configuration for this channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/RequestOutputItem">AWS
   * API Reference</a></p>
   */
  class RequestOutputItem
  {
  public:
    AWS_MEDIATAILOR_API RequestOutputItem() = default;
    AWS_MEDIATAILOR_API RequestOutputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API RequestOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>DASH manifest configuration parameters.</p>
     */
    inline const DashPlaylistSettings& GetDashPlaylistSettings() const { return m_dashPlaylistSettings; }
    inline bool DashPlaylistSettingsHasBeenSet() const { return m_dashPlaylistSettingsHasBeenSet; }
    template<typename DashPlaylistSettingsT = DashPlaylistSettings>
    void SetDashPlaylistSettings(DashPlaylistSettingsT&& value) { m_dashPlaylistSettingsHasBeenSet = true; m_dashPlaylistSettings = std::forward<DashPlaylistSettingsT>(value); }
    template<typename DashPlaylistSettingsT = DashPlaylistSettings>
    RequestOutputItem& WithDashPlaylistSettings(DashPlaylistSettingsT&& value) { SetDashPlaylistSettings(std::forward<DashPlaylistSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>HLS playlist configuration parameters.</p>
     */
    inline const HlsPlaylistSettings& GetHlsPlaylistSettings() const { return m_hlsPlaylistSettings; }
    inline bool HlsPlaylistSettingsHasBeenSet() const { return m_hlsPlaylistSettingsHasBeenSet; }
    template<typename HlsPlaylistSettingsT = HlsPlaylistSettings>
    void SetHlsPlaylistSettings(HlsPlaylistSettingsT&& value) { m_hlsPlaylistSettingsHasBeenSet = true; m_hlsPlaylistSettings = std::forward<HlsPlaylistSettingsT>(value); }
    template<typename HlsPlaylistSettingsT = HlsPlaylistSettings>
    RequestOutputItem& WithHlsPlaylistSettings(HlsPlaylistSettingsT&& value) { SetHlsPlaylistSettings(std::forward<HlsPlaylistSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the manifest for the channel. The name appears in the
     * <code>PlaybackUrl</code>.</p>
     */
    inline const Aws::String& GetManifestName() const { return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    template<typename ManifestNameT = Aws::String>
    void SetManifestName(ManifestNameT&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::forward<ManifestNameT>(value); }
    template<typename ManifestNameT = Aws::String>
    RequestOutputItem& WithManifestName(ManifestNameT&& value) { SetManifestName(std::forward<ManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string used to match which <code>HttpPackageConfiguration</code> is used
     * for each <code>VodSource</code>.</p>
     */
    inline const Aws::String& GetSourceGroup() const { return m_sourceGroup; }
    inline bool SourceGroupHasBeenSet() const { return m_sourceGroupHasBeenSet; }
    template<typename SourceGroupT = Aws::String>
    void SetSourceGroup(SourceGroupT&& value) { m_sourceGroupHasBeenSet = true; m_sourceGroup = std::forward<SourceGroupT>(value); }
    template<typename SourceGroupT = Aws::String>
    RequestOutputItem& WithSourceGroup(SourceGroupT&& value) { SetSourceGroup(std::forward<SourceGroupT>(value)); return *this;}
    ///@}
  private:

    DashPlaylistSettings m_dashPlaylistSettings;
    bool m_dashPlaylistSettingsHasBeenSet = false;

    HlsPlaylistSettings m_hlsPlaylistSettings;
    bool m_hlsPlaylistSettingsHasBeenSet = false;

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    Aws::String m_sourceGroup;
    bool m_sourceGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
