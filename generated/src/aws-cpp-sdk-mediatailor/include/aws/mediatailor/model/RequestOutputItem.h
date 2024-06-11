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
    AWS_MEDIATAILOR_API RequestOutputItem();
    AWS_MEDIATAILOR_API RequestOutputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API RequestOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>DASH manifest configuration parameters.</p>
     */
    inline const DashPlaylistSettings& GetDashPlaylistSettings() const{ return m_dashPlaylistSettings; }
    inline bool DashPlaylistSettingsHasBeenSet() const { return m_dashPlaylistSettingsHasBeenSet; }
    inline void SetDashPlaylistSettings(const DashPlaylistSettings& value) { m_dashPlaylistSettingsHasBeenSet = true; m_dashPlaylistSettings = value; }
    inline void SetDashPlaylistSettings(DashPlaylistSettings&& value) { m_dashPlaylistSettingsHasBeenSet = true; m_dashPlaylistSettings = std::move(value); }
    inline RequestOutputItem& WithDashPlaylistSettings(const DashPlaylistSettings& value) { SetDashPlaylistSettings(value); return *this;}
    inline RequestOutputItem& WithDashPlaylistSettings(DashPlaylistSettings&& value) { SetDashPlaylistSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>HLS playlist configuration parameters.</p>
     */
    inline const HlsPlaylistSettings& GetHlsPlaylistSettings() const{ return m_hlsPlaylistSettings; }
    inline bool HlsPlaylistSettingsHasBeenSet() const { return m_hlsPlaylistSettingsHasBeenSet; }
    inline void SetHlsPlaylistSettings(const HlsPlaylistSettings& value) { m_hlsPlaylistSettingsHasBeenSet = true; m_hlsPlaylistSettings = value; }
    inline void SetHlsPlaylistSettings(HlsPlaylistSettings&& value) { m_hlsPlaylistSettingsHasBeenSet = true; m_hlsPlaylistSettings = std::move(value); }
    inline RequestOutputItem& WithHlsPlaylistSettings(const HlsPlaylistSettings& value) { SetHlsPlaylistSettings(value); return *this;}
    inline RequestOutputItem& WithHlsPlaylistSettings(HlsPlaylistSettings&& value) { SetHlsPlaylistSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the manifest for the channel. The name appears in the
     * <code>PlaybackUrl</code>.</p>
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }
    inline RequestOutputItem& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}
    inline RequestOutputItem& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}
    inline RequestOutputItem& WithManifestName(const char* value) { SetManifestName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string used to match which <code>HttpPackageConfiguration</code> is used
     * for each <code>VodSource</code>.</p>
     */
    inline const Aws::String& GetSourceGroup() const{ return m_sourceGroup; }
    inline bool SourceGroupHasBeenSet() const { return m_sourceGroupHasBeenSet; }
    inline void SetSourceGroup(const Aws::String& value) { m_sourceGroupHasBeenSet = true; m_sourceGroup = value; }
    inline void SetSourceGroup(Aws::String&& value) { m_sourceGroupHasBeenSet = true; m_sourceGroup = std::move(value); }
    inline void SetSourceGroup(const char* value) { m_sourceGroupHasBeenSet = true; m_sourceGroup.assign(value); }
    inline RequestOutputItem& WithSourceGroup(const Aws::String& value) { SetSourceGroup(value); return *this;}
    inline RequestOutputItem& WithSourceGroup(Aws::String&& value) { SetSourceGroup(std::move(value)); return *this;}
    inline RequestOutputItem& WithSourceGroup(const char* value) { SetSourceGroup(value); return *this;}
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
