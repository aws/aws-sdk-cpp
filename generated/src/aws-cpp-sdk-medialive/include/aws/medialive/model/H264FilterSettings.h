/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/TemporalFilterSettings.h>
#include <aws/medialive/model/BandwidthReductionFilterSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * H264 Filter Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/H264FilterSettings">AWS
   * API Reference</a></p>
   */
  class H264FilterSettings
  {
  public:
    AWS_MEDIALIVE_API H264FilterSettings() = default;
    AWS_MEDIALIVE_API H264FilterSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API H264FilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const TemporalFilterSettings& GetTemporalFilterSettings() const { return m_temporalFilterSettings; }
    inline bool TemporalFilterSettingsHasBeenSet() const { return m_temporalFilterSettingsHasBeenSet; }
    template<typename TemporalFilterSettingsT = TemporalFilterSettings>
    void SetTemporalFilterSettings(TemporalFilterSettingsT&& value) { m_temporalFilterSettingsHasBeenSet = true; m_temporalFilterSettings = std::forward<TemporalFilterSettingsT>(value); }
    template<typename TemporalFilterSettingsT = TemporalFilterSettings>
    H264FilterSettings& WithTemporalFilterSettings(TemporalFilterSettingsT&& value) { SetTemporalFilterSettings(std::forward<TemporalFilterSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BandwidthReductionFilterSettings& GetBandwidthReductionFilterSettings() const { return m_bandwidthReductionFilterSettings; }
    inline bool BandwidthReductionFilterSettingsHasBeenSet() const { return m_bandwidthReductionFilterSettingsHasBeenSet; }
    template<typename BandwidthReductionFilterSettingsT = BandwidthReductionFilterSettings>
    void SetBandwidthReductionFilterSettings(BandwidthReductionFilterSettingsT&& value) { m_bandwidthReductionFilterSettingsHasBeenSet = true; m_bandwidthReductionFilterSettings = std::forward<BandwidthReductionFilterSettingsT>(value); }
    template<typename BandwidthReductionFilterSettingsT = BandwidthReductionFilterSettings>
    H264FilterSettings& WithBandwidthReductionFilterSettings(BandwidthReductionFilterSettingsT&& value) { SetBandwidthReductionFilterSettings(std::forward<BandwidthReductionFilterSettingsT>(value)); return *this;}
    ///@}
  private:

    TemporalFilterSettings m_temporalFilterSettings;
    bool m_temporalFilterSettingsHasBeenSet = false;

    BandwidthReductionFilterSettings m_bandwidthReductionFilterSettings;
    bool m_bandwidthReductionFilterSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
