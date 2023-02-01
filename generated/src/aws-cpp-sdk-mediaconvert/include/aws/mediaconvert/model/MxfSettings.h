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
    AWS_MEDIACONVERT_API MxfSettings();
    AWS_MEDIACONVERT_API MxfSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API MxfSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy (NO_COPY) to exclude AFD signaling from the MXF wrapper. Choose Copy
     * from video stream (COPY_FROM_VIDEO) to copy the AFD values from the video stream
     * for this output to the MXF wrapper. Regardless of which option you choose, the
     * AFD values remain in the video stream. Related settings: To set up your output
     * to include or exclude AFD values, see AfdSignaling, under VideoDescription. On
     * the console, find AFD signaling under the output's video encoding settings.
     */
    inline const MxfAfdSignaling& GetAfdSignaling() const{ return m_afdSignaling; }

    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy (NO_COPY) to exclude AFD signaling from the MXF wrapper. Choose Copy
     * from video stream (COPY_FROM_VIDEO) to copy the AFD values from the video stream
     * for this output to the MXF wrapper. Regardless of which option you choose, the
     * AFD values remain in the video stream. Related settings: To set up your output
     * to include or exclude AFD values, see AfdSignaling, under VideoDescription. On
     * the console, find AFD signaling under the output's video encoding settings.
     */
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }

    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy (NO_COPY) to exclude AFD signaling from the MXF wrapper. Choose Copy
     * from video stream (COPY_FROM_VIDEO) to copy the AFD values from the video stream
     * for this output to the MXF wrapper. Regardless of which option you choose, the
     * AFD values remain in the video stream. Related settings: To set up your output
     * to include or exclude AFD values, see AfdSignaling, under VideoDescription. On
     * the console, find AFD signaling under the output's video encoding settings.
     */
    inline void SetAfdSignaling(const MxfAfdSignaling& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }

    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy (NO_COPY) to exclude AFD signaling from the MXF wrapper. Choose Copy
     * from video stream (COPY_FROM_VIDEO) to copy the AFD values from the video stream
     * for this output to the MXF wrapper. Regardless of which option you choose, the
     * AFD values remain in the video stream. Related settings: To set up your output
     * to include or exclude AFD values, see AfdSignaling, under VideoDescription. On
     * the console, find AFD signaling under the output's video encoding settings.
     */
    inline void SetAfdSignaling(MxfAfdSignaling&& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = std::move(value); }

    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy (NO_COPY) to exclude AFD signaling from the MXF wrapper. Choose Copy
     * from video stream (COPY_FROM_VIDEO) to copy the AFD values from the video stream
     * for this output to the MXF wrapper. Regardless of which option you choose, the
     * AFD values remain in the video stream. Related settings: To set up your output
     * to include or exclude AFD values, see AfdSignaling, under VideoDescription. On
     * the console, find AFD signaling under the output's video encoding settings.
     */
    inline MxfSettings& WithAfdSignaling(const MxfAfdSignaling& value) { SetAfdSignaling(value); return *this;}

    /**
     * Optional. When you have AFD signaling set up in your output video stream, use
     * this setting to choose whether to also include it in the MXF wrapper. Choose
     * Don't copy (NO_COPY) to exclude AFD signaling from the MXF wrapper. Choose Copy
     * from video stream (COPY_FROM_VIDEO) to copy the AFD values from the video stream
     * for this output to the MXF wrapper. Regardless of which option you choose, the
     * AFD values remain in the video stream. Related settings: To set up your output
     * to include or exclude AFD values, see AfdSignaling, under VideoDescription. On
     * the console, find AFD signaling under the output's video encoding settings.
     */
    inline MxfSettings& WithAfdSignaling(MxfAfdSignaling&& value) { SetAfdSignaling(std::move(value)); return *this;}


    /**
     * Specify the MXF profile, also called shim, for this output. When you choose
     * Auto, MediaConvert chooses a profile based on the video codec and resolution.
     * For a list of codecs supported with each MXF profile, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/codecs-supported-with-each-mxf-profile.html.
     * For more information about the automatic selection behavior, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/default-automatic-selection-of-mxf-profiles.html.
     */
    inline const MxfProfile& GetProfile() const{ return m_profile; }

    /**
     * Specify the MXF profile, also called shim, for this output. When you choose
     * Auto, MediaConvert chooses a profile based on the video codec and resolution.
     * For a list of codecs supported with each MXF profile, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/codecs-supported-with-each-mxf-profile.html.
     * For more information about the automatic selection behavior, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/default-automatic-selection-of-mxf-profiles.html.
     */
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }

    /**
     * Specify the MXF profile, also called shim, for this output. When you choose
     * Auto, MediaConvert chooses a profile based on the video codec and resolution.
     * For a list of codecs supported with each MXF profile, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/codecs-supported-with-each-mxf-profile.html.
     * For more information about the automatic selection behavior, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/default-automatic-selection-of-mxf-profiles.html.
     */
    inline void SetProfile(const MxfProfile& value) { m_profileHasBeenSet = true; m_profile = value; }

    /**
     * Specify the MXF profile, also called shim, for this output. When you choose
     * Auto, MediaConvert chooses a profile based on the video codec and resolution.
     * For a list of codecs supported with each MXF profile, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/codecs-supported-with-each-mxf-profile.html.
     * For more information about the automatic selection behavior, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/default-automatic-selection-of-mxf-profiles.html.
     */
    inline void SetProfile(MxfProfile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }

    /**
     * Specify the MXF profile, also called shim, for this output. When you choose
     * Auto, MediaConvert chooses a profile based on the video codec and resolution.
     * For a list of codecs supported with each MXF profile, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/codecs-supported-with-each-mxf-profile.html.
     * For more information about the automatic selection behavior, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/default-automatic-selection-of-mxf-profiles.html.
     */
    inline MxfSettings& WithProfile(const MxfProfile& value) { SetProfile(value); return *this;}

    /**
     * Specify the MXF profile, also called shim, for this output. When you choose
     * Auto, MediaConvert chooses a profile based on the video codec and resolution.
     * For a list of codecs supported with each MXF profile, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/codecs-supported-with-each-mxf-profile.html.
     * For more information about the automatic selection behavior, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/default-automatic-selection-of-mxf-profiles.html.
     */
    inline MxfSettings& WithProfile(MxfProfile&& value) { SetProfile(std::move(value)); return *this;}


    /**
     * Specify the XAVC profile settings for MXF outputs when you set your MXF profile
     * to XAVC.
     */
    inline const MxfXavcProfileSettings& GetXavcProfileSettings() const{ return m_xavcProfileSettings; }

    /**
     * Specify the XAVC profile settings for MXF outputs when you set your MXF profile
     * to XAVC.
     */
    inline bool XavcProfileSettingsHasBeenSet() const { return m_xavcProfileSettingsHasBeenSet; }

    /**
     * Specify the XAVC profile settings for MXF outputs when you set your MXF profile
     * to XAVC.
     */
    inline void SetXavcProfileSettings(const MxfXavcProfileSettings& value) { m_xavcProfileSettingsHasBeenSet = true; m_xavcProfileSettings = value; }

    /**
     * Specify the XAVC profile settings for MXF outputs when you set your MXF profile
     * to XAVC.
     */
    inline void SetXavcProfileSettings(MxfXavcProfileSettings&& value) { m_xavcProfileSettingsHasBeenSet = true; m_xavcProfileSettings = std::move(value); }

    /**
     * Specify the XAVC profile settings for MXF outputs when you set your MXF profile
     * to XAVC.
     */
    inline MxfSettings& WithXavcProfileSettings(const MxfXavcProfileSettings& value) { SetXavcProfileSettings(value); return *this;}

    /**
     * Specify the XAVC profile settings for MXF outputs when you set your MXF profile
     * to XAVC.
     */
    inline MxfSettings& WithXavcProfileSettings(MxfXavcProfileSettings&& value) { SetXavcProfileSettings(std::move(value)); return *this;}

  private:

    MxfAfdSignaling m_afdSignaling;
    bool m_afdSignalingHasBeenSet = false;

    MxfProfile m_profile;
    bool m_profileHasBeenSet = false;

    MxfXavcProfileSettings m_xavcProfileSettings;
    bool m_xavcProfileSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
