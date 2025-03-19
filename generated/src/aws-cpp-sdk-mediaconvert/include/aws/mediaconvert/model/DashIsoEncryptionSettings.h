/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DashIsoPlaybackDeviceCompatibility.h>
#include <aws/mediaconvert/model/SpekeKeyProvider.h>
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
   * Specifies DRM settings for DASH outputs.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DashIsoEncryptionSettings">AWS
   * API Reference</a></p>
   */
  class DashIsoEncryptionSettings
  {
  public:
    AWS_MEDIACONVERT_API DashIsoEncryptionSettings() = default;
    AWS_MEDIACONVERT_API DashIsoEncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DashIsoEncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * This setting can improve the compatibility of your output with video players on
     * obsolete devices. It applies only to DASH H.264 outputs with DRM encryption.
     * Choose Unencrypted SEI only to correct problems with playback on older devices.
     * Otherwise, keep the default setting CENC v1. If you choose Unencrypted SEI, for
     * that output, the service will exclude the access unit delimiter and will leave
     * the SEI NAL units unencrypted.
     */
    inline DashIsoPlaybackDeviceCompatibility GetPlaybackDeviceCompatibility() const { return m_playbackDeviceCompatibility; }
    inline bool PlaybackDeviceCompatibilityHasBeenSet() const { return m_playbackDeviceCompatibilityHasBeenSet; }
    inline void SetPlaybackDeviceCompatibility(DashIsoPlaybackDeviceCompatibility value) { m_playbackDeviceCompatibilityHasBeenSet = true; m_playbackDeviceCompatibility = value; }
    inline DashIsoEncryptionSettings& WithPlaybackDeviceCompatibility(DashIsoPlaybackDeviceCompatibility value) { SetPlaybackDeviceCompatibility(value); return *this;}
    ///@}

    ///@{
    /**
     * If your output group type is HLS, DASH, or Microsoft Smooth, use these settings
     * when doing DRM encryption with a SPEKE-compliant key provider. If your output
     * group type is CMAF, use the SpekeKeyProviderCmaf settings instead.
     */
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const { return m_spekeKeyProvider; }
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }
    template<typename SpekeKeyProviderT = SpekeKeyProvider>
    void SetSpekeKeyProvider(SpekeKeyProviderT&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::forward<SpekeKeyProviderT>(value); }
    template<typename SpekeKeyProviderT = SpekeKeyProvider>
    DashIsoEncryptionSettings& WithSpekeKeyProvider(SpekeKeyProviderT&& value) { SetSpekeKeyProvider(std::forward<SpekeKeyProviderT>(value)); return *this;}
    ///@}
  private:

    DashIsoPlaybackDeviceCompatibility m_playbackDeviceCompatibility{DashIsoPlaybackDeviceCompatibility::NOT_SET};
    bool m_playbackDeviceCompatibilityHasBeenSet = false;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
