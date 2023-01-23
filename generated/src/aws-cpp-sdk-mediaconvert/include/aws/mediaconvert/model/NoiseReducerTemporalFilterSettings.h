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
    AWS_MEDIACONVERT_API NoiseReducerTemporalFilterSettings();
    AWS_MEDIACONVERT_API NoiseReducerTemporalFilterSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API NoiseReducerTemporalFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use Aggressive mode for content that has complex motion. Higher values produce
     * stronger temporal filtering. This filters highly complex scenes more
     * aggressively and creates better VQ for low bitrate outputs.
     */
    inline int GetAggressiveMode() const{ return m_aggressiveMode; }

    /**
     * Use Aggressive mode for content that has complex motion. Higher values produce
     * stronger temporal filtering. This filters highly complex scenes more
     * aggressively and creates better VQ for low bitrate outputs.
     */
    inline bool AggressiveModeHasBeenSet() const { return m_aggressiveModeHasBeenSet; }

    /**
     * Use Aggressive mode for content that has complex motion. Higher values produce
     * stronger temporal filtering. This filters highly complex scenes more
     * aggressively and creates better VQ for low bitrate outputs.
     */
    inline void SetAggressiveMode(int value) { m_aggressiveModeHasBeenSet = true; m_aggressiveMode = value; }

    /**
     * Use Aggressive mode for content that has complex motion. Higher values produce
     * stronger temporal filtering. This filters highly complex scenes more
     * aggressively and creates better VQ for low bitrate outputs.
     */
    inline NoiseReducerTemporalFilterSettings& WithAggressiveMode(int value) { SetAggressiveMode(value); return *this;}


    /**
     * When you set Noise reducer (noiseReducer) to Temporal (TEMPORAL), the bandwidth
     * and sharpness of your output is reduced. You can optionally use Post temporal
     * sharpening (postTemporalSharpening) to apply sharpening to the edges of your
     * output. Note that Post temporal sharpening will also make the bandwidth
     * reduction from the Noise reducer smaller. The default behavior, Auto (AUTO),
     * allows the transcoder to determine whether to apply sharpening, depending on
     * your input type and quality. When you set Post temporal sharpening to Enabled
     * (ENABLED), specify how much sharpening is applied using Post temporal sharpening
     * strength (postTemporalSharpeningStrength). Set Post temporal sharpening to
     * Disabled (DISABLED) to not apply sharpening.
     */
    inline const NoiseFilterPostTemporalSharpening& GetPostTemporalSharpening() const{ return m_postTemporalSharpening; }

    /**
     * When you set Noise reducer (noiseReducer) to Temporal (TEMPORAL), the bandwidth
     * and sharpness of your output is reduced. You can optionally use Post temporal
     * sharpening (postTemporalSharpening) to apply sharpening to the edges of your
     * output. Note that Post temporal sharpening will also make the bandwidth
     * reduction from the Noise reducer smaller. The default behavior, Auto (AUTO),
     * allows the transcoder to determine whether to apply sharpening, depending on
     * your input type and quality. When you set Post temporal sharpening to Enabled
     * (ENABLED), specify how much sharpening is applied using Post temporal sharpening
     * strength (postTemporalSharpeningStrength). Set Post temporal sharpening to
     * Disabled (DISABLED) to not apply sharpening.
     */
    inline bool PostTemporalSharpeningHasBeenSet() const { return m_postTemporalSharpeningHasBeenSet; }

    /**
     * When you set Noise reducer (noiseReducer) to Temporal (TEMPORAL), the bandwidth
     * and sharpness of your output is reduced. You can optionally use Post temporal
     * sharpening (postTemporalSharpening) to apply sharpening to the edges of your
     * output. Note that Post temporal sharpening will also make the bandwidth
     * reduction from the Noise reducer smaller. The default behavior, Auto (AUTO),
     * allows the transcoder to determine whether to apply sharpening, depending on
     * your input type and quality. When you set Post temporal sharpening to Enabled
     * (ENABLED), specify how much sharpening is applied using Post temporal sharpening
     * strength (postTemporalSharpeningStrength). Set Post temporal sharpening to
     * Disabled (DISABLED) to not apply sharpening.
     */
    inline void SetPostTemporalSharpening(const NoiseFilterPostTemporalSharpening& value) { m_postTemporalSharpeningHasBeenSet = true; m_postTemporalSharpening = value; }

    /**
     * When you set Noise reducer (noiseReducer) to Temporal (TEMPORAL), the bandwidth
     * and sharpness of your output is reduced. You can optionally use Post temporal
     * sharpening (postTemporalSharpening) to apply sharpening to the edges of your
     * output. Note that Post temporal sharpening will also make the bandwidth
     * reduction from the Noise reducer smaller. The default behavior, Auto (AUTO),
     * allows the transcoder to determine whether to apply sharpening, depending on
     * your input type and quality. When you set Post temporal sharpening to Enabled
     * (ENABLED), specify how much sharpening is applied using Post temporal sharpening
     * strength (postTemporalSharpeningStrength). Set Post temporal sharpening to
     * Disabled (DISABLED) to not apply sharpening.
     */
    inline void SetPostTemporalSharpening(NoiseFilterPostTemporalSharpening&& value) { m_postTemporalSharpeningHasBeenSet = true; m_postTemporalSharpening = std::move(value); }

    /**
     * When you set Noise reducer (noiseReducer) to Temporal (TEMPORAL), the bandwidth
     * and sharpness of your output is reduced. You can optionally use Post temporal
     * sharpening (postTemporalSharpening) to apply sharpening to the edges of your
     * output. Note that Post temporal sharpening will also make the bandwidth
     * reduction from the Noise reducer smaller. The default behavior, Auto (AUTO),
     * allows the transcoder to determine whether to apply sharpening, depending on
     * your input type and quality. When you set Post temporal sharpening to Enabled
     * (ENABLED), specify how much sharpening is applied using Post temporal sharpening
     * strength (postTemporalSharpeningStrength). Set Post temporal sharpening to
     * Disabled (DISABLED) to not apply sharpening.
     */
    inline NoiseReducerTemporalFilterSettings& WithPostTemporalSharpening(const NoiseFilterPostTemporalSharpening& value) { SetPostTemporalSharpening(value); return *this;}

    /**
     * When you set Noise reducer (noiseReducer) to Temporal (TEMPORAL), the bandwidth
     * and sharpness of your output is reduced. You can optionally use Post temporal
     * sharpening (postTemporalSharpening) to apply sharpening to the edges of your
     * output. Note that Post temporal sharpening will also make the bandwidth
     * reduction from the Noise reducer smaller. The default behavior, Auto (AUTO),
     * allows the transcoder to determine whether to apply sharpening, depending on
     * your input type and quality. When you set Post temporal sharpening to Enabled
     * (ENABLED), specify how much sharpening is applied using Post temporal sharpening
     * strength (postTemporalSharpeningStrength). Set Post temporal sharpening to
     * Disabled (DISABLED) to not apply sharpening.
     */
    inline NoiseReducerTemporalFilterSettings& WithPostTemporalSharpening(NoiseFilterPostTemporalSharpening&& value) { SetPostTemporalSharpening(std::move(value)); return *this;}


    /**
     * Use Post temporal sharpening strength (postTemporalSharpeningStrength) to define
     * the amount of sharpening the transcoder applies to your output. Set Post
     * temporal sharpening strength to Low (LOW), Medium (MEDIUM), or High (HIGH) to
     * indicate the amount of sharpening.
     */
    inline const NoiseFilterPostTemporalSharpeningStrength& GetPostTemporalSharpeningStrength() const{ return m_postTemporalSharpeningStrength; }

    /**
     * Use Post temporal sharpening strength (postTemporalSharpeningStrength) to define
     * the amount of sharpening the transcoder applies to your output. Set Post
     * temporal sharpening strength to Low (LOW), Medium (MEDIUM), or High (HIGH) to
     * indicate the amount of sharpening.
     */
    inline bool PostTemporalSharpeningStrengthHasBeenSet() const { return m_postTemporalSharpeningStrengthHasBeenSet; }

    /**
     * Use Post temporal sharpening strength (postTemporalSharpeningStrength) to define
     * the amount of sharpening the transcoder applies to your output. Set Post
     * temporal sharpening strength to Low (LOW), Medium (MEDIUM), or High (HIGH) to
     * indicate the amount of sharpening.
     */
    inline void SetPostTemporalSharpeningStrength(const NoiseFilterPostTemporalSharpeningStrength& value) { m_postTemporalSharpeningStrengthHasBeenSet = true; m_postTemporalSharpeningStrength = value; }

    /**
     * Use Post temporal sharpening strength (postTemporalSharpeningStrength) to define
     * the amount of sharpening the transcoder applies to your output. Set Post
     * temporal sharpening strength to Low (LOW), Medium (MEDIUM), or High (HIGH) to
     * indicate the amount of sharpening.
     */
    inline void SetPostTemporalSharpeningStrength(NoiseFilterPostTemporalSharpeningStrength&& value) { m_postTemporalSharpeningStrengthHasBeenSet = true; m_postTemporalSharpeningStrength = std::move(value); }

    /**
     * Use Post temporal sharpening strength (postTemporalSharpeningStrength) to define
     * the amount of sharpening the transcoder applies to your output. Set Post
     * temporal sharpening strength to Low (LOW), Medium (MEDIUM), or High (HIGH) to
     * indicate the amount of sharpening.
     */
    inline NoiseReducerTemporalFilterSettings& WithPostTemporalSharpeningStrength(const NoiseFilterPostTemporalSharpeningStrength& value) { SetPostTemporalSharpeningStrength(value); return *this;}

    /**
     * Use Post temporal sharpening strength (postTemporalSharpeningStrength) to define
     * the amount of sharpening the transcoder applies to your output. Set Post
     * temporal sharpening strength to Low (LOW), Medium (MEDIUM), or High (HIGH) to
     * indicate the amount of sharpening.
     */
    inline NoiseReducerTemporalFilterSettings& WithPostTemporalSharpeningStrength(NoiseFilterPostTemporalSharpeningStrength&& value) { SetPostTemporalSharpeningStrength(std::move(value)); return *this;}


    /**
     * The speed of the filter (higher number is faster). Low setting reduces bit rate
     * at the cost of transcode time, high setting improves transcode time at the cost
     * of bit rate.
     */
    inline int GetSpeed() const{ return m_speed; }

    /**
     * The speed of the filter (higher number is faster). Low setting reduces bit rate
     * at the cost of transcode time, high setting improves transcode time at the cost
     * of bit rate.
     */
    inline bool SpeedHasBeenSet() const { return m_speedHasBeenSet; }

    /**
     * The speed of the filter (higher number is faster). Low setting reduces bit rate
     * at the cost of transcode time, high setting improves transcode time at the cost
     * of bit rate.
     */
    inline void SetSpeed(int value) { m_speedHasBeenSet = true; m_speed = value; }

    /**
     * The speed of the filter (higher number is faster). Low setting reduces bit rate
     * at the cost of transcode time, high setting improves transcode time at the cost
     * of bit rate.
     */
    inline NoiseReducerTemporalFilterSettings& WithSpeed(int value) { SetSpeed(value); return *this;}


    /**
     * Specify the strength of the noise reducing filter on this output. Higher values
     * produce stronger filtering. We recommend the following value ranges, depending
     * on the result that you want: * 0-2 for complexity reduction with minimal
     * sharpness loss * 2-8 for complexity reduction with image preservation * 8-16 for
     * a high level of complexity reduction
     */
    inline int GetStrength() const{ return m_strength; }

    /**
     * Specify the strength of the noise reducing filter on this output. Higher values
     * produce stronger filtering. We recommend the following value ranges, depending
     * on the result that you want: * 0-2 for complexity reduction with minimal
     * sharpness loss * 2-8 for complexity reduction with image preservation * 8-16 for
     * a high level of complexity reduction
     */
    inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }

    /**
     * Specify the strength of the noise reducing filter on this output. Higher values
     * produce stronger filtering. We recommend the following value ranges, depending
     * on the result that you want: * 0-2 for complexity reduction with minimal
     * sharpness loss * 2-8 for complexity reduction with image preservation * 8-16 for
     * a high level of complexity reduction
     */
    inline void SetStrength(int value) { m_strengthHasBeenSet = true; m_strength = value; }

    /**
     * Specify the strength of the noise reducing filter on this output. Higher values
     * produce stronger filtering. We recommend the following value ranges, depending
     * on the result that you want: * 0-2 for complexity reduction with minimal
     * sharpness loss * 2-8 for complexity reduction with image preservation * 8-16 for
     * a high level of complexity reduction
     */
    inline NoiseReducerTemporalFilterSettings& WithStrength(int value) { SetStrength(value); return *this;}

  private:

    int m_aggressiveMode;
    bool m_aggressiveModeHasBeenSet = false;

    NoiseFilterPostTemporalSharpening m_postTemporalSharpening;
    bool m_postTemporalSharpeningHasBeenSet = false;

    NoiseFilterPostTemporalSharpeningStrength m_postTemporalSharpeningStrength;
    bool m_postTemporalSharpeningStrengthHasBeenSet = false;

    int m_speed;
    bool m_speedHasBeenSet = false;

    int m_strength;
    bool m_strengthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
