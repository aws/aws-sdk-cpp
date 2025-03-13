/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/NoiseReducerFilter.h>
#include <aws/mediaconvert/model/NoiseReducerFilterSettings.h>
#include <aws/mediaconvert/model/NoiseReducerSpatialFilterSettings.h>
#include <aws/mediaconvert/model/NoiseReducerTemporalFilterSettings.h>
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
   * Enable the Noise reducer feature to remove noise from your video output if
   * necessary. Enable or disable this feature for each output individually. This
   * setting is disabled by default. When you enable Noise reducer, you must also
   * select a value for Noise reducer filter. For AVC outputs, when you include Noise
   * reducer, you cannot include the Bandwidth reduction filter.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/NoiseReducer">AWS
   * API Reference</a></p>
   */
  class NoiseReducer
  {
  public:
    AWS_MEDIACONVERT_API NoiseReducer() = default;
    AWS_MEDIACONVERT_API NoiseReducer(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API NoiseReducer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use Noise reducer filter to select one of the following spatial image filtering
     * functions. To use this setting, you must also enable Noise reducer. * Bilateral
     * preserves edges while reducing noise. * Mean (softest), Gaussian, Lanczos, and
     * Sharpen (sharpest) do convolution filtering. * Conserve does min/max noise
     * reduction. * Spatial does frequency-domain filtering based on JND principles. *
     * Temporal optimizes video quality for complex motion.
     */
    inline NoiseReducerFilter GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(NoiseReducerFilter value) { m_filterHasBeenSet = true; m_filter = value; }
    inline NoiseReducer& WithFilter(NoiseReducerFilter value) { SetFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings for a noise reducer filter
     */
    inline const NoiseReducerFilterSettings& GetFilterSettings() const { return m_filterSettings; }
    inline bool FilterSettingsHasBeenSet() const { return m_filterSettingsHasBeenSet; }
    template<typename FilterSettingsT = NoiseReducerFilterSettings>
    void SetFilterSettings(FilterSettingsT&& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = std::forward<FilterSettingsT>(value); }
    template<typename FilterSettingsT = NoiseReducerFilterSettings>
    NoiseReducer& WithFilterSettings(FilterSettingsT&& value) { SetFilterSettings(std::forward<FilterSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Noise reducer filter settings for spatial filter.
     */
    inline const NoiseReducerSpatialFilterSettings& GetSpatialFilterSettings() const { return m_spatialFilterSettings; }
    inline bool SpatialFilterSettingsHasBeenSet() const { return m_spatialFilterSettingsHasBeenSet; }
    template<typename SpatialFilterSettingsT = NoiseReducerSpatialFilterSettings>
    void SetSpatialFilterSettings(SpatialFilterSettingsT&& value) { m_spatialFilterSettingsHasBeenSet = true; m_spatialFilterSettings = std::forward<SpatialFilterSettingsT>(value); }
    template<typename SpatialFilterSettingsT = NoiseReducerSpatialFilterSettings>
    NoiseReducer& WithSpatialFilterSettings(SpatialFilterSettingsT&& value) { SetSpatialFilterSettings(std::forward<SpatialFilterSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Noise reducer filter settings for temporal filter.
     */
    inline const NoiseReducerTemporalFilterSettings& GetTemporalFilterSettings() const { return m_temporalFilterSettings; }
    inline bool TemporalFilterSettingsHasBeenSet() const { return m_temporalFilterSettingsHasBeenSet; }
    template<typename TemporalFilterSettingsT = NoiseReducerTemporalFilterSettings>
    void SetTemporalFilterSettings(TemporalFilterSettingsT&& value) { m_temporalFilterSettingsHasBeenSet = true; m_temporalFilterSettings = std::forward<TemporalFilterSettingsT>(value); }
    template<typename TemporalFilterSettingsT = NoiseReducerTemporalFilterSettings>
    NoiseReducer& WithTemporalFilterSettings(TemporalFilterSettingsT&& value) { SetTemporalFilterSettings(std::forward<TemporalFilterSettingsT>(value)); return *this;}
    ///@}
  private:

    NoiseReducerFilter m_filter{NoiseReducerFilter::NOT_SET};
    bool m_filterHasBeenSet = false;

    NoiseReducerFilterSettings m_filterSettings;
    bool m_filterSettingsHasBeenSet = false;

    NoiseReducerSpatialFilterSettings m_spatialFilterSettings;
    bool m_spatialFilterSettingsHasBeenSet = false;

    NoiseReducerTemporalFilterSettings m_temporalFilterSettings;
    bool m_temporalFilterSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
