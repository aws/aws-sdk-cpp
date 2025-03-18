/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/MxfAfdSignaling.h>
#include <aws/mediaconvert/model/MxfProfile.h>
#include <aws/mediaconvert/model/MxfXavcProfileSettings.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * These settings relate to your MXF output container.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MxfSettings">AWS
   * API Reference</a></p>
   */
  class MxfSettings
  {
  public:
    AWS_MEDIACONVERT_API MxfSettings() = default;
    AWS_MEDIACONVERT_API MxfSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API MxfSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy to exclude AFD signaling from the MXF wrapper. Choose Copy from video
     * stream to copy the AFD values from the video stream for this output to the MXF
     * wrapper. Regardless of which option you choose, the AFD values remain in the
     * video stream. Related settings: To set up your output to include or exclude AFD
     * values, see AfdSignaling, under VideoDescription. On the console, find AFD
     * signaling under the output's video encoding settings.
     */
    inline MxfAfdSignaling GetAfdSignaling() const { return m_afdSignaling; }
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }
    inline void SetAfdSignaling(MxfAfdSignaling value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }
    inline MxfSettings& WithAfdSignaling(MxfAfdSignaling value) { SetAfdSignaling(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the MXF profile, also called shim, for this output. To automatically
     * select a profile according to your output video codec and resolution, leave
     * blank. For a list of codecs supported with each MXF profile, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/codecs-supported-with-each-mxf-profile.html.
     * For more information about the automatic selection behavior, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/default-automatic-selection-of-mxf-profiles.html.
     */
    inline MxfProfile GetProfile() const { return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(MxfProfile value) { m_profileHasBeenSet = true; m_profile = value; }
    inline MxfSettings& WithProfile(MxfProfile value) { SetProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the XAVC profile settings for MXF outputs when you set your MXF profile
     * to XAVC.
     */
    inline const MxfXavcProfileSettings& GetXavcProfileSettings() const { return m_xavcProfileSettings; }
    inline bool XavcProfileSettingsHasBeenSet() const { return m_xavcProfileSettingsHasBeenSet; }
    template<typename XavcProfileSettingsT = MxfXavcProfileSettings>
    void SetXavcProfileSettings(XavcProfileSettingsT&& value) { m_xavcProfileSettingsHasBeenSet = true; m_xavcProfileSettings = std::forward<XavcProfileSettingsT>(value); }
    template<typename XavcProfileSettingsT = MxfXavcProfileSettings>
    MxfSettings& WithXavcProfileSettings(XavcProfileSettingsT&& value) { SetXavcProfileSettings(std::forward<XavcProfileSettingsT>(value)); return *this;}
    ///@}
  private:

    MxfAfdSignaling m_afdSignaling{MxfAfdSignaling::NOT_SET};
    bool m_afdSignalingHasBeenSet = false;

    MxfProfile m_profile{MxfProfile::NOT_SET};
    bool m_profileHasBeenSet = false;

    MxfXavcProfileSettings m_xavcProfileSettings;
    bool m_xavcProfileSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
