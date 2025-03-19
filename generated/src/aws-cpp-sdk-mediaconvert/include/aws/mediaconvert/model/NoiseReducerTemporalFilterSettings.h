/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/NoiseFilterPostTemporalSharpening.h>
#include <aws/mediaconvert/model/NoiseFilterPostTemporalSharpeningStrength.h>
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
   * Noise reducer filter settings for temporal filter.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/NoiseReducerTemporalFilterSettings">AWS
   * API Reference</a></p>
   */
  class NoiseReducerTemporalFilterSettings
  {
  public:
    AWS_MEDIACONVERT_API NoiseReducerTemporalFilterSettings() = default;
    AWS_MEDIACONVERT_API NoiseReducerTemporalFilterSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API NoiseReducerTemporalFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use Aggressive mode for content that has complex motion. Higher values produce
     * stronger temporal filtering. This filters highly complex scenes more
     * aggressively and creates better VQ for low bitrate outputs.
     */
    inline int GetAggressiveMode() const { return m_aggressiveMode; }
    inline bool AggressiveModeHasBeenSet() const { return m_aggressiveModeHasBeenSet; }
    inline void SetAggressiveMode(int value) { m_aggressiveModeHasBeenSet = true; m_aggressiveMode = value; }
    inline NoiseReducerTemporalFilterSettings& WithAggressiveMode(int value) { SetAggressiveMode(value); return *this;}
    ///@}

    ///@{
    /**
     * When you set Noise reducer to Temporal, the bandwidth and sharpness of your
     * output is reduced. You can optionally use Post temporal sharpening to apply
     * sharpening to the edges of your output. Note that Post temporal sharpening will
     * also make the bandwidth reduction from the Noise reducer smaller. The default
     * behavior, Auto, allows the transcoder to determine whether to apply sharpening,
     * depending on your input type and quality. When you set Post temporal sharpening
     * to Enabled, specify how much sharpening is applied using Post temporal
     * sharpening strength. Set Post temporal sharpening to Disabled to not apply
     * sharpening.
     */
    inline NoiseFilterPostTemporalSharpening GetPostTemporalSharpening() const { return m_postTemporalSharpening; }
    inline bool PostTemporalSharpeningHasBeenSet() const { return m_postTemporalSharpeningHasBeenSet; }
    inline void SetPostTemporalSharpening(NoiseFilterPostTemporalSharpening value) { m_postTemporalSharpeningHasBeenSet = true; m_postTemporalSharpening = value; }
    inline NoiseReducerTemporalFilterSettings& WithPostTemporalSharpening(NoiseFilterPostTemporalSharpening value) { SetPostTemporalSharpening(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Post temporal sharpening strength to define the amount of sharpening the
     * transcoder applies to your output. Set Post temporal sharpening strength to Low,
     * Medium, or High to indicate the amount of sharpening.
     */
    inline NoiseFilterPostTemporalSharpeningStrength GetPostTemporalSharpeningStrength() const { return m_postTemporalSharpeningStrength; }
    inline bool PostTemporalSharpeningStrengthHasBeenSet() const { return m_postTemporalSharpeningStrengthHasBeenSet; }
    inline void SetPostTemporalSharpeningStrength(NoiseFilterPostTemporalSharpeningStrength value) { m_postTemporalSharpeningStrengthHasBeenSet = true; m_postTemporalSharpeningStrength = value; }
    inline NoiseReducerTemporalFilterSettings& WithPostTemporalSharpeningStrength(NoiseFilterPostTemporalSharpeningStrength value) { SetPostTemporalSharpeningStrength(value); return *this;}
    ///@}

    ///@{
    /**
     * The speed of the filter (higher number is faster). Low setting reduces bit rate
     * at the cost of transcode time, high setting improves transcode time at the cost
     * of bit rate.
     */
    inline int GetSpeed() const { return m_speed; }
    inline bool SpeedHasBeenSet() const { return m_speedHasBeenSet; }
    inline void SetSpeed(int value) { m_speedHasBeenSet = true; m_speed = value; }
    inline NoiseReducerTemporalFilterSettings& WithSpeed(int value) { SetSpeed(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the strength of the noise reducing filter on this output. Higher values
     * produce stronger filtering. We recommend the following value ranges, depending
     * on the result that you want: * 0-2 for complexity reduction with minimal
     * sharpness loss * 2-8 for complexity reduction with image preservation * 8-16 for
     * a high level of complexity reduction
     */
    inline int GetStrength() const { return m_strength; }
    inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }
    inline void SetStrength(int value) { m_strengthHasBeenSet = true; m_strength = value; }
    inline NoiseReducerTemporalFilterSettings& WithStrength(int value) { SetStrength(value); return *this;}
    ///@}
  private:

    int m_aggressiveMode{0};
    bool m_aggressiveModeHasBeenSet = false;

    NoiseFilterPostTemporalSharpening m_postTemporalSharpening{NoiseFilterPostTemporalSharpening::NOT_SET};
    bool m_postTemporalSharpeningHasBeenSet = false;

    NoiseFilterPostTemporalSharpeningStrength m_postTemporalSharpeningStrength{NoiseFilterPostTemporalSharpeningStrength::NOT_SET};
    bool m_postTemporalSharpeningStrengthHasBeenSet = false;

    int m_speed{0};
    bool m_speedHasBeenSet = false;

    int m_strength{0};
    bool m_strengthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
