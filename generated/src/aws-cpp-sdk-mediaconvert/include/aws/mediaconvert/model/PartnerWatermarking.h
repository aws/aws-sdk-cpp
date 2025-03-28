﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/NexGuardFileMarkerSettings.h>
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
   * If you work with a third party video watermarking partner, use the group of
   * settings that correspond with your watermarking partner to include watermarks in
   * your output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/PartnerWatermarking">AWS
   * API Reference</a></p>
   */
  class PartnerWatermarking
  {
  public:
    AWS_MEDIACONVERT_API PartnerWatermarking() = default;
    AWS_MEDIACONVERT_API PartnerWatermarking(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API PartnerWatermarking& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * For forensic video watermarking, MediaConvert supports Nagra NexGuard File
     * Marker watermarking. MediaConvert supports both PreRelease Content (NGPR/G2) and
     * OTT Streaming workflows.
     */
    inline const NexGuardFileMarkerSettings& GetNexguardFileMarkerSettings() const { return m_nexguardFileMarkerSettings; }
    inline bool NexguardFileMarkerSettingsHasBeenSet() const { return m_nexguardFileMarkerSettingsHasBeenSet; }
    template<typename NexguardFileMarkerSettingsT = NexGuardFileMarkerSettings>
    void SetNexguardFileMarkerSettings(NexguardFileMarkerSettingsT&& value) { m_nexguardFileMarkerSettingsHasBeenSet = true; m_nexguardFileMarkerSettings = std::forward<NexguardFileMarkerSettingsT>(value); }
    template<typename NexguardFileMarkerSettingsT = NexGuardFileMarkerSettings>
    PartnerWatermarking& WithNexguardFileMarkerSettings(NexguardFileMarkerSettingsT&& value) { SetNexguardFileMarkerSettings(std::forward<NexguardFileMarkerSettingsT>(value)); return *this;}
    ///@}
  private:

    NexGuardFileMarkerSettings m_nexguardFileMarkerSettings;
    bool m_nexguardFileMarkerSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
